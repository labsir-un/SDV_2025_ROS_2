#!/usr/bin/env python3

import json
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose  # Use this action instead of MoveBaseAction
from sdv_msgs.msg import SdvPlatform       # Assuming your custom message exists in ROS 2

class BridgeConnection(Node):

    def __init__(self):
        super().__init__('firebase_listener')

        # Declare and get parameters.
        # In ROS 2, parameters are node-local.
        self.declare_parameter('robot_model', 'SDV1')
        robot_model = self.get_parameter('robot_model').value

        self.declare_parameter('namespace', '/')
        self.declare_parameter('robot_name', robot_model)
        self.namespace = self.get_parameter('namespace').value
        self.robot_name = self.get_parameter('robot_name').value

        # Obtain suffix from the last character of robot_name
        try:
            self.suffix = int(self.robot_name[-1])
        except Exception as e:
            self.get_logger().error(f"Error parsing suffix from robot_name: {e}")
            self.suffix = 0

        # Format namespace: remove spaces, ensure it starts and ends with '/'
        self.namespace = self.namespace.replace(" ", "_")
        if self.namespace != "/":
            if not self.namespace.startswith("/"):
                self.namespace = "/" + self.namespace
            if not self.namespace.endswith("/"):
                self.namespace = self.namespace + "/"
        self.get_logger().debug(f"Full namespace: {self.namespace}")

        # Create publisher for step_result topic
        self.result_pub = self.create_publisher(String, 'step_result', 10)

        # Create subscription for step_command topic
        self.create_subscript
