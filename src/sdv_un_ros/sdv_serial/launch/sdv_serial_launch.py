from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Static Transforms
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            name="imu_to_base_tf",
            arguments=["0", "0", "0", "0", "0", "0", "base_link", "imu", "20"],
        ),
        Node(
            package="tf2_ros",
            executable="static_transform_publisher",
            name="encoder_to_odom_tf",
            arguments=["0", "0", "0", "0", "0", "0", "base_link", "twist", "20"],
        ),

        # SDV Serial Communication
        Node(
            package="sdv_serial",
            executable="sdv_serial_node2",
            name="sdv_serial_node2",
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
            output="screen",
            parameters=[{
                "publish_debug_topics": False,
                "do_bias_estimation": True,
                "do_adaptive_gain": True,
                "use_mag": False,
                "gain_acc": 0.01,  # default=0.01 previous=0.45
                "gain_mag": 0.01,  # default=0.01 previous=0.025
                "bias_alpha": 0.01,  # default=0.01 previous=0.0
            }],
        ),

        # SLAM Toolbox in Localization Mode
        Node(
            package="slam_toolbox",
            executable="localization_slam_toolbox_node",
            name="slam_localization",
            parameters=[{
                "use_sim_time": False,
                "map_file_name": "~/ros2_ws/src/sdv-UN-ROS/sdv_nav/maps/LabFabEx.yaml",
                "odom_frame": "odom",
                "map_frame": "map",
                "base_frame": "base_link",
            }],
            output="screen",
        ),
    ])

