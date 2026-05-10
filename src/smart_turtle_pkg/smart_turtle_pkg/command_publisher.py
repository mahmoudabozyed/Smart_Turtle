#!/usr/bin/env python3

"""
============================================================================
Name        : command_publisher.py
Author      : Mahmoud Abouzeid
Description :
    This ROS2 node publishes movement commands to the turtle controller
    using a custom message (TurtleCommand).

    It allows dynamic control of:
        1. Movement pattern (circle, square, spiral, etc.)
        2. Movement speed

    The values are read from ROS2 parameters so they can be changed
    at runtime using parameter commands.

    The node publishes to:
        /smart_turtle/command → sends movement instructions

Features :
    - Parameter-based control (pattern + speed)
    - Periodic publishing every 1 second
    - Easy runtime modification using ROS2 param system
    - Works as a command generator for the turtle system

Note :
    - Default pattern is "circle"
    - Default speed is 2.0
============================================================================
"""

import rclpy
from rclpy.node import Node
from smart_turtle_interface.msg import TurtleCommand


# ============================================================================
# Command Publisher Node
# Publishes movement commands to turtle controller
# ============================================================================
class CommandPublisher(Node):
    def __init__(self):
        super().__init__('command_publisher')

        # Declare ROS2 parameters
        self.declare_parameter('pattern', 'circle')
        self.declare_parameter('speed', 2.0)

        # Read initial parameter values
        self.pattern_param = self.get_parameter('pattern').value
        self.speed_param = self.get_parameter('speed').value

        # Publisher for turtle commands
        self.publisher_ = self.create_publisher(
            TurtleCommand,
            '/smart_turtle/command',
            10
        )

        # Timer to publish commands every 1 second
        self.timer_ = self.create_timer(1.0, self.timer_callback)

        self.get_logger().info("Command Publisher node has been started.")

    # =========================================================================
    # Timer callback
    # Reads parameters and publishes updated command
    # =========================================================================
    def timer_callback(self):
        msg = TurtleCommand()

        # Get updated parameters (runtime change supported)
        pattern = self.get_parameter('pattern').value
        speed = self.get_parameter('speed').value

        # Fill message
        msg.pattern = pattern
        msg.speed = speed

        # Publish message
        self.publisher_.publish(msg)

        self.get_logger().info(
            f"Publishing: Pattern = {pattern}, Speed = {speed}"
        )


# ============================================================================
# Main function
# Starts ROS2 node and keeps it running
# ============================================================================
def main(args=None):
    rclpy.init(args=args)
    node = CommandPublisher()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()