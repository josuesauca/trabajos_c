#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    int numero_materias;
    float costo_materia,total_pagar,nota_materias;
    float descuento;
    printf("\tBienvenido\n");
    printf("Ingrese el Numero de Materias Cursadas: ");
    scanf("%i",&numero_materias);
    printf("Ingrese el Costo de las Materias : ");
    scanf("%f",&costo_materia);
    printf("Ingrese la Nota Total : ");
    scanf("%f",&nota_materias);
    if(nota_materias>=9&&nota_materias<=10){
        descuento = (costo_materia * numero_materias)*0.30;
        total_pagar = (costo_materia * numero_materias) - descuento;
        printf("\nUsted a sido acreedor al descuento del 30 %%");
    }else{
        if (nota_materias>=0&&nota_materias<=8) {
            descuento = (costo_materia * numero_materias)*0.10;
            total_pagar = (costo_materia * numero_materias) + descuento;
            printf("\nUsted no a sido acreedor al descuento del 30 %%");
        }       
    }    
    printf("\nEl valor de su matriucula por %i materias es : $ %.2f",numero_materias,total_pagar);
    return 0;
}