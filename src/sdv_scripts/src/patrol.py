#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped

class Patrol(Node):
    def __init__(self):
        super().__init__('patrol')

        # Publisher
        self.goal_pub = self.create_publisher(PoseStamped, 'sdvun1/move_base_simple/goal', 10)

        # Waypoints
        self.x_values = [0.5, 0.9, 2]
        self.y_values = [-3, -6, -8]
        self.z_values = [-0.7, 0, -0.7]
        self.w_values = [0.7, 1, -0.7]
        self.t_values = [10, 10, 10]
        self.pose_index = 0

        # Timer for publishing waypoints
        self.timer = self.create_timer(self.t_values[self.pose_index], self.publish_goal)

    def publish_goal(self):
        """Publishes the next goal pose and cycles through waypoints."""
        goal_msg = PoseStamped()
        goal_msg.header.frame_id = "map"
        goal_msg.header.stamp = self.get_clock().now().to_msg()
        goal_msg.pose.position.x = self.x_values[self.pose_index]
        goal_msg.pose.position.y = self.y_values[self.pose_index]
        goal_msg.pose.orientation.z = self.z_values[self.pose_index]
        goal_msg.pose.orientation.w = self.w_values[self.pose_index]

        self.goal_pub.publish(goal_msg)
        self.get_logger().info(f"Sent pose {self.pose_index} to SDVUN1.")

        # Cycle to the next pose
        self.pose_index = (self.pose_index + 1) % len(self.x_values)
        self.timer.cancel()
        self.timer = self.create_timer(self.t_values[self.pose_index], self.publish_goal)

def main(args=None):
    rclpy.init(args=args)
    node = Patrol()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

