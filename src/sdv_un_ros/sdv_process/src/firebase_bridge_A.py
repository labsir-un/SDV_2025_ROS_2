#!/usr/bin/env python3

import json
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from std_msgs.msg import String
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose


class BridgeConnection(Node):

    def __init__(self):
        super().__init__('firebase_bridge')
        # Create a subscription to 'step_command'
        self.subscription = self.create_subscription(
            String,
            'step_command',
            self.step_received,
            10)
        # Create a publisher for 'step_result'
        self.result_pub = self.create_publisher(String, 'step_result', 10)
        # Create an action client for the navigation action.
        # Adjust the action name if needed.
        self.action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        self.get_logger().debug("BridgeConnection node initialized.")

    def step_received(self, msg: String):
        try:
            jsn = json.loads(msg.data)
            self.get_logger().debug(f"Decoded received step: {jsn}")
        except Exception as e:
            self.get_logger().error(f"Error decoding JSON: {e}")
            return

        stepargs = jsn.get('args', {})
        # Build a PoseStamped message from the provided arguments
        pose = PoseStamped()
        pose.header.frame_id = "map"
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose.position.x = stepargs.get('x', 0.0)
        pose.pose.position.y = stepargs.get('y', 0.0)
        # For orientation, ensure you provide valid quaternion values.
        pose.pose.orientation.z = stepargs.get('z', 0.0)
        pose.pose.orientation.w = stepargs.get('w', 1.0)

        goal_msg = NavigateToPose.Goal()
        # In the NavigateToPose action, the goal field is named 'pose'
        goal_msg.pose = pose

        self.get_logger().info("Waiting for navigation action server...")
        # Wait for the action server to be available
        self.action_client.wait_for_server()

        self.get_logger().info("Sending goal to navigation action server...")
        send_goal_future = self.action_client.send_goal_async(goal_msg)
        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Goal rejected by server.")
            self.publish_result({'success': False, 'error': 'Goal rejected'})
            return

        self.get_logger().info("Goal accepted; waiting for result...")
        goal_handle.get_result_async().add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result_response = future.result()
        # The result of NavigateToPose is usually defined in the action.
        # For example, it might contain a 'result' field or simply indicate success.
        # Here we assume that if a result is received, the goal succeeded.
        self.get_logger().info("Navigation action completed.")
        # Depending on your application you might check the result fields.
        self.publish_result({'success': True, 'error': None})

    def publish_result(self, result_dict):
        msg = String()
        msg.data = json.dumps(result_dict, ensure_ascii=False)
        self.result_pub.publish(msg)
        self.get_logger().debug(f"Published result: {msg.data}")


def main(args=None):
    rclpy.init(args=args)
    node = BridgeConnection()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down node.")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
