#!/usr/bin/env python3

"""
============================================================================
Name        : turtle_controller.py
Author      : Mahmoud Abouzeid
Description :
    This ROS2 node controls a turtlesim robot using custom commands.

    It supports multiple motion patterns:
        1. Circle   → moves in a circular path
        2. Square   → moves in a square trajectory using timed phases
        3. Spiral   → expands outward in a spiral motion

    The node subscribes to:
        /smart_turtle/command  → receives pattern & speed

    The node publishes to:
        /turtle1/cmd_vel       → sends velocity commands

    Additional Features:
        - Automatically resets turtlesim screen when switching patterns
        - Uses timers for smooth continuous motion
        - Handles different motion logics internally

Note :
    - Square motion is time-based (forward + turn phases)
    - Spiral increases linear velocity gradually
    - Circle uses equal linear and angular velocity
============================================================================
"""

# Import required ROS2 libraries and messages
import rclpy
from rclpy.node import Node
from smart_turtle_interface.msg import TurtleCommand
from geometry_msgs.msg import Twist
from std_srvs.srv import Empty
import math


# ============================================================================
# Turtle Controller Node
# Handles movement patterns and communication with turtlesim
# ============================================================================
class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller")

        # Subscriber & Publisher
        self.subscriber = self.create_subscription(
            TurtleCommand,
            "/smart_turtle/command",
            self.command_callback,
            10
        )

        self.publisher = self.create_publisher(
            Twist,
            "/turtle1/cmd_vel",
            10
        )

        # Timer for continuous motion update
        self.create_timer(0.1, self.move_turtle)

        # Service client for resetting turtlesim
        self.reset_client = self.create_client(Empty, "/reset")

        # State variables
        self.pattern = ""
        self.speed = 0.0
        self.phase_timer = 0.0
        self.spiral_timer = 0.0
        self.square_counter = 0

        self.get_logger().info("Controller started")

    # Call reset service
    def call_reset(self):
        if self.reset_client.service_is_ready():
            self.reset_client.call_async(Empty.Request())
        else:
            self.get_logger().warn("Reset service not available")

    # Handle incoming commands
    def command_callback(self, msg):
        if self.pattern != msg.pattern:
            self.pattern = msg.pattern

            # Reset timers
            self.phase_timer = 0.0
            self.spiral_timer = 0.0
            self.square_counter = 0

            # Reset screen for some patterns
            if self.pattern in ["spiral", "square"]:
                self.call_reset()

        self.speed = msg.speed

    # Main motion logic
    def move_turtle(self):
        twist = Twist()

        if self.pattern == "circle":
            twist.linear.x = self.speed
            twist.angular.z = self.speed

        elif self.pattern == "square":
            T_fwd  = 1.5
            T_turn = 0.5
            T_side = T_fwd + T_turn
            T_full = T_side * 4

            t = self.phase_timer % T_side

            if t < T_fwd:
                twist.linear.x  = self.speed
                twist.angular.z = 0.0
            else:
                twist.linear.x  = 0.0
                twist.angular.z = 3.1416

            self.phase_timer += 0.1

            if self.phase_timer >= T_full:
                self.phase_timer = 0.0

        elif self.pattern == "spiral":
            self.spiral_timer  += 0.1
            twist.linear.x      = self.speed * (0.5 + self.spiral_timer * 0.1)
            twist.angular.z     = 2.0

        else:
            twist.linear.x  = 0.0
            twist.angular.z = 0.0

        self.publisher.publish(twist)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()