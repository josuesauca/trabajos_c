#include <stdio.h>
#include <stdlib.h> 

void Calculo_Factorial();
typedef struct Factorial{
    int serie[100];
    int x,y ,i,j,k;
    float prom ;

} Calculo ;


void Calculo_Factorial(){
    Calculo Facto;
    
    int elements = 0;

    Facto.x = 0;
    Facto.y = 0;
    Facto.i=0,
    Facto.j=0,
    Facto.k=0,     
    Facto.prom = 0;

     printf("ahora el total de elementos del array\n\n");
        scanf("%d",&Facto.y);
        Facto.j=1;
            for(Facto.i=1; Facto.i<=Facto.y; ++Facto.i){
            printf("\n");
            Facto.j=Facto.j*Facto.i;
            Facto.serie[Facto.i-1]=Facto.j;
            printf("[%d]",Facto.serie[Facto.i-1]);
            }
        printf("\nCuantos elementos del array quiere calcular, su array tiene %d elementos\n\n",Facto.y);
        scanf("%d",&elements);
        for(Facto.i=0; Facto,Facto.i<=elements; ++Facto.i){
        Facto.k=(Facto.serie[Facto.i]+Facto.k);
        }
        Facto.prom=Facto.k/elements;
        printf("Promedio de los primeros %d numeros = %f ",elements,Facto.prom);
        printf("\n\n\n");


}


int main(){
    system("cls||@clear");
    void Calculo_Factorial();
    return 0; 

}


