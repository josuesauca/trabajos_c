//Algoritmo hecho por: Jhonatana Sefla,Josue Sauca,Juan Castillo, Nathaly Bravo 
//Primer Ciclo "B"

#include <stdio.h>
#include <stdlib.h>

#define Valor_de_Cambio 1.14
#define Descuento 0.05

int main(){
    float Transferencia,Comision,Transferencia_Dolares,Valor_Total_Transferencia;     
    float Valor_Comision_Dolares,Valor_Total_Dolares;
    system("@cls||clear");
    printf("===================Bienvenido=======================\n");
    printf("Ingrese el Total de la Transferencia en Euros : ");
    scanf("%f",&Transferencia);

    Comision = Transferencia * Descuento;
    Valor_Total_Transferencia = Transferencia - Comision;

    Transferencia_Dolares = Transferencia * Valor_de_Cambio;
    Valor_Comision_Dolares =  Comision * Valor_de_Cambio;
    Valor_Total_Dolares = Valor_Total_Transferencia * Valor_de_Cambio;

    printf("\nEl Valor de la Transferencia en Dolares es : %.2f",Transferencia_Dolares);
    printf("\nValor de Comision  del 5%% en Dolares es : %.2f",Valor_Comision_Dolares);
    printf("\nEl monto que usted recibe es de : %.2f Dolares",Valor_Total_Dolares);
    printf("\n======================================================================");
    return 0;
}