#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
	int i,numero;
	bool esPrimo;	
	system("@cls||clear");
	printf("Ingrese numero a verificar : ");
	scanf("%i",&numero);
	i = 2;
	esPrimo = numero>1;
	
	while(esPrimo && i<numero){
		if(numero%i==0){
			esPrimo = false;
		}
		i++;		
	}
	
	if(esPrimo){
		printf("%i es primo",numero);
	}else{
		printf("%i no es primo",numero);
	}	
	return 0;
}
