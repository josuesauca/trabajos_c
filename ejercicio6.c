#include <stdio.h>
#include <stdlib.h>

void incrementar(int *a,float *b);

int main(int argc, char const *argv[]){

    system("@cls||clear");
    int num1;
    float num2;
    printf("Ingrese el Numero 1 : ");
    scanf("%d",&num1);
    printf("Ingrese el Numero 2 : ");
    scanf("%f",&num2);
    printf("Antes de Hacer el Paso de Parametros por Referencia\n");
    printf("Numero 1 : %d\n",num1);
    printf("Numero 2 : %.2f\n",num2);
    printf("Despues de Hacer el Paso de Parametros por Referencia\n");
    incrementar(&num1,&num2);
    printf("Numero 1 : %d\n",num1);
    printf("Numero 2 : %.2f\n",num2);
    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");

    return 0;
}

void incrementar(int *a,float *b){
    *a+=250;
    *b+=80.9;
}