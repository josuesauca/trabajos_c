#include <stdio.h> 
#include<string.h>


int main(){
    int anio;
    char volver_al_ciclo[20]; 

    do{
    printf("Ingrese el anio a verificar : ");
    scanf("%i",&anio);

    if ((anio%4==0) && (anio%100!= 0)|| (anio%400==0)){
        printf("Su año es bisiesto");

    }else{
        printf("Su año no es bisiesto");

    }

    printf("\nDesea volver a ingresar otro año, pulse cualquier tecla si es asi o pulse F si no");
    getchar();
    }while (strcmp(volver_al_ciclo,"f")==0 || strcmp(volver_al_ciclo,"F")==0);

    return 0; 
}
