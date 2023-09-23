#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	system("@cls||clear");	
	float numerador=1,denominador=3,i=1;
	float suma = 0;
	int signo = 1,limite;
	int k = 1,contador = 1,exponente;
	char volver_ciclo;
	/*printf("Ingrese un limite : ");
	scanf("%i",&limite);*/
	exponente = 1;
	do{
		printf("Ingrese un limite : ");
		scanf("%i",&limite); 
		i=1;
		numerador=1;
		denominador=3;
		suma = 0;
		contador = 1;
		exponente = 1;
		signo = 1;
		do{
			k = 1;		
			while (k<=i){		
				if(contador<=limite){
				
					if (signo>0){
						printf(" + ");
					}else{
						printf(" - ");
					}

					printf(" (%.f/%.f)^%i ",numerador,denominador,exponente);
					suma = suma + (pow((numerador/denominador),exponente)*signo);
					denominador+=6;
					numerador+=2;
					contador++;				
					k++;
					exponente++;
				}else{
					//k++;
					break;
				}
			}
			i++;
			signo *= -1;
		}while(i<=limite);
		printf("\n\nS = %.4f",suma);	

		printf("\nPulse (C) para cancelar, pulse otra cualquier tecla para salir : ");
		scanf(" %c",&volver_ciclo);
		system("@cls||clear");
		//scanf("[^\n]s",volver_ciclo);
	}while (volver_ciclo != 'C' && volver_ciclo!='c');	
	return 0;
	
}
