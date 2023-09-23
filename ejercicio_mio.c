#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float numerador = 1,total = 0;
	int limite,denominador = 1,indice=2,numero_triangular=0;
	int  j = 1;
	int signoTermino = 1;
	int contSigno = 1;
	system("@cls||clear");
	printf("INGRESE UN LIMITE : ");
	scanf("%i",&limite);
	do{
		(signoTermino > 0) ? printf(" + "):printf(" - ");
		
		numerador = pow(j,indice);
		numero_triangular = ((denominador*(denominador+1))/2);
		printf("%i^%i/%i",j,indice,numero_triangular);
		total = total + ((numerador/numero_triangular) * signoTermino);

		denominador++;	 	
		j++;
		contSigno++;
		if (contSigno > 1) {
			signoTermino = signoTermino*(-1);
			contSigno = 1;
		}

	}while(j<=limite);
	printf("\nTotal : %.2f",total);	
	return 0;
}
