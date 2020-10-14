# -----------------------------------------------------------
#Project:      Encontrar la coordenada (0,0) 
#Author:       Mtro. Christian Mauricio Castillo Estrada
#Created:      14/10/2020
#Faculta de Negocios CIV, Universidad Autónoma de Chiapas
# -----------------------------------------------------------

from vexcode import *

def main():
    
    pen.set_pen_color(RED)
    pen.move(DOWN)
    brain.set_print_color(BLUE)     

    while True:
        wait(10,MSEC)
        drivetrain.drive(FORWARD)
        wait(10,MSEC)
        if location.position(Y,MM) == 0:
            drivetrain.turn_for(RIGHT, 90, DEGREES)
            drivetrain.stop()
            brain.print("HEMOS LLEGADO A Y = 0")            
            break

    while True:
        wait(5,MSEC)
        drivetrain.drive(FORWARD)
        wait(10,MSEC)
        if location.position(X,MM) == 0:
            drivetrain.stop()
            brain.print("HEMOS LLEGADO AL OBJETIVO")            
            break

# VR threads — Do not delete
vr_thread(main())
