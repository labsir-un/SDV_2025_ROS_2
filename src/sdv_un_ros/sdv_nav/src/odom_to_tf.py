#!/usr/bin/env python

import sys
import rospy
from nav_msgs.msg import Odometry
import tf

parent_frame = "odom"
child_frame = "base_link"
odom_topic = "odom"

def callback(odom_msg):

    # Read position from odometry message
    x = odom_msg.pose.pose.position.x
    y = odom_msg.pose.pose.position.y
    z = odom_msg.pose.pose.position.z
    p = (x, y, z)

    # Read orientation from odometry message
    q1 = odom_msg.pose.pose.orientation.x
    q2 = odom_msg.pose.pose.orientation.y
    q3 = odom_msg.pose.pose.orientation.z
    q4 = odom_msg.pose.pose.orientation.w
    q = (q1, q2, q3, q4)

    # Publish TF message
    br = tf.TransformBroadcaster()
    br.sendTransform(p, q, rospy.Time.now(), child_frame, parent_frame)


def fetch_param(name, default):
    if rospy.has_param(name):
        return rospy.get_param(name)
    else:
        print("Parameter {} not defined. Defaulting to {}".format(name, default))
        rospy.loginfo("Parameter {} not defined. Defaulting to {}".format(name, default))
        return default


if __name__ == "__main__":

    # Init node
    rospy.init_node('odom_to_tf')

    # Read parameters
    parent_frame = fetch_param('~parent_frame', "odom")
    child_frame = fetch_param('~child_frame', "base_link")
    odom_topic = fetch_param('~odom_topic', "odom")

    # Subscriber
    rospy.Subscriber(odom_topic, Odometry, callback)

    # Spin
    rospy.spin()
