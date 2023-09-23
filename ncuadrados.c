// REALIZAR EL SIGUIENTE EJERCICIO
//S=1^2 - 2^2 - 3^2 + 4^2 + 5^2 + 6^2 - 7^2 - 8^2 - 9^2 - 10^2 + 11^2...
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void ingresarSerie(int *limite);
float sumar (int limite);

int main(int argc, char const *argv[])
{
    int limite;
    float SumaTotal ;
    char continuar;
    system("@cls||clear");
    do{
        system("@cls||clear");
        ingresarSerie(&limite);
        printf(" S = ");
        SumaTotal = sumar(limite);
        printf("\nS = %.2f\n",SumaTotal);
        printf("\nDesea Volver al Ciclo,(C)no otra letra Si : ");
        scanf(" %c",&continuar);
    } while (continuar != 'c' && continuar != 'C');
    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA VUELVA PRONTO");
    return 0;
}

void ingresarSerie(int *limite){
    printf("Ingrese un Limite : ");
    scanf("%i",limite);
}

float sumar (int limite){
    int sign=1,limitesi=1,contador=1;
    float suma=0;
    for(int i=1;i<=limite;i++){
        
        (sign>0)?printf(" + "):printf(" - ");    
        printf(" %i^2 ",i);    
        suma = suma + ((pow(i,2)*sign));
        if(contador<limitesi){
            contador++;
        } else{
            sign*=-1;
            limitesi++;
            contador=1;
        }
    }
    return suma;
}
