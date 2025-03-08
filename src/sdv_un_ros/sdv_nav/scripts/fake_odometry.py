#!/usr/bin/env python3

import math
from math import sin, cos
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
import tf_transformations

class FakeOdometry(Node):
    def __init__(self):
        super().__init__('odometry_publisher')

        self.odom_pub = self.create_publisher(Odometry, '/vesc/odom', 10)
        self.timer = self.create_timer(1.0 / 30.0, self.update_odometry)  # 30 Hz

        self.x = 0.0
        self.y = 0.0
        self.th = 0.0

        self.vx = 0.0
        self.vy = 0.0
        self.vth = 0.0

        self.last_time = self.get_clock().now()

    def update_odometry(self):
        current_time = self.get_clock().now()

        dt = (current_time - self.last_time).nanoseconds * 1e-9  # Convert nanoseconds to seconds
        delta_x = (self.vx * cos(self.th) - self.vy * sin(self.th)) * dt
        delta_y = (self.vx * sin(self.th) + self.vy * cos(self.th)) * dt
        delta_th = self.vth * dt

        self.x += delta_x
        self.y += delta_y
        self.th += delta_th

        # Convert yaw to quaternion
        odom_quat = tf_transformations.quaternion_from_euler(0, 0, self.th)

        # Create odometry message
        odom = Odometry()
        odom.header.stamp = current_time.to_msg()
        odom.header.frame_id = "map"

        odom.pose.pose = Pose(Point(self.x, self.y, 0.0), Quaternion(*odom_quat))
        odom.child_frame_id = "odom"
        odom.twist.twist = Twist(Vector3(0, 0, 0), Vector3(0, 0, 0))  # Velocities remain zero

        # Publish odometry
        self.odom_pub.publish(odom)

        self.last_time = current_time

def main(args=None):
    rclpy.init(args=args)
    node = FakeOdometry()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

