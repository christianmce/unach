//Autor: Mtro. Christian Mauricio Castillo Estrada
//Facultad de Negocios Campus IV UNACH 2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
	char nom[30];	
	char apepat[10];	
	char apemat[10];	
    char curp[25]={'\0'};
    
	printf("Nombre: ");  scanf("%s",&nom);
	printf("Ape Paterno: ");  scanf("%s",&apepat);
	printf("Ape Materno: ");  scanf("%s",&apemat);
	
	strncat(curp,apepat,2);
	strncat(curp,apemat,1);
	curp[3]=nom[0];
	
	printf(" %s  \n", curp);
	puts(curp);


	return 0;
}


/*  Apuntes Extras sobre el uso de variables de tipo CHAR

     %c -> 1char     getchar();
     %s -> string    gets(nombre);   -->  puts(nombre);     
     
	if(strcmp(nom1,nom2)==0)
	{
		printf("\n Se ha logrado localizar, son iguales");
	}
	else
	{
		printf("\n Son diferentes valores");
	}
	
	Ejemplo de comparar un arreglo de cadena con un variable char
	if( strcmp(estudiantes[x],nombre) == 0 )   
*/
