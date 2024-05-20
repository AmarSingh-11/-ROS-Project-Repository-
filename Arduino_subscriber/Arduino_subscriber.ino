#include <ros.h>
#include <std_msgs/Float64.h>

// Initialize a NodeHandle object
ros::NodeHandle nh;

// Declare a variable to store distance data
float distance;

// Define a callback function to handle incoming messages on the "distance" topic
void callback(const std_msgs::Float64 &msg_1)
{
  // Store the received distance data in the distance variable
  distance = msg_1.data;
}

// Define a subscriber object for the "distance" topic, specifying the callback function
ros::Subscriber<std_msgs::Float64> dist_sub("distance", callback);

void setup()
{
  // Set the baud rate for communication
  nh.getHardware()->setBaud(9600);

  // Initialize the ROS node
  nh.initNode(); 

  // Subscribe to the "distance" topic
  nh.subscribe(dist_sub);
}

void loop()
{
  // Process incoming messages and callbacks
  nh.spinOnce();
}
