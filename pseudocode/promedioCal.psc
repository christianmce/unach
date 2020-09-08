//Pseudocodigo que calcula el promedio de Calificaciones

Proceso Promedio
	Definir c como Entero;
	Definir cal,acum,prom como Real;
	c<-0;
	acum<-0;
	prom<-0;
	
	Mientras c < 5 Hacer
		Escribir "Ingresa la califiacion No.",c;
		Leer cal;
		acum <- acum + cal;
		c <- c + 1;
	Fin Mientras
	
	prom <- acum /c;
	Escribir "El promedio general es: ",prom;
	
FinProceso
