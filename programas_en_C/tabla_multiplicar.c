#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que genera la tabla de multiplicar usando los 3 tipos de ciclos */


int main(int argc, char *argv[]) {
    int x=1,n;
    
    printf("Ingresa un número entero:");
    scanf("%d",&n);
    
    	while(x<=10){
		
		printf("%d  *  %d  =  %d  \n",x,n,(x*n));
		x++;
	}
	
	printf("\n");  //------------------------------------------------
	
	for(x=1;x<=10;x++){
		printf("%d  *  %d  =  %d  \n",x,n,(x*n));		
	}
	
	printf("\n"); //------------------------------------------------
	
	x=1;
	do{
		printf("%d  *  %d  =  %d  \n",x,n,(x*n));
		x++;
	}while(x<=10);
   
	return 0;
}
