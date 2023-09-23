#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    float largo,ancho, profundidadMedia, totalM3, costoTotal;
    float costoM3 = 1.25;
    printf("\n\tPrograma para calcular el pago del agua a propietarios de albercas\n");
    printf("\tIngrese las medidas de la alberca:\n");
    printf("\nEl largo ");
    scanf("%f",&largo);
    printf("\nEl ancho ");
    scanf("%f",&ancho);
    printf("\nLa profundidad Media ");
    scanf("%f",&profundidadMedia);
    totalM3 = largo * ancho * profundidadMedia;
	costoTotal = totalM3 * costoM3;
    printf("\tSu pago es de : %f $",costoTotal);

    return 0;
}