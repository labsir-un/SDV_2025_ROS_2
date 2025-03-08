#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_srvs.srv import Empty
from std_msgs.msg import Empty as EMsg
from geometry_msgs.msg import PoseStamped
from action_msgs.msg import GoalStatusArray
from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient

class CostmapCleaner(Node):
    def __init__(self):
        super().__init__('costmap_cleaner')
        
        self.source = self.declare_parameter("request_source", True).value

        # Create service client for clearing costmaps
        self.client = self.create_client(Empty, 'navigate_to_pose/clear_costmaps')
        
        # Ensure service is available
        while not self.client.wait_for_service(timeout_sec=2.0):
            self.get_logger().warn("Waiting for costmap clear service...")

        if self.source:
            self.create_subscription(PoseStamped, 'goal_pose', self.callback, 10)
            self.create_subscription(NavigateToPose.Goal, 'navigate_to_pose/_action/goal', self.callback, 10)
            self.get_logger().info("COSTMAP_CLEANER: Costmaps will be cleared for every new goal!")
        else:
            self.create_subscription(EMsg, 'clear_costmap/clear', self.callback, 10)
            self.get_logger().info("COSTMAP_CLEANER: Costmaps will be cleared on request!")

    def costmap_cleaner(self):
        req = Empty.Request()
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info("COSTMAP_CLEANER: Costmap cleaned")
        else:
            self.get_logger().error("COSTMAP_CLEANER: Failed to clear costmap")

    def callback(self, msg):
        self.costmap_cleaner()

def main(args=None):
    rclpy.init(args=args)
    node = CostmapCleaner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

