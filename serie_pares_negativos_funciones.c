#include <stdio.h>
#include <stdlib.h>


void ingresar_serie(int *limite);
unsigned long elevar_cuadrado(int base);
unsigned long presentar_serie(int limite);
int signo(int i);


int main(int argc, char const *argv[]){

    float suma = 0;
    int limite;
    char volver_ciclo;
    do{
        system("@cls||clear");
        ingresar_serie(&limite);
        suma = presentar_serie(limite);
        printf("\nS = %.2f",suma);   
        printf("\nDesea Volver al Ciclo, no(C) otra letra Si : ");
        getchar();
        scanf("%c",&volver_ciclo);
        fflush(stdin);
    }while(volver_ciclo != 'C' && volver_ciclo != 'c' );
    printf("Gracias Por Usar el Programa \nVuelva Pronto !!");
    return 0;
}


void ingresar_serie(int *limite){
    printf("\nIngresa un limite : ");
    scanf("%i",limite);
}

unsigned long presentar_serie(int limite){
    int suma = 0;
    float elevar ;
    int sign ;
    int signo_multi = 1;

    for (size_t i =1 ; i <= limite; i++){

        elevar = elevar_cuadrado(i);
        sign = signo(i);        
        (sign>0)?printf(" + "):printf(" - ");     
        printf(" %i^2 ",i);    
        suma = suma + ((elevar)*(signo_multi));
        signo_multi *=1;       
    }
    return suma;
}


unsigned long elevar_cuadrado(int base){
    float resultado = 1;
    for (size_t i = 1; i <=1; i++){
        resultado = base * base;
    }
    return resultado;
}

int signo(int i){
    float sig  = 1;
    (i%2==0)?(sig=-1):(sig=1);
    return sig;
    
}