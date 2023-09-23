//Autor Josue Sauca
#include <stdio.h>
#include <stdlib.h>

int ingresoLimite();
int *presentarDatos(int limite);


int main(int argc, char const *argv[]){
    system("@cls||clear");
    int limite;
    limite = ingresoLimite();
    int *hola = presentarDatos(limite);
    return 0;
}

int ingresoLimite(){
    int limite;
    printf("Digite un limite : ");
    scanf("%i",&limite);
    return limite;
}

int *presentarDatos(int limite){
    int *ingreso = (int *)malloc(limite * sizeof(int));
    int i,j;
    for (i = 1; i<=limite; ++i){
        for (j = 1; j <= i; ++j){
            printf("%i\t",i);
        }
        printf("\n");
    }
    return ingreso;
}


