#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node

class GetParamNode(Node):
    def __init__(self, param_name):
        super().__init__('get_param_node')

        self.declare_parameter(param_name, '')  # Declare with default value
        param_value = self.get_parameter(param_name).value
        print(param_value)

def main(args=None):
    rclpy.init(args=args)

    if len(sys.argv) < 2:
        print("Usage: get_param.py <parameter_name>")
        return

    param_name = sys.argv[1]
    node = GetParamNode(param_name)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

