#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float Lado,Perimetro,Area,Volumen;
	printf("Ingrese el valor de un Lado del Cubo en metros : ");
	scanf("%f",&Lado);	
	
	Perimetro = ((4*Lado)+ (4*Lado) + (4*Lado));
	Area = (6*(pow(Lado,2))); 
	Volumen = (pow(Lado,3));
	
	system("@cls||clear");
	printf("El Perimetro de su Cubo es : %.2f m^3\n",Perimetro);
	printf("El Area de su Cubo es : %.2f m^2\n",Area);
	printf("El Volumen de su Cubo es : %.2f m^3\n",Volumen);
	
	return 0;
}
