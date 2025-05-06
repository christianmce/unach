//**** Autor: Dr. Christian Mauricio Castillo Estrada
//**** Facultad de Negocios, Universidad Autónoma de Chiapas

Algoritmo BusquedaBinaria
	Definir localizad Como Logico;
	Definir puntero,final, mitad Como Entero;
	Definir valores,num Como Entero;
	Dimension valores[5];
	
	valores[1]<-3;
	valores[2]<-8;
	valores[3]<-9;
	valores[4]<-22;
	valores[5]<-27;
	
	localizado<-Falso;
	puntero<-1;
	final<-5;
	
	Escribir "Ingresa el número que deseas buscar: ";
	Leer num;
	
	Mientras (localizado=Falso y puntero<=final) Hacer
		
		mitad<-trunc((puntero+final)/2);
		
		Si num = valores[mitad] Entonces
			localizado<-Verdadero;
		SiNo 
			Si num < valores[mitad] Entonces
				final<-mitad-1;
			Sino
				puntero<-mitad+1;
			FinSi
			
		FinSi
		
	Fin Mientras
	
	Si (localizado=Verdadero) Entonces
		Escribir "El número se encuentra en la posición: ", mitad;
	SiNo
		Escribir "No existe el número ingresado, no localizado";
	FinSi
	
FinAlgoritmo
