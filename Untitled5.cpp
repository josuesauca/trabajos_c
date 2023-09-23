#include<stdio.h>
#include<stdbool.h>

int main() {
	int nTerminos, i, contSigno, signoTermino;
	int fibo, fibo_a, fibo_b;
	int j, primo;	
	double suma;
	bool esPrimo;

	printf("Ingrese Nro de Terminos de la Serie\n");
	scanf("%i",&nTerminos);
	
	primo = 2;
	fibo = 1;
	fibo_a = 0;
	fibo_b = 1;
	suma = 0.0;
	contSigno = 1;
	signoTermino = 1;

	i = 1;
	printf ("S = ");
	while (i <= nTerminos) {
		/* Verificar el numero primo */
		esPrimo = true;
		j = 2;
		while ((j<primo && esPrimo==true)) {
			if ((primo%j==0)) {
				esPrimo = false;
			}
			j = j+1;
		}
		/* Fin Verificar el numero primo */
		/* Para Presentacion de la serie */
		if (esPrimo == true) {
			if (signoTermino > 0) {
				printf(" + ");
			} else {
				printf(" - ");
			}
			printf("(%i! / %i^%i)",primo,fibo,i);
			/* Fin Para Presentacion de la serie */
			/* Calcular el factorial del numero primo */
			float fact = 1;
			for (int k=1; k <= primo; k++) {
				fact = fact*k;
			}
			/* Fin Calcular el factorial del numero primo */
			/* Calcular la potencia del fibonacci */
			int pot = 1;
			for (int m=1; m <= i; m++) {
				pot = pot*fibo;
			}
			/* Fin Calcular la potencia del fibonacci */
			/* Calcular la sumatoria */
			suma = suma + ((fact/pot)*signoTermino);
			/* Generar siguiente Termino */
			primo = primo+1;
			fibo = fibo_a+fibo_b;
			fibo_a = fibo_b;
			fibo_b = fibo;
			contSigno = contSigno+1;
			if (contSigno > 2) {
				signoTermino = signoTermino*(-1);
				contSigno = 1;
			}
			i = i+1;
		} else {
			// Agregar para generar el siguiente primo
			primo = primo+1;
		}
	}
	printf("\nS = %f\n",suma);
	return 0;
}

