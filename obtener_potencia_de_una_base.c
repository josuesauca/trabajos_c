#include <stdio.h> 
#include <math.h> 
int expo;
int limite;
float potencia; 
float resutado = 1;

void Ingrese_sus_datos();
void operaciones(int limite,float div[] );

int main(){
    Ingrese_sus_datos();
    printf("\n");

    printf("\n");
    operaciones(limite,expo);
    

    return 0;

}


void Ingrese_sus_datos(){
    printf(" INGRESE LA BASE DEL EXPONENTE: ");
    scanf("%i",&expo);
    printf("INGRESE SU LIMITE :  ");
    scanf("%i",&limite);

}

void operaciones(int limite,float div[] ){
 
    printf(" %i  ",expo);
    int i;
    for (i =1;i<=limite;i++){

        potencia =pow(expo,i );
        resutado = expo * i;
        printf(" +%i ^ %i ",expo,i);
       

    } 

    printf("\nS =%f ",resutado);

}
