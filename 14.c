#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// Declaraciones adelantadas de las funciones
int facto(int n);
int generarPrimo(int n);
int facto(int n) {
	int factorial, prod;
	prod = 1;
	for (factorial=1;factorial<=n;factorial+=1) {
		prod = prod*factorial;
	}
	return prod;
}
int generarPrimo(int nprimo) {
	int num, residuo;
    
    short int encontroPrimo = 0;
    while (encontroPrimo == 0){
        int divisor = 2;
        short int esPrimo = 1;
        //printf("primo: %d", nprimo);
        while (esPrimo == 1 && divisor < nprimo){
            if (nprimo%divisor == 0){
                esPrimo = 0;
            }
            divisor++;
        }
        
        //printf("es Primo: %d", esPrimo);
        encontroPrimo = esPrimo;
        if (esPrimo != 1){
            nprimo++;
        }
    }
    return nprimo;
}
void main() {
	int a=0, b=1, k=2, signo=1,limite, numeroprimo, i, fibo, potencia, producto, r=1, term=1;
	float suma=0;
    fibo = 1;
	printf("Ingrese el numero de terminos de la serie: ");
	scanf("%i",&limite);
	printf("S= ");
	for (i=1;i<=limite;i+=1) {
		
			k = generarPrimo(k);
            printf (" + %d! / %d^%d", k,fibo,i);

            // Generar el sig termino
			k = k+1; /// Primo
            // Generar el siguiente fibo
            a = fibo;
            fibo = a + b;
            b = a;
		}
	printf("\nSuma=%.2f ",suma);
	
}