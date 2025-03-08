import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry


class OdomSlow(Node):
    def __init__(self):
        super().__init__('odom_slow')

        # Odom Slow Publisher
        self.odom_slow_publisher = self.create_publisher(Odometry, '/odom_slow', 1)

        # Odom Listener
        self.create_subscription(Odometry, '/odom', self.save_odometry_msg, 1)

        # Storage for last received odometry message
        self.last_odometry_msg = None

        # Timer to publish at a lower rate (4 Hz)
        self.timer = self.create_timer(1.0 / 4, self.publish_slow_odom)

        self.get_logger().info("Odom Slow Node Started")

    def save_odometry_msg(self, msg):
        """Callback to store the latest odometry message."""
        self.last_odometry_msg = msg

    def publish_slow_odom(self):
        """Publish the last received odometry message at a slower rate."""
        if self.last_odometry_msg is not None:
            self.odom_slow_publisher.publish(self.last_odometry_msg)


def main():
    """
    Main entry point for the Odom Slow Node.

    This function initializes ROS2, creates an instance of the OdomSlow class,
    and starts the main loop with rclpy.spin().

    The main loop runs until a KeyboardInterrupt is received, at which point the
    node is destroyed and ROS2 is shut down.

    """
    rclpy.init()
    node = OdomSlow()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

