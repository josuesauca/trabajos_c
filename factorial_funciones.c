#include <stdio.h>
#include <stdlib.h>
int factorial(int i);

int main(int argc, char const *argv[]){
    int limite,i;
    int funcion  =1 ,suma = 0;
    system("@cls||clear");
    printf("Ingrese un limite : ");
    scanf("%i",&limite);

    for (size_t i = 1; i <= limite; i++){

        printf(" + %i! ",i);
        //funcion = factorial(i);
        suma = suma + (funcion = factorial(i));
        
    }

    printf("\nS = %i ",suma);   
    return 0;
}


int factorial(int i){
    int j = 1;
    int resultado = 1;
    for (size_t j = 1; j <= i; j++){
        resultado = resultado * j;
    }
    return resultado;
}

