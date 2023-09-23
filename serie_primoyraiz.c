#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){

    system("@cls||clear");
    int limite;
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
    int j = 1, primo = 1,contador = 0;
    float denominador = 2,numerador;
    int signo=1;
    bool esPrimo;
    double suma = 0;

    while (j<=limite){

        esPrimo = true;
        for (int i = 2; i < primo && esPrimo; ++i) {
            if(primo%i==0){
                esPrimo = false;
            }
        }
        if(esPrimo){
            if(signo>0){
                printf(" + ");
            }
            if (contador==1){
                numerador = pow(primo,2);
                contador = 0;
                printf(" %i^2 / %c(%.f) ",primo,253,denominador);
            }else{
                contador++;
                numerador=primo;
                printf(" %i / %c(%.f) ",primo,253,denominador);
            }
            suma = suma + ((numerador/sqrt(denominador))*signo);
            primo++;
            denominador++;
            j++;
        }else{
            primo++;
        }
    }
    printf("\nS = %.4f",suma);    
    return 0;
}
