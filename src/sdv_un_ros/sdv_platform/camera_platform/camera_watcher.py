#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
import cv2
import cv_bridge
import numpy as np
from image_recog_tools import get_mask, ImageClassifier, resize_img
from launch.actions import IncludeLaunchDescription


from sensor_msgs.msg import Image
from sdv_msgs.msg import SdvPlatform, Buzzer, LED
from time import sleep

class PlatformWatcher(Node):
    def __init__(self):
        super().__init__('camera_watcher')

        self.last_image = None
        self.mask = None
        self.roi = None
        self.obtained_roi = False
        self.platform_status = 'undefined'
        self.last_platform_status = 'undefined'
        self.last_platform_status_stamp = None
        self.image_classifier = None
        self.image_counter = 0

        # Configuring parameters
        self.declare_parameter('platform_camera_topic', '/camera/rgb/image_rect_color')
        self.declare_parameter('platform_status_topic', '/platform')
        self.declare_parameter('buzzer_topic', '/buzzer')
        self.declare_parameter('led_topic', '/led')
        self.declare_parameter('show_samples', False)
        self.declare_parameter('image_size', 100)

        # Getting parameters
        self.camera_topic = self.get_parameter('platform_camera_topic').get_parameter_value().string_value
        self.platform_status_topic = self.get_parameter('platform_status_topic').get_parameter_value().string_value
        self.buzzer_topic = self.get_parameter('buzzer_topic').get_parameter_value().string_value
        self.led_topic = self.get_parameter('led_topic').get_parameter_value().string_value
        self.show_samples = self.get_parameter('show_samples').get_parameter_value().bool_value
        self.image_size = self.get_parameter('image_size').get_parameter_value().integer_value

        # Subscribers and publishers
        self.bridge = cv_bridge.CvBridge()
        self.image_sub = self.create_subscription(Image, self.camera_topic, self.image_callback, 10)
        self.platform_pub = self.create_publisher(SdvPlatform, self.platform_status_topic, 10)
        self.buzzer_pub = self.create_publisher(Buzzer, self.buzzer_topic, 10)
        self.led_pub = self.create_publisher(LED, self.led_topic, 10)

        self.led_feedback()
        self.get_roi()

    def image_callback(self, msg):
        if not self.obtained_roi:
            return

        self.last_image = msg
        self.image_counter += 1
        if self.image_counter < 15:
            return
        else:
            self.image_counter = 0

        # Detect object
        image = self.bridge.imgmsg_to_cv2(msg)
        image = resize_img(image, self.image_size)
        res, img_masked, dur = self.image_classifier.get_object(image)

        if self.show_samples:
            masked = np.array(img_masked, 'uint8')
            cv2.imshow("mask", self.mask)
            cv2.imshow("object", masked)
            cv2.waitKey(3)
            self.get_logger().info(f"Task duration = {dur}, object = {res}")

        # Setting platform status
        current_status = 'undefined'
        now_stamp = self.get_clock().now()
        if res == 1:
            current_status = 'loaded'
        else:
            current_status = 'empty'

        # Store timestamp when platform status changes
        if self.last_platform_status != current_status:
            self.last_platform_status = current_status
            self.last_platform_status_stamp = now_stamp

        # Set platform status if last change occurred at least 3 seconds ago
        dur = (now_stamp - self.last_platform_status_stamp).nanoseconds * 1e-9
        if dur >= 2.0:
            if self.platform_status == 'empty' and current_status == 'loaded':
                self.buzzer_feedback(150, 100, 3)
            self.platform_status = current_status

    def get_roi(self):
        while self.last_image is None and rclpy.ok():
            self.get_logger().info("Waiting for an image...")
            sleep(2)

        while not self.obtained_roi:
            # Color space
            image = self.bridge.imgmsg_to_cv2(self.last_image)
            image = resize_img(image, self.image_size)

            # Get mask
            roi_detected, mask, approx_poly, centroids = get_mask(image)

            # Get image classifier
            self.image_classifier = ImageClassifier(mask)

            # Assigning values
            self.mask = mask
            self.obtained_roi = roi_detected
            self.last_platform_status_stamp = self.get_clock().now()

            if self.obtained_roi:
                self.get_logger().info("ROI generated")
                self.buzzer_feedback(250, 250, 2)
            else:
                self.get_logger().info("Nothing detected")
                sleep(2)

    def pub_platform_status(self):
        # Setting SdvPlatform data and publishing it
        plat_status_msg = SdvPlatform()
        plat_status_msg.header.stamp = self.get_clock().now().to_msg()
        plat_status_msg.status = self.platform_status
        plat_status_msg.source = 'camera'

        # Publish msg
        self.platform_pub.publish(plat_status_msg)

        # Publish LED feedback
        self.led_feedback()

    def buzzer_feedback(self, time_on, time_off, cicles):
        buzzer_msg = Buzzer()
        buzzer_msg.header.stamp = self.get_clock().now().to_msg()
        buzzer_msg.time_on = time_on
        buzzer_msg.time_off = time_off
        buzzer_msg.cicles = cicles
        self.buzzer_pub.publish(buzzer_msg)

    def led_feedback(self):
        l_values = [0, 0, 0]
        if self.platform_status == 'loaded':
            l_values = [0, 255, 0]
        if self.platform_status == 'empty':
            l_values = [255, 0, 0]

        led_msg = LED()
        led_msg.header.stamp = self.get_clock().now().to_msg()
        led_msg.red = l_values[0]
        led_msg.green = l_values[1]
        led_msg.blue = l_values[2]

        self.led_pub.publish(led_msg)

def main(args=None):
    rclpy.init(args=args)
    watcher = PlatformWatcher()
    rate = watcher.create_rate(2)

    while rclpy.ok():
        watcher.pub_platform_status()
        rclpy.spin_once(watcher, timeout_sec=0.5)
        rate.sleep()

    watcher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

