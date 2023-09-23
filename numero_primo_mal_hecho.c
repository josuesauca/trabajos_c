#include <stdio.h>
#include <stdbool.h>

int main(){
	int es_primo=0,limite;
	int numero = 2;
	int i;
	
	printf("\nIngrese un limite : ");
	scanf("%i",&limite);
	
	while(limite>0){
		es_primo = 1;
		for(i=2;i<numero;i++){
			if(numero%i==0){
				es_primo=0;
			}
		}
		if(es_primo==1){
			printf(" %i ",numero);
			limite--;
		}		
		numero++;		
	}
	
	return 0;
}
