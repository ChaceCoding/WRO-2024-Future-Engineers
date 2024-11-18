# WRO-2024-Future-Engineers
# Team Information
Team ID:

Team Name: Ctrl V

Team Members: 

Caleb Lo 

Chace Chan
# Mobility
We used DIrect Current(DC)motor, type JGA25-370, we selected this motor due to its various advantages. The Medium Motor is designed for applications requiring precision and moderate power, making it ideal for steering mechanisms or smaller robot movements. It operates with a speed of up to 240 revolutions per minute (RPM) and delivers a torque of about 8 N·cm. This balance of speed and torque makes it suitable for controlling lightweight components or providing nuanced, directional control in a vehicle's steering system. The motor features built-in encoders that provide feedback to the EV3 Brick, allowing for precise control over rotations and positions—an essential feature for consistent vehicle movement and maneuvering.

The medium motor can be easily mounted onto various chassis designs using LEGO’s versatile building system. For instance, in a four-wheel drive vehicle, the medium motor can be employed for steering, while larger motors handle propulsion. When selecting motors, engineering considerations such as the required torque to move the vehicle’s mass and the necessary speed for the vehicle’s intended task must be taken into account. Proper mounting of the motors ensures stability and optimal power transmission, which is essential for maintaining control over the vehicle’s movements under different loads and terrains.

This chassis has a vaious of advantages. First and foremost, the Ackermann steering geometry is designed to ensure that all wheels of the vehicle follow circular paths during a turn. This minimizes tire scrub and improves maneuverability. The steering linkage geometry allows for proper wheel alignment, enhancing stability and control. Besides, the design distributes forces evenly across the chassis, which helps in managing the load during turns and reduces wear on the tires and steering components. Also, the steering mechanism provides a mechanical advantage, allowing for easier steering with less effort. This is crucial for remote-controlled and autonomous vehicles. 

# Power and Sensing
In the Open Challenge, we utilized a Ultrasonic sensor to measure the distance between the car and surrounding walls. Firstly, we have set a target angle for the car to align to the middle of th track, the target angle starts at 0 degrees at first, and added 90 degrees after each turn. However, the EV3 gyro might drift and return incurate data. Therefore, we employed the Ultrasonic sensor to measure the distance data. When the car detects a wall near to its left or right side, it will adjust its moving angle to align itself to the middle of the track. Additionally, during the obstacle challenge round, the sensor detects nearby obstacles, allowing the car to gauge the distance between itself and these obstacles. This information helps the car make timely decisions to turn left or right based on traffic signs. 

We heavily rely on the TOF sensor due to various reasons. Firstly, it has a high accuracy, with only at most 5% error to the tracking distance, which made us concistently and accurately finish our task, decreasing the "luck" factor through our project. Also, unlike Lidar and other types of sensor, it is less affected by ambient light conditions, allowing it to be more adaptable to different lighting environments. Besides, TOF is designed to operate efficiently, consuming less power compared to other sensing technologies, which can work well with our arduino, that cannot provide a high voltage.

# Obstacles
Huskylens is utilized throughout the obstacle challenge. We begin by programming the camera to divide the view into three zones, labeled from right to left as Zone 1, Zone 2, and Zone 3. When an obstacle is detected in one of these zones, the car will adjust its heading by a specific number of degrees corresponding to the zone in which the obstacle is located.
After navigating past the obstacle, the car may be misaligned, tilting either to the right or left. To correct this, we employ a gyroscope to measure the degree of tilt and send this data to the Arduino Uno. The Arduino then adjusts the car's orientation, ensuring it is properly aligned and facing forward.
# Pictures
# Videos
# Design Description and Usage
Usage:

Chassis:         YFROBOT ackerman steering chassis (2WD)

Traction Motor: 

Main Board: Bluebird  Arduion Uno Broad (ATMEGA328P-AU)

Breakout board: AT8236 Motor Drive Breakout Board

Motor: JGA25-370 Motor

Battery: 2x Panasonic 18650 2000mAH 3.7V Lithium Battery (7.6V 2S1P Series connection)

Gearbox: 1:61.2 Planetary Gearbox

Sensors:
1. Ultrasonic Sensor: HC-SR04
2. Gyroscope GY521 MPU6050
3. Long range TOF sensor: VL53LX
4. Normal TOF Sensor: VL53L0X
   
Battery: 2x Panasonic 18650 2000mAH 3.7V Lithium Battery (7.4V 2S1P Series connection)
