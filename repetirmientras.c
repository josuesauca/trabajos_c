//ALGORITMO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE
//PARALELO "B"

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    system("@cls||clear");
    int n,suma=0;
    bool bandera=false;
   do{
        printf("Ingrese un numero positivo : ");
        scanf("%d",&n);
        suma+=n;
        if(n>0){
            bandera=true;
        }
    }while(bandera == false);
    
    printf("La Suma Total de los N%cmeros Ingresados es : %d",163,suma);
    printf("\n\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");
   return 0; 
}

