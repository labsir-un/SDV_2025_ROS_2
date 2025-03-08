from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Static Transform
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            name="base_link_tf",
            arguments=["0", "0", "0", "0", "0", "0", "map", "imu_frame", "20"],
        ),

        # SDV Serial Communication
        Node(
            package="sdv_serial",
            executable="sdv_serial_node",
            name="sdv_serial_node",
            remappings=[
                ("imu", "imu/data_raw"),
                ("mag", "imu/mag"),
            ],
        ),

        # Complementary Filter for IMU
        Node(
            package="imu_complementary_filter",
            executable="complementary_filter_node",
            name="complementary_filter_node",
            parameters=[{
                "publish_debug_topics": True,
                "do_bias_estimation": True,
                "do_adaptive_gain": True,
                "use_mag": True,
                "gain_acc": 0.45,
                "gain_mag": 0.025,
                "bias_alpha": 0.0,
            }],
        ),
    ])

