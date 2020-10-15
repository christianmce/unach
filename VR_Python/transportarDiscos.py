# Library imports
from vexcode import *

# Add project code in "main"
def main():

    d = 900
    cont = 0
    while True:
        wait(10,MSEC)
        drivetrain.drive(FORWARD)
        if down_eye.near_object()==True:
            brain.print("OBJETO ENCONTRADO \n")            
            magnet.energize(BOOST)
            drivetrain.drive_for(REVERSE, d, MM,wait=True)
            d = d + 300
            wait(10,MSEC)            
            magnet.energize(DROP)            
            cont = cont + 1
            drivetrain.drive_for(FORWARD, 200, MM)

        if cont == 3:
            break  #rompe el ciclo finaliza.



# VR threads — Do not delete
vr_thread(main())
