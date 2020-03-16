#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	char nom[12] = "Christian";
	char app[12] = "Castillo";
	char apm[12] = "Estrada";
	char fec[12]="22/02/1983";
	char hom[3]="K2A";  //homoclave
	
	char rfc[15]="\0";  //limpiar de basura el array Char
	
	strncat(rfc,app,2);
	strncat(rfc,apm,1);
	strncat(rfc,nom,1);
	
	rfc[4]=fec[8];
	rfc[5]=fec[9];
	rfc[6]=fec[3];
	rfc[7]=fec[4];
	rfc[8]=fec[0];
	rfc[9]=fec[1];
	
	strcat(rfc,hom);
	
	strupr(rfc);  //mayusculas
	
	printf("TU RFC es:   %s  \n",rfc);
	
	return 0;
}
