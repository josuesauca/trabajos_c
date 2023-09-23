#include <stdio.h>
#include <stdlib.h>


int main(){
	float Lado, Perimetro, Area, Volumen; 		
	printf("Ingrese un Lado del Cubo en Metros : ");
	scanf("%f",&Lado);	
	Perimetro = ((4*Lado) + (4*Lado) + (4*Lado));		
	Area = (6*(Lado*Lado));								
	Volumen = (Lado*Lado*Lado);	
	system("@cls||clear");
	printf("El valor del Perimetro es  : %.3f M^3 \n",Perimetro);	
	printf("El valor del Area es  : %.3f M^2 \n",Area);	
	printf("El valor del Volumen es  : %.3f M^3 \n",Volumen);
		
	return 0;
}

