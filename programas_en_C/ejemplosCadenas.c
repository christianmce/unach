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


