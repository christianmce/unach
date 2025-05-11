Algoritmo MetodoBurbuja

Definir n,a,b,c,x,aux, vector Como Entero
	// Se pide el número de datos que van a ser ordenados.
	Escribir "Dime el número de datos para ordenar"
   	Leer n
	Dimensión vector(n)
	
	// Se piden los datos y se guardan en el arreglo o vector.
	Para b<-1 Hasta n Hacer     
		Escribir "Dime el número ",b
		Leer vector(b)
	Fin Para
	
	// Se inicia la comparación desde la posición 1 hasta la posición última del vector.
	// La primera comparación se inicia en la segunda posición del vector.
	Para x<-2 Hasta n Hacer
		Para a<-1 Hasta n-1 Hacer
			Si vector(a) > vector(a+1)
				// Para intercambiar los valores se pasa el primero a aux, el segundo al primero y aux al segundo.
				aux<-vector(a)
				vector(a)<-vector(a+1)
				vector(a+1)<-aux
				
			Fin Si
			// Termina el primer ciclo de comparaciones. Se proceden a los siguientes ciclos.
		Fin Para
		
	Fin Para  // Terminan las comparaciones.


	// Proceso de escritura de los datos ordenados.
	Para c<-1 Hasta n Hacer
		Escribir vector(c)
		// Se escribe el primer número y se sigue con los siguientes.
	Fin Para

FinAlgoritmo
