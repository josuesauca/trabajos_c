#include <stdio.h>

void imprimir();
double suma(double valor1,double valor2);
double multiplicacion(double x,double y);


void imprimir(){
    printf("BIENVENIDO A MI PROGRAMA\n ");

}
double multiplicacion(double x,double y){
    double r;
    r = x*y;
    return r; 


}

double suma(double valor1,double valor2){
    double valor3;
    valor3 = valor1+valor2; 
    return valor3;  

}
int main (){
    double a=2.5,b=3,resultado;
    imprimir(); 
    resultado = suma (a,b);
    printf("%g\n",resultado);
    resultado = multiplicacion(a,b);
    printf("%g\n",resultado);
    imprimir();
    return 0; 
}