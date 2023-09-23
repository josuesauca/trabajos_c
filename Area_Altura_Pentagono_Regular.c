#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float Lado,Radio,Apotema,Perimetro,Area;
    system("@cls||clear");
    printf("Por Favor Ingrese un Lado del Pentagono :");
    scanf("%f",&Lado);
    printf("Por Favor Ingrese un Valor del Radio :");
    scanf("%f",&Radio);
    Apotema = sqrt((pow(Radio,2)-pow(Lado/2,2)));
    Perimetro = (Lado*5);	
	Area = ((Perimetro*Apotema)/2);	
    printf("\nEL Perimetro es :%.3f",Perimetro);
    printf("\nEL Apotema es :%.3f",Apotema);
    printf("\nEL Area es :%.3f\n",Area);
    return 0;
}