#include <ros.h>
#include <std_msgs/Float64.h>

ros::NodeHandle nh;

// Pin definitions for the ultrasonic sensor
const int trigPin = 10; // Trigger pin
const int echoPin = 11; // Echo pin

// Variables for ultrasonic sensor measurements
long duration1; // Duration of the pulse from the ultrasonic sensor
int distance1 = 0; // Calculated distance in centimeters

// Interval for publishing distance readings (in milliseconds)
const int Interval = 100; // Reduced interval to 100 milliseconds
long previousMillis = 0;

// Message object to publish distance readings
std_msgs::Float64 distance;
ros::Publisher dist_pub("distance", &distance);

// Function to measure distance using the ultrasonic sensor
float Distance()
{
    // Send a pulse to the ultrasonic sensor
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Measure the duration of the pulse from the echo pin
    duration1 = pulseIn(echoPin, HIGH);

    // Calculate distance in centimeters using the speed of sound
    distance1 = duration1 * 0.034 / 2;

    return distance1;
}

// Setup function: runs once when the microcontroller starts
void setup()
{
    // Set baud rate for ROS communication
    nh.getHardware()->setBaud(115200);

    // Initialize ROS node
    nh.initNode();

    // Advertise the publisher for distance readings
    nh.advertise(dist_pub);

    // Set pin modes for ultrasonic sensor
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

// Loop function: runs repeatedly as long as the microcontroller is powered on
void loop()
{
    // Process any incoming ROS messages
    nh.spinOnce();

    // Get the current time
    unsigned long currentMillis = millis();

    // Check if it's time to publish a new distance reading
    if (currentMillis - previousMillis > Interval)
    {
        // Update the time for the next interval
        previousMillis = currentMillis;

        // Measure the distance using the ultrasonic sensor
        distance1 = Distance();

        // Update the distance message with the new value
        distance.data = distance1;

        // Publish the distance message
        dist_pub.publish(&distance);
    }
}
