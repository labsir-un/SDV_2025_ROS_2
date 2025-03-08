#!/usr/bin/env python3

import json
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose


class FirebaseBridge(Node):
    def __init__(self):
        super().__init__('firebase_listener')

        self.get_logger().info("FirebaseBridge Node Started")

        self.result_publisher = self.create_publisher(String, 'step_result', 10)
        self.create_subscription(String, 'step_command', self.step_received, 10)
        
        self.client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

    async def step_received(self, msg):
        try:
            jsn = json.loads(msg.data)
            self.get_logger().debug(f'Decoded received step: {jsn}')

            stepargs = jsn['args']

            goal_msg = NavigateToPose.Goal()
            goal_msg.pose.header.frame_id = "map"
            goal_msg.pose.header.stamp = self.get_clock().now().to_msg()
            goal_msg.pose.pose.position.x = stepargs['x']
            goal_msg.pose.pose.position.y = stepargs['y']
            goal_msg.pose.pose.orientation.z = stepargs['z']
            goal_msg.pose.pose.orientation.w = stepargs['w']

            self.get_logger().info("Sending goal to Navigation2...")
            self.client.wait_for_server()

            send_goal_future = self.client.send_goal_async(goal_msg)
            send_goal_future.add_done_callback(self.goal_response_callback)
        except Exception as e:
            self.get_logger().error(f"Error processing step_command: {e}")

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Goal rejected by Navigation2")
            self.publish_result(False, "Goal rejected")
            return

        self.get_logger().info("Goal accepted, waiting for result...")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().status
        success = result == 4  # SUCCEEDED
        self.get_logger().info(f"Navigation2 result: {result}")
        self.publish_result(success, None if success else "Navigation failed")

    def publish_result(self, success, error):
        result_msg = {
            'success': success,
            'error': error
        }
        self.result_publisher.publish(String(data=json.dumps(result_msg)))
        self.get_logger().info(f"Published result: {result_msg}")


def main(args=None):
    rclpy.init(args=args)
    node = FirebaseBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

