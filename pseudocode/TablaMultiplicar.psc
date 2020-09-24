Proceso Repeticiones
	Definir num como Entero;
	Definir cont como Entero;
	
	cont<-1;	
	
	Escribir "Ingresa un número para generar la Tabla de Multiplicar: ";
	Leer num;
	
	Mientras cont <=10 Hacer
		//2 * 2 = 4
		Escribir num," * ",cont," = ",(num*cont);
		cont<-cont + 1;
	Fin Mientras
	
	Escribir " ";
	

	cont<-1;
	Repetir
		Escribir num," * ",cont," = ",(num*cont);
		cont<-cont + 1;
	Hasta Que cont=10
	
	Escribir " ";
	
	Para cont<-1 Hasta 10 Con Paso 1 Hacer
		Escribir num," * ",cont," = ",(num*cont);
	Fin Para
		
	
FinProceso
