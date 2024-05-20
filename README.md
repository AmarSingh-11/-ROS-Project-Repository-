# ROS-Project-Repository
Welcome to the ROS Project Repository! This repository contains all the necessary files, scripts, and documentation for our Robotic Operating System (ROS) project.

# Autonomous Mobile Robot Project

🤖 Autonomous Mobile Robot: Explore the Future! 🚀
Get ready to experience the cutting-edge world of robotics! 💥 Our Autonomous Mobile Robot is a true marvel of engineering, combining the power of the Jetson Nano 💻, the agility of ROS 🧩, and an array of advanced sensors 👀.
Equipped with:

🔭 LiDAR for precise mapping and obstacle detection
🎚️ IMU for accurate motion tracking
📡 Ultrasonic sensors for obstacle avoidance
🔌 Arduino for seamless sensor integration

Powered by Python 🐍 and ROS, our robot navigates complex environments with ease, making autonomous decisions like a pro! 🧠
Get ready to be amazed! 🚀 🤖 💥

## Hardware Components

Jetson Nano: A powerful embedded computing device for running the ROS nodes and performing computationally intensive tasks.
IMU : An Inertial Measurement Unit for measuring the robot's orientation and motion.
Arduino: A microcontroller board for interfacing with sensors and actuators.
Ultrasonic Sensors: Used for obstacle detection and avoidance.
LiDAR Sensor: A Light Detection and Ranging sensor for mapping the environment and detecting obstacles.

## Software Components

ROS: The Robot Operating System framework for building robotic applications.
Python: Used for developing ROS nodes and implementing robot control algorithms.
Arduino IDE: Used for programming the Arduino board and interfacing with sensors.

## Repository Structure

`src/`: Contains the source code for ROS nodes and packages.
`robot_control/`: ROS package for robot control and navigation.
`sensor_drivers/`: ROS package for interfacing with various sensors.
`obstacle_avoidance/`: ROS package for obstacle detection and avoidance algorithms.
 `launch/`: Contains ROS launch files for running multiple nodes simultaneously.
`config/`: Configuration files for tuning parameters and sensor calibration.
 `docs/`: Documentation and diagrams related to the project.

## Getting Started

1. Install ROS on your system (e.g., ROS Melodic or ROS Noetic).
2. Clone this repository to your workspace: `git clone https://github.com/amarsingh-11/autonomous-mobile-robot.git`
3. Build the ROS packages: `catkin_make`
4. Source the setup script: `source devel/setup.bash`
5. Connect the hardware components (Jetson Nano, Arduino, sensors) to your system.
6. Launch the robot nodes using the provided launch files: `roslaunch launch/robot.launch`

## Usage

Once the robot nodes are running, you can interact with the robot using ROS tools and commands. For example:

 Visualize sensor data using `rviz`.
 Send navigation goals using `move_base`.
Monitor robot status and sensor readings using `rostopic`.


## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
