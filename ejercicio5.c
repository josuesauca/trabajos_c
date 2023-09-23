#include <stdio.h>
#include <stdlib.h>

int suma(int a,int b);

int main(int argc, char const *argv[]){

    system("@cls||clear");
    int numero1,numero2,resultado;
    printf("Ingrese el numero 1 : ");
    scanf("%d",&numero1); 
    printf("Ingrese el numero 2 : ");
    scanf("%d",&numero2); 
    printf("Antes de realizar el paso de parametros por Valor\n");
    printf("Numero 1 : %d\n",numero1);
    printf("Numero 2 : %d\n",numero2);
    resultado = suma(numero1,numero2);
    printf(" Es : %d",resultado);
    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");
    return 0;

}


int suma(int a,int b){

    int s;
    a = 10;
    b = 20;
    printf("Despues de Realizar el Paso de Parametros por Valor");
    printf("\nNumero 1 : %d ",a);
    printf("\nNumero 2 : %d ",b);
    printf("\nLa Suma de %d y %d",a,b);
    s = a+b;
    return s;

}




