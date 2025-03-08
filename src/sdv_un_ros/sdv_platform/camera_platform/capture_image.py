#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''
This node takes an image from platform camera and saves it in a png file in the 
current working directory.
'''

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge

class CaptureImage(Node):
    def __init__(self):
        super().__init__('platform_watcher')
        self.camera_topic = self.declare_parameter('platform_camera_topic', '/camera/rgb/image_rect_color').value
        self.bridge = CvBridge()
        self.image_sub = self.create_subscription(
            Image,
            self.camera_topic,
            self.image_callback,
            10
        )

    def image_callback(self, msg):
        # Convert the ROS Image message to an OpenCV image
        image = self.bridge.imgmsg_to_cv2(msg)
        # Convert BGR to RGB
        rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        # Save the image as PNG
        cv2.imwrite('capture.png', rgb)
        self.get_logger().info('Capture saved in a file named "capture.png". Exiting.')
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    capture_image_node = CaptureImage()
    rclpy.spin(capture_image_node)

if __name__ == '__main__':
    main()

