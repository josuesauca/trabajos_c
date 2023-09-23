/*
S = +(1 / 3)^1 + (3 / 9)^1 – (5 / 15)^2 + (7 / 21)^3 + (9 / 27)^5 - (11 / 33)^8 + (13 / 39)^21 + ...*/
#include <stdio.h>

int numerador(int numerador);
int denominador(int denominador);
void Num(calcular_denominador,calcular_numerador);


int main(){

    int Terminos;
    int  i= 1;

    printf("Ingrese Nro de Terminos de la Serie\n");
	scanf("%i",&Terminos);
    while (i <= Terminos){
        Num(calcular_denominador,calcular_numerador);

    }

    printf("\nS = %f\n");
	return 0;


}

int calcular_numerador(int numerador){

    for (int i= 1;i<=numerador;i=i+2){


    }


    return numerador;
}



int calcular_denominador(int denominador){

    for (int j = 3; j<= denominador ; j = j+6){


    }


    return denominador; 
}

void Num(calcular_denominador,calcular_numerador){
    printf("(%i / %i)",numerador,denominador);
    

}