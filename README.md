# WRO-2024-Future-Engineers
# Team Information
Team ID: 712

Team Name: HK-Control V

Team Members: 

Caleb Lo 

Chace Chan
# Mobility
We used DIrect Current(DC)motor, type JGA25-370, we selected this motor due to its various advantages. The Medium Motor is designed for applications requiring precision and moderate power, making it ideal for steering mechanisms or smaller robot movements. It operates with a speed of up to 240 revolutions per minute (RPM) and delivers a torque of about 8 N·cm. This balance of speed and torque makes it suitable for controlling lightweight components or providing nuanced, directional control in a vehicle's steering system. The motor features built-in encoders that provide feedback to the EV3 Brick, allowing for precise control over rotations and positions—an essential feature for consistent vehicle movement and maneuvering.

The medium motor can be easily mounted onto various chassis designs using LEGO’s versatile building system. For instance, in a four-wheel drive vehicle, the medium motor can be employed for steering, while larger motors handle propulsion. When selecting motors, engineering considerations such as the required torque to move the vehicle’s mass and the necessary speed for the vehicle’s intended task must be taken into account. Proper mounting of the motors ensures stability and optimal power transmission, which is essential for maintaining control over the vehicle’s movements under different loads and terrains.

This chassis has a vaious of advantages. First and foremost, the Ackermann steering geometry is designed to ensure that all wheels of the vehicle follow circular paths during a turn. This minimizes tire scrub and improves maneuverability. The steering linkage geometry allows for proper wheel alignment, enhancing stability and control. Besides, the design distributes forces evenly across the chassis, which helps in managing the load during turns and reduces wear on the tires and steering components. Also, the steering mechanism provides a mechanical advantage, allowing for easier steering with less effort. This is crucial for remote-controlled and autonomous vehicles. 



# Power and Sensing
In the Open Challenge, we utilized a Ultrasonic sensor to measure the distance between the car and surrounding walls. Firstly, we have set a target angle for the car to align to the middle of th track, the target angle starts at 0 degrees at first, and added 90 degrees after each turn. However, the EV3 gyro might drift and return incurate data. Therefore, we employed the Ultrasonic sensor to measure the distance data. When the car detects a wall near to its left or right side, it will adjust its moving angle to align itself to the middle of the track. Additionally, during the obstacle challenge round, the sensor detects nearby obstacles, allowing the car to gauge the distance between itself and these obstacles. This information helps the car make timely decisions to turn left or right based on traffic signs. 

Here is our code for the Hkskylens detection
![Screenshot 2024-11-29 122506](https://github.com/user-attachments/assets/15e5b355-a5dd-4cbc-b047-70685485ddb0)

# Obstacles
For the obstacle challenge, we employed a Huskylens to identify the green and red blocks that represent traffic signs. We used color recognition to designate the green block as ID1 and the red block as ID2. Utilizing Mindstorm software, we introduced a variable called "zone no." to categorize the image input from the Huskylens into three rows based on the blocks' heights. The closest block was assigned "zone no. 1," the middle block received a value of 2, and the furthest block was designated "zone no. 3." The turning angle of the car was adjusted according to its distance from the block, determined by the previously mentioned zone number.

Additionally, we implemented a variable named "zone letter," which divided the image from the Huskylens into three lateral zones: left, middle, and right. The left zone was assigned a value of 1, the middle zone a value of 2, and the right zone a value of 3. According to the rules, when the car detects a red traffic sign, it needs to turn right; thus, the car will turn more sharply if the block is closer to its right side. Conversely, for the green block, the car will turn more if the block is nearer to its left side. The maximum turning angle is set at 35 degrees, and the car will not turn when the block is already in the dodging zone, ensuring that it will not collide with the block.

To facilitate this, we transformed the image input from the Huskylens into a 3 x 3 grid, implementing a simple form of proportional turning based on PID control, which provides the car with greater flexibility in dodging obstacles. After executing a dodge, we adjusted the car to align parallel to the track, using a gyro for self-correction. However, the car must also monitor the blocks in the next row and move towards the midline to maintain its consistency in dodging other blocks. Consequently, it will turn 35 degrees in the opposite direction of its previous dodge. We incorporated a loop interrupt in the program to allow the turn to be interrupted if necessary to dodge the next block. This process will continue until one of the ultrasonic sensors, mounted on the other sides, detects a distance greater than 200 degrees, prompting the car to turn 90 degrees and resume the traffic light dodging program.

Here is our code for the obstacle challenge:
![Screenshot 2024-11-29 122838](https://github.com/user-attachments/assets/e34e09ff-7e9d-4cc5-abea-702593ffcbdc)

# Pictures and Videos



# Design Description and Usage

During our coding process, we found too much instability within audrino, and too complex for us to handle. Therefore, we changed our coding software to EV3 mindstorm and EV3 classroom, which is easier to control and provides more stability within our design.

Usage:

Chassis: Lego Built

Traction Motor: 

Main Board: EV3 Main Board

Motor: EV3 Medium Motor

Battery: 45501, EV3 Rechargeable DC Battery, LEGO® MINDSTORMS®

Sensors:
1. Lego Gyro Sensor
2. Lego Ultrasonic Sensor x2
3. Huskylens with IVROBOT adapter
   
Battery: 2x Panasonic 18650 2000mAH 3.7V Lithium Battery (7.4V 2S1P Series connection)
