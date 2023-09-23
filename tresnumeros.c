//ALGORITMO PARA ENCONTRAR EL MAXIMO COMUN DIVISOR 
//NOMBRE:JOSUE ALEJANDRO SAUCA PUCHA 
//FECHA: 29 DE DICIEMBRE DEL 2019 

#include <stdio.h>

int main(){
    int number1,number2,number3;
    printf ("|-------------------------------------------------|\n");
	printf ("|------------Ingresar el numero  1----------------|\n\t\t");
	scanf("%i",&number1);
    printf ("|-------------------------------------------------|\n");
	printf ("|------------Ingresar el numero  2----------------|\n\t\t"); 
	scanf("%i",&number2);
    printf ("|-------------------------------------------------|\n");
	printf ("|------------Ingresar el numero  3----------------|\n\t\t"); 
	scanf("%i",&number3);
	do {
		if (number1 > number2){
			number1 = number1 - number2;
        
		}else{
			number2 = number2 - number1;
        }
    
    }   while (number1 != number2);
	while (number1 != number3){
		if (number1 > number3){
			number1 = number1 - number3;
        
        }else{
			number3 = number3 - number1;
        }
    }
    
	
    printf( "SU MAXIMO COMUN DIVISOR ES : %i\n",number1);

     printf("|-------------------------------------------------|\n");
     printf("|-Este algoritmo esta hecho por : JOSUE SAUCA-----|\n");
     printf("|-------------------------------------------------|\n");
	 printf("|-FECHA DE ELABORACIÓN : 23 DE DICIEMBRE DEL 2019-|\n");
		
    return 0;
}