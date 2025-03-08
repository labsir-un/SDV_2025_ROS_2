#!/usr/bin/python
# -*- coding: utf-8 -*-
'''
This aplication shows a set of locations of LabFabEx in UNAL, where the SDVUN 
mobile robots can move. You can select one of them introducing a number in the 
screen. This aplication uses a node that subscribes to /move_base_simple/goal 
topic, sending PoseStamped messages.
'''

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped


class Sender(Node):
    """Handles goal pose publishing for predefined locations."""

    def __init__(self):
        super().__init__('sdv_send2location')

        self.pub = self.create_publisher(PoseStamped, '/move_base_simple/goal', 10)

        self.pose = PoseStamped()
        self.pose.header.frame_id = "map"

    def send_goal(self, x, y, z, w):
        """Sets and publishes a PoseStamped message with the given coordinates."""
        self.pose.header.stamp = self.get_clock().now().to_msg()
        self.pose.pose.position.x = x
        self.pose.pose.position.y = y
        self.pose.pose.orientation.z = z
        self.pose.pose.orientation.w = w
        self.pub.publish(self.pose)
        self.get_logger().info("Goal sent.")

    def sendSDVtoExperimentalCell(self):
        self.send_goal(0.8, 5.8, 0.0, 0.1)

    def sendSDVtoManufacturingCell(self):
        self.send_goal(0.801138877869, -4.6122341156, 0.700009406104, 0.714133622907)

    def sendSDVtoIndustrialCell(self):
        self.send_goal(6.76584243774, 3.13956570625, 1.0, 0.0)

    def sendSDVtoMotomanUnloadingPlace(self):
        self.send_goal(6.76584243774, 3.13956570625, 1.0, 0.0)

    def sendSDVtoHome(self):
        self.send_goal(0.0, 0.0, 0.0, 1.0)

    def sendSDVtoC1(self):
        self.send_goal(0.7067, -2.9218, 0.69, 0.715)


def print_menu():
    """Prints the menu options."""
    print("Select an option\n"
          "  1) Send to Experimental Cell\n"
          "  2) Send to Manufacturing Cell\n"
          "  3) Send to Industrial Cell\n"
          "  4) Send to Motoman unloading place\n"
          "  5) Send to Home\n"
          "  6) Send to Prototyping Cell (Not implemented)\n"
          "  7) Print menu again\n"
          "  8) Exit")


def main(args=None):
    """Main function handling user input and publishing goals."""
    rclpy.init(args=args)
    sender = Sender()
    print_menu()

    try:
        while rclpy.ok():
            option = input().strip()

            if option == '1':
                sender.sendSDVtoExperimentalCell()
            elif option == '2':
                sender.sendSDVtoManufacturingCell()
            elif option == '3':
                sender.sendSDVtoIndustrialCell()
            elif option == '4':
                sender.sendSDVtoMotomanUnloadingPlace()
            elif option == '5':
                sender.sendSDVtoHome()
            elif option == '6':
                print("\nNot implemented... Try another option.")
            elif option == '7':
                print_menu()
            elif option == '8':
                print("Exiting.")
                break
            else:
                print(f"Wrong command. Insert a value between 1 and 8.")

    except KeyboardInterrupt:
        pass
    finally:
        sender.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

