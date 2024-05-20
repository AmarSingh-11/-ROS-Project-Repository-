#!/usr/bin/env python3
import rospy  # Import the rospy library
from std_msgs.msg import Float64  # Import the Float64 message type
from std_msgs.msg import Int64  # Import the Int64 message type

# Define a callback function to handle incoming messages

ros = rospy
distance = 0
distance1 = 0
def callback(msg):
    distance = msg.data
    # This function will be called each time a new message is received on the "distance" topic
    # msg is the message object received
    # Print the message before logging the received distance
    #print(distance)  # Log the received distance to the console

# Define a callback function to handle incoming messages
def callback1(msg):
    distance1 = msg.data
   # print(distance1)
   
def main():
    ros.int_node('distance_subscriber')
    sub = ros.Subscriber('distance',Float64, callback)
    sub1 = ros.Subscriber('distance1',Int64,callback1)
    ros.spin()
