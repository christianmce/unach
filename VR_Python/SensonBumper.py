# ---------------------------------------------------------------
# 
# Project:      VEXcode Example1
#	Author:       Mtro. Christian Mauricio Castillo Estrada
#	Created:      30-09-2020
#	Faculty of Business, Autonomous University of Chiapas (UNACH) 
# 
# ---------------------------------------------------------------

# Library imports
from vexcode import *


def main():

    while True:
        if front_eye.near_object() or right_bumper.pressed(): 
            drivetrain.stop()
            drivetrain.drive_for(REVERSE,50,MM)
            drivetrain.turn_for(RIGHT, 90, DEGREES)            
        else:
            drivetrain.drive(FORWARD)
    

        wait(10,MSEC)


# VR threads — Do not delete
vr_thread(main())
