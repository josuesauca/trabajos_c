#include <stdio.h>
#include <time.h>
int main(){
	int numero ,aleatorio,contador;
	
	srand(time(NULL));
	aleatorio = 1+rand()%((100+1) - 1);
	
	do{
		printf("\nDigite un numero : ");
		scanf("%i",&numero);		
		if(numero != aleatorio){
			if(aleatorio > numero){
				printf("\nDigite un numero mayor");
			}else{
				printf("\nDigite un numero menor");
			}			
		}							
		contador++;		
	}while(numero != aleatorio);
	
	printf("\nFelicidades usted Gana");
	printf("\nSus intentos fueron : %i",contador);	
	return 0;
}
