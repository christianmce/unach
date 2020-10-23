# Library imports
from vexcode import *

# Add project code in "main"
def main():
   
    while True:
        wait(10,MSEC)
        drivetrain.drive(FORWARD)
        #Sensor frontal detecta pared laberinto
        if front_eye.near_object()==True:  
            drivetrain.turn_for(LEFT, 90, DEGREES)            
            wait(10,MSEC)            
            


# VR threads — Do not delete
vr_thread(main())
