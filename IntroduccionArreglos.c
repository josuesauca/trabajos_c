#include <stdio.h>
#include <stdlib.h>

//int longitudArray(int *arreglo);
//void IngresarArray(int array[], int longitud); Primer Forma y si se declara de la otra con esta form , si vale 
void IngresarArray(int *array, int longitud);

int main(int argc, char const *argv[]){
    int arreglo[] = {4,7,7,9,8,15};
    system("@cls||clear");

    /* printf("Tamanio del arreglo %i",sizeof(arreglo));
    printf("\nTamanio del almacenamiento de tipo de dato entero %i",sizeof(int));
    printf("\nTamanio de almacenamiento de cada elemento del arreglo %i",sizeof(*arreglo));
    printf("\nTamanio de elementos del arreglo %i",(sizeof(arreglo)/sizeof(int)));

    int tamanio = sizeof(arreglo)/sizeof(int);
  

    printf("\nImprimir arreglo : %p",(void *)arreglo);
    //printf("\nImprimir arreglo : %p",arreglo);
    printf("\nImprimir arreglo : %i",*arreglo);
    printf("\nArreglo posicion 0 : %i",arreglo[0]);
    printf("\nArreglo posicion 5 : %i",arreglo[5]);
    printf("\nArreglo posicion 0 : %i",arreglo[tamanio -1]);
    printf("\nArreglo posicion 0 : %i",arreglo[tamanio]); */

    //int tamanio = sizeof(arreglo)/sizeof(int);

    int tamanio = sizeof(arreglo)/sizeof(int);
    //int tamanio = longitudArray(arreglo);
    printf("\nPrimer Arreglo");
    IngresarArray(arreglo,tamanio);
    /* for ( i = 0; i < tamanio; i++){
        printf("\nArreglo [%i] = %i",i,arreglo[i]);
    } */




    
    const int TAMANIO_EDADES = 15;
    int edades[TAMANIO_EDADES];
    /* printf("\n\n\nTamanio del arreglo edades %i",sizeof(edades));
    printf("\nTamanio de almacenamiento de cada elemento del arreglo %d",sizeof(*edades)); */
   
    int tamanioedades = sizeof(arreglo)/sizeof(int);
    //int tamanioedades = longitudArray(edades);
    /* printf("\nTamanio de elementos del arreglo--> %i",TAMANIO_EDADES);
    printf("\nTamanio de elementos del arreglo %i",tamanioedades);
    printf("\nArreglo posicion 0 : %i",edades[0]);
    printf("\nArreglo posicion 5 : %i",edades[TAMANIO_EDADES-1]);
    printf("\nArreglo posicion 0 : %i",edades[tamanioedades-1]); */

    printf("\nSegundo Arreglo");
    IngresarArray(edades,tamanioedades);

    /* printf("\nSegundo Arreglo");
    for ( i = 0; i < tamanioedades; i++){
        printf("\nArreglo [%i] = %i",i,edades[i]);
    }
     */

    return 0;
}

/* 
int longitudArray(int *arreglo){

    printf("%i",sizeof(arreglo));
    printf("%i",sizeof(*arreglo));

    return (sizeof(arreglo)/sizeof(*arreglo));
}
 */
/* 
void IngresarArray(int array[], int longitud){

    int i;
    for (i = 0; i < longitud; i++){
        printf("\n[%i]  = %i",i,array[i]);
    }
} */


void IngresarArray(int *array, int longitud){

    int i;
    for (i = 0; i < longitud; i++){
        printf("\n[%i]  = %i",i,*(array+i));
    }
}