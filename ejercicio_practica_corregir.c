#include <stdio.h>
#include <stdlib.h>

int factorial (int numero);
int main(){
	int resultado, numero = 0;
	printf("Leer numero:");
	scanf("%d",&numero);
	resultado = factorial(numero);
	printf("%d! = %d",numero,resultado);
    return 0;
}
int factorial(int numero){
    if (numero <= 1){
        return 1;
    }
    else{
	 int resultado = factorial(numero - 1);
        return (numero * resultado);
    }
}




