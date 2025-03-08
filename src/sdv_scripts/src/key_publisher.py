#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
key_publisher.py

This application publishes keystrokes. Generates string messages in the 'keys' topic.
'''
import sys
import select
import tty
import termios
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class KeyPublisher(Node):
    def __init__(self):
        super().__init__('keyboard_driver')

        # Publisher
        self.key_pub = self.create_publisher(String, 'keys', 10)

        # Terminal settings
        self.old_attr = termios.tcgetattr(sys.stdin)
        tty.setcbreak(sys.stdin.fileno())

        # Timer to check for keypresses at 100Hz
        self.create_timer(1.0 / 100, self.publish_key)

        self.get_logger().info("Publishing keystrokes. Press Ctrl-C to exit...")

    def publish_key(self):
        """Checks for keypresses and publishes them."""
        if select.select([sys.stdin], [], [], 0)[0] == [sys.stdin]:
            key = sys.stdin.read(1)
            self.key_pub.publish(String(data=key))

    def restore_terminal_settings(self):
        """Restores terminal settings when shutting down."""
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.old_attr)

def main(args=None):
    rclpy.init(args=args)
    node = KeyPublisher()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.restore_terminal_settings()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

