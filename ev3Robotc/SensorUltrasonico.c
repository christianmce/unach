//Autor: Dr. Christian Mauricio Castillo Estrada <cmce@unach.mx>
//Universidad Autónoma de Chiapas, Facultad de Negocios, LIDTS 

#pragma config(Sensor, S4, US1, sensorEV3_Ultrasonic)
#pragma config(Motor, motorB, A, tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor, motorC, B, tmotorEV3_Large, PIDControl, encoder)


task main()
{
    int objetoCount = 0;
    int distMin = 10; // Distancia en cm respecto al objeto
    bool objetoPresente = false;

	// Ciclo o bucle infinto para el ROBOT
    while(true) 
    {
        
        int distanciaActual = SensorValue[US1];

        // Check if an object is present and was not present before (rising edge detection)
        if(distanciaActual < distMin && objetoPresente == false)
        {
            objetoCount++; 	
            objetoPresente = true; 	// Asigna el valor de bandera para indicar que existe un objeto presente o identificado
            displayBigTextLine(3, "Valor del Sensor: %d", SensorValue[US1]);
        }        
        else if(distanciaActual > distMin && objetoPresente == true)
        {
            objetoPresente = false;
			motor[A] = 30;
			motor[B] = 30;
        }

        // Añadir una breve pausa para evitar problemas de bucles rápidos
        wait1Msec(50);
    }
}

