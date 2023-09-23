//ALGORITMO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE
//PARALELO "B"

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int main(){
    system("@cls||clear");
    int limite,i=1,numero,suma=0;
    printf("Ingrese el limite de numeros a sumar : ");
    scanf("%d",&limite);
    printf("\n");
    while (i<=limite){
        printf("Ingrese el numero %d :  ",i);
        scanf("%d",&numero);
        suma+=numero;
        i++;
    }
    printf("\nLa Suma Total es : %d",suma);
    printf("\n\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B"); 
    


    return 0;
}


