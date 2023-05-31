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

print("x: ", x, "y: ", y, "theta: ", theta)
def newOdom(msg):
    global x
    global y
    global theta

    x = msg.pose.pose.position.x
    y = msg.pose.pose.position.y

    rot_q = msg.pose.pose.orientation
    (roll, pitch, theta) = euler_from_quaternion([rot_q.x, rot_q.y, rot_q.z, rot_q.w])

rospy.init_node("speed_controller")

sub = rospy.Subscriber("/odometry/filtered", Odometry, newOdom)
# pub = rospy.Publisher("/cmd_vel", Twist, queue_size=1)
course_pub = rospy.Publisher("/cmd_course", Course, queue_size=1)
# speed = Twist()
heronCourse = Course()
r = rospy.Rate(4)
print("course_pub")
goal = Point()
goal.x = 5
goal.y = 5

while not rospy.is_shutdown():
    inc_x = goal.x - x
    inc_y = goal.y - y
    print("inc_x: ", inc_x, "inc_y: ", inc_y)
    angle_to_goal = atan2(inc_y, inc_x)
    print("angle to goal: ", angle_to_goal)
    if abs(angle_to_goal - theta) > 0.1:
        heronCourse.speed = 0.0
        heronCourse.yaw = 0.3
        # speed.linear.x = 0.0
        # speed.angular.z = 0.3
        print("i am in if statement")
    else:
        heronCourse.speed = 0.5
        heronCourse.yaw = 0.0
        # speed.linear.x = 0.5
        # speed.angular.z = 0.0
        print("i am in else statement")

    # pub.publish(speed)
    course_pub.publish(heronCourse)
    r.sleep()
