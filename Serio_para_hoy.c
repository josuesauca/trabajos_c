/* 
S = 2! /1 + 3! /1^2 â€“ 5! / 2^3 â€“ 7! / 3^4 + 11! / 5^5 + 13! /8^6 â€“ 17! / 13^7 - â€¦..  
*/
//Loja 20/1/2020
//Algoritmo realizado por : Jean Agreda
//							Patricio Paredes
//							Josue Sauca
//							Jhonatan Sefla
//Primer Ciclo de Computación "A" 
#include<stdio.h>
#include<stdbool.h>

float calcularfactorialnumeroprimo(int primo,float fact);
int calcularpotenciafibo(int i,int pot,int fibo);
int generarsiguientetermino(int primo,int fibo, int fibo_a,int fibo_b,int contSigno,int signoTermino);
int verificarprimo(int primo,int j,bool esPrimo);

int verificarprimo(int primo,int j,bool esPrimo){
    while ((j<primo && esPrimo==true)) {
    if ((primo%j==0)) {
		esPrimo = false;
	}
	j = j+1;
    }
return esPrimo;
}


float calcularfactorialnumeroprimo(int primo,float fact){
for (int k=1; k <= primo; k++) {
	fact = fact*k;
	}  
return fact;
}


int calcularpotenciafibo(int i,int pot,int fibo){
	for (int m=1; m <= i; m++) {
		pot = pot*fibo;
	}
return pot;
}


int generarsiguientetermino(int primo,int fibo, int fibo_a,int fibo_b,int contSigno,int signoTermino){
	primo = primo+1;
	fibo = fibo_a+fibo_b;
	fibo_a = fibo_b;
	fibo_b = fibo;
	contSigno = contSigno+1;
	if (contSigno > 2) {
		signoTermino = signoTermino*(-1);
		contSigno = 1;	
	}
    return signoTermino;
}

int main() {
	int Terminos, i, contSigno, signoTermino;
	int fibo, fibo_a, fibo_b;
	int j, primo;	
	double suma;
	bool esPrimo;

	printf("Ingrese Nro de Terminos de la Serie\n");
	scanf("%i",&Terminos);
	
	primo = 2;
	fibo = 1;
	fibo_a = 0;
	fibo_b = 1;
	suma = 0.0;
	contSigno = 1;
	signoTermino = 1;

	i = 1;
	printf ("S = ");
	while (i <= Terminos) {
		/* Verificar el numero primo */
		esPrimo = true;
		j = 2;
		esPrimo = verificarprimo( primo, j, esPrimo);
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
			fact= calcularfactorialnumeroprimo( primo, fact);

			/* Fin Calcular el factorial del numero primo */
			/* Calcular la potencia del fibonacci */
			int pot = 1;
			pot= calcularpotenciafibo(i, pot, fibo);
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
		}else{
			// Agregar para generar el siguiente primo
			primo = primo+1;
		}
	}
	printf("\nS = %f\n",suma);
	return 0;
}
