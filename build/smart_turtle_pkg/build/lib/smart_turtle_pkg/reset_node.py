#!/usr/bin/env python3

"""
============================================================================
Name        : reset_node.py
Author      : Mahmoud Abouzeid
Description :
    This ROS2 node is responsible for periodically resetting the turtlesim
    environment every 10 seconds.

    It performs the following tasks:
        1. Calls the /reset service to reposition the turtle
        2. Publishes a signal message to notify other nodes

    The node publishes to:
        /smart_turtle/command → sends reset signal

    The node uses services:
        /reset → resets turtle position
        /clear → clears drawing (optional, not used here yet)

Features :
    - Automatic reset every 10 seconds using a timer
    - Sends a custom message "reset_counter" to synchronize with other nodes
    - Can be extended to also call /clear service if needed

Note :
    - The published "reset_counter" pattern can be used by other nodes
      to reset internal counters or states.
============================================================================
"""

import rclpy 
from rclpy.node import Node
from std_srvs.srv import Empty
from smart_turtle_interface.msg import TurtleCommand


# ============================================================================
# Reset Node
# Handles periodic reset of turtlesim and notifies other nodes
# ============================================================================
class ResetNode(Node):
    def __init__(self):
        super().__init__("reset_node")
        
        # Create service clients
        self.reset_client = self.create_client(Empty, "/reset")
        self.clear_client = self.create_client(Empty, "/clear")
        
        # Publisher to send reset signal
        self.signal_pub = self.create_publisher(
            TurtleCommand,
            "/smart_turtle/command",
            10
        )
        
        # Timer triggers every 10 seconds
        self.timer = self.create_timer(10.0, self.reset_callback)

        self.get_logger().info("Reset Node initialized - watching for 10s intervals")

    # =========================================================================
    # Callback function triggered every 10 seconds
    # Calls reset service and publishes a reset signal
    # =========================================================================
    def reset_callback(self):
       
        # Call /reset service
        req = Empty.Request()
        self.reset_client.call_async(req)
        
        # Publish reset signal to other nodes
        msg = TurtleCommand()
        msg.pattern = "reset_counter"
        msg.speed = 0.0
        self.signal_pub.publish(msg)
        
        self.get_logger().info("reset done")


# ============================================================================
# Main function
# Initializes and runs the ROS2 node
# ============================================================================
def main(args=None):
    rclpy.init(args=args)
    node = ResetNode()
    
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
     main()