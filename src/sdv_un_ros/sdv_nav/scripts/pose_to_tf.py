#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, TransformStamped
import tf2_ros

class PoseToTF(Node):
    def __init__(self):
        super().__init__('pose_to_tf')

        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        self.subscription = self.create_subscription(
            PoseStamped,
            '/pf/viz/inferred_pose',
            self.handle_pose,
            10  # QoS profile (depth 10)
        )

    def handle_pose(self, msg):
        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "map"
        t.child_frame_id = "base_link"

        t.transform.translation.x = msg.pose.position.x
        t.transform.translation.y = msg.pose.position.y
        t.transform.translation.z = msg.pose.position.z

        t.transform.rotation = msg.pose.orientation

        self.tf_broadcaster.sendTransform(t)

def main():
    rclpy.init()
    node = PoseToTF()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

