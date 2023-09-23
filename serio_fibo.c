
/*
Realizar la sumatoria de la serie del fibonacci ingresando un límite. Ejemplo:
S = 0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + … + <=N

*/

#include <stdio.h>


int main(){
	int limite;
	int a,b,c;
	int i;
	a= 0;
	b= 1;
	c = 0;
	printf("Digite un limite : ");
	scanf("%i",&limite);
	
	for(i=1;i<=limite;i++){
		
		printf(" %i ",a);
		
		c = a+b;
		a = b;
		b= c;	
		
	}
	
	printf("\n Suma : %i ",c);
	
	
	
	return 0;
}
