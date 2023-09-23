#include <stdio.h>
#include <stdlib.h>

#define Resistencia 4 

int main(){
	float Voltaje,Intensidad,Potencia;
	printf("Ingrese el Valor de la Intensidad : ");
	scanf("%f",&Intensidad);
	
	Voltaje  = Resistencia*Intensidad;
	Potencia = Voltaje*Intensidad;
	
	printf("El valor de la Potencia Electrica es : %.2f",Potencia);	
	return 0;
}
