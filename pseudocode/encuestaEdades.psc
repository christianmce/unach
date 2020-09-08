// Pseudocodigo que permite simular una encuesta de edades de 10 personas, y encontrar los mayores y menores de edad.

Proceso ProEdad
	Definir Cont Como Entero;
	Definir me Como Entero;
	Definir ma Como Entero;
	Definir edad Como Entero;
	Cont<-1;
	me<-0;
	ma<-0;
	
	Mientras Cont<=10 Hacer
		Escribir "¿Cuál es tu edad?";
		Leer edad;
		
		Si edad>=18 Entonces
			ma<-ma + 1;
		SiNo
			me<-me + 1;
		Fin Si
		
		Cont<-Cont + 1;
	Fin Mientras
	
	Escribir "Personas mayores de edad",ma;
	Escribir "Personas menores de edad",me;
	
FinProceso
