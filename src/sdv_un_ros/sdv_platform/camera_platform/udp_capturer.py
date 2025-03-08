#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''
This node listens for a UDP message and takes a capture, using image messages 
from platform camera. UDP messages are published by udp_publisher.py
'''

import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from sdv_scripts.msg import Udp
import cv2
from cv_bridge import CvBridge
import numpy as np

class UDPCapturer(Node):
    def __init__(self):
        super().__init__('udp_capturer')
        self.camera_topic = self.declare_parameter('platform_camera_topic', '/camera/rgb/image_rect_color').value
        self.bridge = CvBridge()
        self.image = np.ones((100, 100, 3), dtype=np.uint8)
        self.last_capture_cmd_stamp = self.get_clock().now()

        # Subscribers
        self.image_sub = self.create_subscription(
            Image,
            self.camera_topic,
            self.image_callback,
            10
        )
        self.udp_sub = self.create_subscription(
            Udp,
            '/udp',
            self.udp_callback,
            10
        )

    def image_callback(self, msg):
        self.image = self.bridge.imgmsg_to_cv2(msg)
        self.image = cv2.cvtColor(self.image, cv2.COLOR_BGR2RGB)

    def udp_callback(self, msg):
        data = msg.content
        if data == "capture":
            time_threshold = (self.get_clock().now() - self.last_capture_cmd_stamp).seconds
            if time_threshold > 1:
                index = 0
                files = [f for f in os.listdir('.') if os.path.isfile(f)]
                for f in files:
                    if "capture_" in f:
                        i = f.replace('capture_', '')
                        i = i.replace('.png', '')
                        i = int(i)
                        if i > index:
                            index = i
                index += 1
                self.get_logger().info(f"Making a capture with {index} index")
                cv2.imwrite(f'capture_{index}.png', self.image)
                self.last_capture_cmd_stamp = self.get_clock().now()

def main(args=None):
    rclpy.init(args=args)
    udp_capturer_node = UDPCapturer()
    rclpy.spin(udp_capturer_node)

if __name__ == '__main__':
    main()

