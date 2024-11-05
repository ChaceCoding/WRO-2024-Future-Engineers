# WRO-2024-Future-Engineers
# Team Information
Team ID:

Team Name: Ctrl V

Team Members: 

Caleb Lo 

Chace Chan
# Mobility
We used DIrect Current(DC)motor, type JGA25-370, we selected this motor due to its various advantages. Firstly, the motor's design allows a high torque input, making it suitable for our competition, which emphasises speed. Also, it has a compact size, which made it suitable for our space contrained car, this helped us to gain a major advantage during the parking part of the competition, the smaller car size can park in the area more easily. Furthermore, the speed of the motor can be easily controlled using pulse-width modulation (PWM) or variable voltage, providing flexibility during the obstacles challenge. In addition, DC motor's simple design can also lower the time cost for maintenance and troubleshooting.

However, we also found a few disadvantages about this type of DC motor. It has a intense heat generation after a long period of testing, which made it overheat easily,it cost us some time to let it stop and cool down. Also, it generates back electromotive force (EMF), which can affect performance and require careful management in circuit design. Although there are some disadvantages throughout the DC motor, but we understand that no design will be perfect, while considering the significant advantages, this motor is the best for us to utilise.

For the chassis design, we used YFROBOT ackerman steering chassis, it uses a rear-wheel motor drive with a front steering mechanism to move forward, backward, and do left and right turns. 
Parts of the YFROBOT ackerman steering chassis:

Dimensions: 250 * 148 * 64mm

Product weight: 700g

Max load capacity: 1500g

Ground clearance: 14mm

Turning radius: 450mm

Operating voltage: 6-12v

Motor speed: 10000rpm

Reduced speed: 310rpm

Gearbox speed ratio: 1:18.9 / 1:61.2

Rated current: 0.65A

Motor power: 2.5w

Reference speed: 1.2m/s @9v

Drive system: Ackermann steering, front-wheel steering, rear-wheel drive

Servo voltage: 4.5-6v

Drive current: 400-800mA

This chassis has a vaious of advantages. First and foremost, the Ackermann steering geometry is designed to ensure that all wheels of the vehicle follow circular paths during a turn. This minimizes tire scrub and improves maneuverability. The steering linkage geometry allows for proper wheel alignment, enhancing stability and control. Besides, the design distributes forces evenly across the chassis, which helps in managing the load during turns and reduces wear on the tires and steering components. Also, the steering mechanism provides a mechanical advantage, allowing for easier steering with less effort. This is crucial for remote-controlled and autonomous vehicles. Furthermore, the design allows for tighter turning radii, making it easier for the vehicle to navigate confined spaces, which is particularly beneficial in robotics and small-scale applications. Lastly, the modular nature of the YFROBOT chassis allows for integration with various sensors and actuators, making it adaptable for different tasks, such as robotics competitions or educational projects.

These hardwares of the chassis formed a great balance between speed, flexibility and power usage, which made this chassis a comparatively long life expense and a fast speed with flexbility to deal with different senarios simultaneously.

# Power and Sensing
We utilized a Time-of-Flight (TOF) sensor to measure the distance between the car and surrounding walls. The car relies on this distance data to determine the optimal moment to turn. Additionally, during the obstacle challenge round, the sensor detects nearby obstacles, allowing the car to gauge the distance between itself and these obstacles. This information helps the car make timely decisions to turn left or right based on traffic signs.

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
