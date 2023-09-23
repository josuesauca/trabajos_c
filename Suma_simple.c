#include <stdio.h>
int suma(int a ,int b,int resultado);


int main(){
    int a,b;
    int resultado;
    int Suma;
    Suma = suma(a,b,resultado);
    return 0; 
}

int suma(int a ,int b,int resultado){
    scanf("%i  %i",&a,&b);
    resultado = a+b;
    printf("%i",resultado);    
    return resultado;
}