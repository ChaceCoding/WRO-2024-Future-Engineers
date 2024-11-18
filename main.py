#!/usr/bin/env pybricks-micropython
from pybricks.hubs import EV3Brick
from pybricks.ev3devices import (Motor, TouchSensor, ColorSensor,
                                 InfraredSensor, UltrasonicSensor, GyroSensor)
from pybricks.parameters import Port, Stop, Direction, Button, Color
from pybricks.tools import wait, StopWatch, DataLog
from pybricks.robotics import DriveBase
from pybricks.media.ev3dev import SoundFile, ImageFile


# This program requires LEGO EV3 MicroPython v2.0 or higher.
# Click "Open user guide" on the EV3 extension tab for more information.


# Create your objects here.
ev3 = EV3Brick()


# Write your program here.
ev3.speaker.beep()
from pybricks.ev3devices import I2C
from pybricks.parameters import Port
from pybricks.tools import wait

# Initialize I2C on sensor port S1 with HuskyLens I2C address (0x32)
huskylens = I2C(Port.S1, 0x32)

# Function to send a command and read data from HuskyLens
def read_husky_data():
    # Send request command to HuskyLens to get data
    # This is an example, you may need to adjust according to the HuskyLens protocol
    command = bytearray([0x00, 0x00])  # Example request command
    huskylens.write(command)
    
    # Read 8 bytes of data from the HuskyLens
    # Adjust the number of bytes depending on the expected data (e.g., object coordinates, ID)
    data = huskylens.read(8)
    
    # Return the raw data received from HuskyLens
    return data

# Main loop
while True:
    # Read data from HuskyLens
    husky_data = read_husky_data()
    
    # Print the data to the console (on EV3)
    print("HuskyLens Data:", husky_data)
    
    # Wait for 1 second before reading again
    wait(1000)
