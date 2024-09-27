# WRO-2024-Future-Engineers
# Team Information
Team ID:

Team Name: Ctrl V

Team Members: 

Caleb Lo 

Chace Chan
# Mobility
# Power and Sensing
We utilized a Time-of-Flight (TOF) sensor to measure the distance between the car and surrounding walls. The car relies on this distance data to determine the optimal moment to turn. Additionally, during the obstacle challenge round, the sensor detects nearby obstacles, allowing the car to gauge the distance between itself and these obstacles. This information helps the car make timely decisions to turn left or right based on traffic signs.
# Obstacles
Huskylens is utilized throughout the obstacle challenge. We begin by programming the camera to divide the view into three zones, labeled from right to left as Zone 1, Zone 2, and Zone 3. When an obstacle is detected in one of these zones, the car will adjust its heading by a specific number of degrees corresponding to the zone in which the obstacle is located.
After navigating past the obstacle, the car may be misaligned, tilting either to the right or left. To correct this, we employ a gyroscope to measure the degree of tilt and send this data to the Arduino Uno. The Arduino then adjusts the car's orientation, ensuring it is properly aligned and facing forward.
# Pictures
# Videos
# Design Description
