#include <ros.h>
#include <std_msgs/Float64.h>

ros::NodeHandle nh;

float Distance;
const int Interval =1000;
long previousmillis=0;
long currentMillis =0;

std_msgs::Float64 distance;
ros::Publisher dist_pub("distance" ,&distance);

void setup()
{
nh.getHardware()->setBaud(9600);
nh.initNode();
nh.advertise(dist_pub);
}

void loop()
{
nh.spinOnce();
currentMillis = millis();
if(currentMillis-previousmillis>Interval)
{
previousmillis=currentMillis;
distance.data=10.0;
dist_pub.publish(&distance);
}
}
