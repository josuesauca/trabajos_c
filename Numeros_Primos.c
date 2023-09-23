#include<stdio.h>
int main() {
	float cont;
	int i;
	int Numero;
	cont = 0;
	
	printf("ingrese un numero\n");
	scanf("%i",&Numero);
	for (i=2;i<=Numero-1;i+=1) {
		if (Numero%i==0) {
			cont = cont+1;
		}
	}
	if (cont>0) {
		printf("El Numero Ingresado No es Primo\n");
	} else {
		printf("El Numero Ingresado Es Primo\n");
	}
	printf("Nombre: Kevin Jaramillo\n");
	printf("Primer Ciclo Paralelo B\n");
	printf("2019/06/18\n");
	return 0;
}

