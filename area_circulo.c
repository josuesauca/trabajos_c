/*	Algorigtmo hecho por : Josue Alejandro Sauca Pucha
	Primer Ciclo "B"
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14169


int main(){

	float Area,Radio;
	system("@cls||clear");
	printf("=================Bienvenidos================\n");
	printf("Ingrese el radio de su circulo : ");
	scanf("%f",&Radio);	
	Area = PI * pow(Radio,2);
	printf("\nEl radio que usted ingreso : %.3f",Radio);
	printf("\nEl area del circulo es : %.4f Cm^2",Area);	
	printf("\n============================================\n");
	return 0;

}
 
