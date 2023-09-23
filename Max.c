//ALGORITMO PARA ENCONTRAR EL MAXIMO COMUN DIVISOR 
//NOMBRE:JOSUE ALEJANDRO SAUCA PUCHA 
//FECHA: 29 DE DICIEMBRE DEL 2019 

#include <stdio.h>
#include <stdint-gcc.h>
#include <stdlib.h>
int main(){

    int number1,number2; 
    system("@cls||clear");
    printf ("Ingrese el Numero  1 : "); 
    scanf ("%i",&number1);
    printf ("Ingrese el numero  2 : "); 
    scanf ("%i",&number2); 
    while (number1 > number2){
        if (number1 != number2){
            number1 = number1 - number2; 
        }else {
            number2 = number2 - number1; 
        }            
    }
    printf("SU MAXIMO DIVISOR ES :%i\n",number1); 
    printf("|-Este algoritmo esta hecho por : JOSUE SAUCA-----|\n");
	printf("|-FECHA DE ELABORACI%cN : 23 DE DICIEMBRE DEL 2019-|",162);
		
	return 0; 
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    int number1,number2,minimo,mcd,producto; 
    system("@cls||clear");
    printf ("Ingrese el Numero  1 : "); 
    scanf ("%i",&number1);
    printf ("Ingrese el numero  2 : "); 
    scanf ("%i",&number2); 
    producto = number1*number2;
    while (number1 != number2){
        if (number1 > number2){
            number1 = number1 - number2; 
        }else {
            number2 = number2 - number1; 
        }            
    }
    minimo = number1;
    mcd = producto / minimo;
    printf("SU minimo comun DIVISOR ES :%i\n",mcd); 


		
	return 0; 
}
*/
