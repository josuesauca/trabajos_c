#include <stdio.h>
#include <math.h>

int main(){
	float suma=0,limite,total;
	int numerador=1,denominador=1,neg,potencia=1,total_1,total_2,total_3=0,total_4=0,total_5;
	printf("Ingrese un limite : ");
	scanf("%f",&limite);
	int i = 1;
	do{
		/*Numerorador*/
		if(i%2!=0){
			//numerador = pow(numerador,2);
			if(denominador%2!=0){
				potencia = pow(numerador,2);
				total_1 = (numerador*potencia)/denominador;
				printf("+(%i)^2/%i = %i",numerador,denominador,total_4);
				//potencia = pow(numerador,2);				
				/*potencia = pow(numerador,2);
				total_1 = (numerador*potencia)/denominador;*/
				total_4 = total_1 + total_4 ;
				
			}			
		}else{
			printf("-(%i)^2/%i = %i",numerador,denominador,total_3);	
			potencia = pow(numerador,2);
			total_2 = (numerador*potencia)/denominador;
			total_3 = total_3 + total_2;
		}	
		
		denominador+=2;	
		numerador++;
		i++;	
	}while(i<=limite);
	printf("\nTotal 1 = %i",total_4);
	printf("\nTotal 2 = %i",total_3);
	total= total_4 -total_3;
	printf("\nS = %.3f",total);	
	
	return 0;
}
