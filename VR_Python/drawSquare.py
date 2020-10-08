# -----------------------------------------------------------------
# Project:      Draw Square Project
# Author:       Mtro. Christian Mauricio Castillo Estrada
# Created:      08/10/2020
# Facultad de Negocios Campus IV, Universidad Autónoma de Chiapas 
# -----------------------------------------------------------------

# Library imports
from vexcode import *

# Add project code in "main"
def main():
    drivetrain.drive_for(FORWARD, 285, MM)
    drivetrain.turn_for(RIGHT, 90, DEGREES)
    drivetrain.drive_for(FORWARD, 300, MM)

    #pintar UN CUADRADO
    
    x=1
    band=0
    while x<=4:
        wait(5, MSEC)

        y=1
        while y<=5:           
            if band==1: 
                pen.move(DOWN)
                band=0
            else:
                pen.move(UP)               
                band=1
        
            drivetrain.drive_for(FORWARD, 200, MM)  
            y=y+1
        
        drivetrain.turn_for(LEFT, 90, DEGREES)
        x=x+1  


# VR threads — Do not delete
vr_thread(main())
