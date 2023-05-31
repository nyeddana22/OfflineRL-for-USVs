#!/usr/bin/env python2

import rospy
from nav_msgs.msg import Odometry
from tf.transformations import euler_from_quaternion
from geometry_msgs.msg import Point, Twist
from heron_msgs.msg import Drive, Course
from math import atan2

x = 0.0
y = 0.0
theta = 0.0
linvel_x = linvel_y = angvel_x = angvel_y = 0.0
observation = []

print("x: ", x, "y: ", y, "theta: ", theta)
def newOdom(msg):
    global x
    global y
    global theta
    global linvel_x
    global observation
    global linvel_y, angvel_x, angvel_y, observation

    x = msg.pose.pose.position.x
    y = msg.pose.pose.position.y
    linvel_x = msg.twist.twist.linear.x
    linvel_y = msg.twist.twist.linear.y
    angvel_x = msg.twist.twist.angular.x
    angvel_y = msg.twist.twist.angular.y
    rot_q = msg.pose.pose.orientation
    (roll, pitch, theta) = euler_from_quaternion([rot_q.x, rot_q.y, rot_q.z, rot_q.w])

rospy.init_node("speed_controller")

sub = rospy.Subscriber("/odometry/filtered", Odometry, newOdom)
course_pub = rospy.Publisher("/cmd_course", Course, queue_size=1)
drive_pub = rospy.Publisher("/cmd_drive", Drive, queue_size=1)
heronCourse = Course()
heronDrive = Drive()
r = rospy.Rate(4) #4
print("course_pub")
goal = Point()
goal.x = 10
goal.y = 0
observation = [x, y, linvel_x, linvel_y, angvel_x, angvel_y]
print("observation: ", observation)

while not rospy.is_shutdown():
    inc_x = goal.x - x
    inc_y = goal.y - y
    print("inc_x: ", inc_x, "inc_y: ", inc_y)
    angle_to_goal = atan2(inc_y, inc_x)
    print("angle to goal: ", angle_to_goal)
    if abs(angle_to_goal - theta) > 0.1:
        # heronCourse.speed = 0
        # heronCourse.yaw = 0.3
        heronDrive.right = 0.15
        print("i am in if statement")
    else:
        # heronCourse.speed = 0.5
        # heronCourse.yaw = 0.0
        heronDrive.left = 0.1
        heronDrive.right = 0.1
        print("i am in else statement")

    # course_pub.publish(heronCourse)
    drive_pub.publish(heronDrive)
    r.sleep()
