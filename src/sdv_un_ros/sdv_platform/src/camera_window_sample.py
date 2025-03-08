#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''
This node takes an image from platform camera and shows it in a window.
'''

import rclpy
from rclpy.node import Node
import cv2
from cv_bridge import CvBridge
from sensor_msgs.msg import Image

class ImageWindower(Node):

    def __init__(self):
        super().__init__('camera_window_samples')
        self.bridge = CvBridge()
        self.create_subscription(
            Image,
            '/camera/rgb/image_rect_color',
            self.image_rgb_callback,
            10
        )
        # cv2.namedWindow('ir', 2) # Uncomment if using IR camera feed
        cv2.namedWindow('rgb', 1)

    def image_rgb_callback(self, msg):
        image = self.bridge.imgmsg_to_cv2(msg)
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        cv2.imshow('rgb', image)
        cv2.waitKey(3)

    # If using IR camera feed, uncomment and implement this function
    # def image_ir_callback(self, msg):
    #     image = self.bridge.imgmsg_to_cv2(msg)
    #     cv2.imshow('ir', image)
    #     cv2.waitKey(3)

def main(args=None):
    rclpy.init(args=args)
    window = ImageWindower()
    rclpy.spin(window)

if __name__ == '__main__':
    main()

