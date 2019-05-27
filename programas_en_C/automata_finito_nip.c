#include <stdio.h>
#include <stdlib.h>

/* Author: M.C.E. Christian Mauricio Castillo Estrada <cmce@unach.mx> */
/* Universidad Autónoma de Chiapas */

int main(int argc, char *argv[]) {
	
	int entrada[4]={4,3,2,6};
	int qinicio = 0;     //estado inicia q0
	int qfinal = 4;  //estado final  q4
	int actual = qinicio;
	int fin = 0;
	int c = 0;  //contador
	
	while(fin==0)
    {
        if(c > 3)
        {
                fin = 1;
                break;
        }

        if(actual==0)  //estado q0
        {
            if(entrada[c]==1||entrada[c]==2||entrada[c]==3||entrada[c]==4||entrada[c]==5)
            {
                actual=1;  //realiza la transición al siguiente estado                
                c = c + 1;
                continue;
            }
            else
            {
            	actual=5; //el estado q5 es un error y finaliza
            	break;
			}            
        }
        
        if(actual==1) //estado q1
        {
            if(entrada[c]==1||entrada[c]==2||entrada[c]==3||entrada[c]==4||entrada[c]==5)
            {
                actual=2;  //realiza la transición al siguiente estado                
                c = c + 1;
                continue;
            }
            else
            {
            	actual=5; //el estado q5 es un error y finaliza
            	break;
			}            

        }

        if(actual==2) //estado q2
        {
        	if(entrada[c]==7||entrada[c]==9)
            {
                actual=3;  //realiza la transición al siguiente estado                
                c = c + 1;
                continue;
            }
            else
            {
            	actual=5; //el estado q5 es un error y finaliza
            	break;
			}  
           
        }
        
        if(actual==3) //estado q3
        {
        	if(entrada[c]==6||entrada[c]==7||entrada[c]==8)
            {
                actual=4;  //realiza la transición al estado FINAL q4               
                c = c + 1;
                continue;
            }
            else
            {
            	actual=5; //el estado q5 es un error y finaliza
            	break;
			}  
           
        }

    }

 
        if(actual==qfinal)
        {
        	printf("NIP: %d %d %d %d  \n\n",entrada[0],entrada[1],entrada[2],entrada[3]);
            printf("El NIP ingresado es correcto !!");
        }
        else
        {
        	printf("NIP: %d %d %d %d  \n\n",entrada[0],entrada[1],entrada[2],entrada[3]);
            printf("El NIP ingresado NO cumple con los requisitos \n");
            printf("El estado actual es: q%d",actual);
        }   
		
	return 0;
}
