
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	system("@cls||clear");
    int x = 2;
    int y = 3;
    float Total;
    printf("Valor de x : %i",x);
    printf("\nValor de x : %i",y);
    Total = pow(x,y);
    printf("\nTotal : %.3f",Total);
    printf("\n");
    return 0;
}