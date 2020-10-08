# -----------------------------------------------------------------
# Project:      Draw Triangle Project
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

    #Pintar la base del triangulo
    pen.move(DOWN)
    drivetrain.drive_for(FORWARD, 1000, MM)  
    
    drivetrain.turn_for(LEFT, 120, DEGREES)
    drivetrain.drive_for(FORWARD, 1000, MM) 

    drivetrain.turn_for(LEFT, 120, DEGREES)
    drivetrain.drive_for(FORWARD, 1000, MM)  
    
# VR threads — Do not delete
vr_thread(main())
