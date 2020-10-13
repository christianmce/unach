#include <stdio.h>
#include <stdlib.h>

//**********************************************************
//Autor: Mtro. Christian Mauricio Castillo Estrada
//Universidad Autónoma de Chiapas, Facultad de Negocios CIV
//**********************************************************

int main(int argc, char *argv[]) {
	
	char nom_estudiante[15];
	
		
	printf("\nIngresa el nombre del estudiante: ");
	scanf("%s", &nom_estudiante);
    
	//Buscar si existe la letra T	
	// or -->  o   -->  ||
	// and --> y   -->  &&
	
	int x=0;
	int band=0; 
	while(x<15){
		
		if(nom_estudiante[x]=='T' || nom_estudiante[x]=='t')
		{
			band = 1; //Sí encontramos la letra
			break; //finalizamos el ciclo
		}		
			
		x = x + 1;
	}
	
	if(band==1)
		printf("El nombre del estudiante SI posee la letra T");
	else
		printf("La letra T no fue localizada en el nombre");
	
		
	return 0;
}
