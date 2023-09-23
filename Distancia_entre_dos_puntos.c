#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    float X1,X2,Y1,Y2,X,Y,Total;
    printf("Ingrese los valores del P1(X1,Y1) : ");
    scanf("%f %f",&X1,&Y1);
    printf("\nIngrese el valor de los valores del P2(X2,Y2) : ");
    scanf("%f %f",&X2,&Y2);
    //X = (X2-X1);
    //Y = (Y2-Y1);
    Total = sqrt(pow(X2-X1,2)+ pow(Y2-Y1,2));
    printf("El resultado es : %.3f",Total);

    return 0;
}
