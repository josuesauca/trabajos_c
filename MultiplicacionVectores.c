//Algoritmo hecho por Josue Sauca
//Primer Ciclo B

#include <stdio.h>
#include <stdlib.h>


float *ingresarArreglo(char *etiqueta,float longitud);
float *multiplicacionVector(int longitud,float ingresoVectorA[longitud], float ingresoVectorB[longitud]);
void mostrarRespuesta(int longitud,float array[longitud]);
void mostrarArreglo(int longitud,float arreglo[longitud]);
void presentarMayorMenor(int mayor, int menor,float *arreglo);
void numeroMayorMenor(int longitud,float *arreglo);



int main(int argc, char const *argv[]){

    int longitud = 5;
    system("@cls||clear");
    float *ingresoVectorA = ingresarArreglo("Vector 'A'",longitud);
    float *ingresoVectorB = ingresarArreglo("Vector 'B'",longitud);
    float *multiplicacion = multiplicacionVector(longitud,ingresoVectorA,ingresoVectorB);
    system("@cls||clear");
    printf("\n\n\n");
    mostrarArreglo(longitud,ingresoVectorA);
    //numeroMayorMenor(longitud,ingresoVectorA);
    printf("\nX\n");
    mostrarArreglo(longitud,ingresoVectorB);
    //numeroMayorMenor(longitud,ingresoVectorB);
    printf("\n=============================\n");
    mostrarRespuesta(longitud,multiplicacion);
    printf("\n");
    numeroMayorMenor(longitud,multiplicacion);
    return 0;
}

float *ingresarArreglo(char *etiqueta,float longitud){

    float *array = (float *)malloc(longitud *sizeof(float));
    int i;
    printf("\nIngrese los datos del Vector\n");
    for(i = 0; i < longitud; i++){
        printf("Ingrese la posicion [%i] del vector : ",i+1);
        scanf("%f",&array[i]);
    }
    printf("\n");
    return array;
}
 

float *multiplicacionVector(int longitud,float ingresoVectorA[longitud], float ingresoVectorB[longitud]){

    float *multiplicacion = (float *)malloc(longitud *sizeof(float));
    int i;
    for (i = 0; i < longitud ; i++){
        multiplicacion[i] = ingresoVectorA[i] * ingresoVectorB[i];

    }
    return multiplicacion;
}

void mostrarRespuesta(int longitud,float array[longitud]){
    int i;
    for (i = 0; i < longitud; i++){
        printf("%.2f\t",array[i]);
    }
}

void mostrarArreglo(int longitud,float arreglo[longitud]){
    int i;
    for (i = 0; i < longitud; i++){
        printf("%.2f\t",arreglo[i]);

    }
}

void numeroMayorMenor(int longitud,float *arreglo){
    int i;
    int mayor = 0,menor = 0;
    for(i = 0; i < longitud; i++){
        if (arreglo[i]>arreglo[mayor]){
            mayor = i;
        }
        if (arreglo[i]<arreglo[menor]){
             menor = i;
        }
    }
    presentarMayorMenor(mayor,menor,arreglo);
}

void presentarMayorMenor(int mayor, int menor,float *arreglo){
    printf("El Numero Mayor esta en la posicion [%i] y es : %.2f ",mayor,arreglo[mayor]);
    printf("\nEl Numero Menor esta en posicion [%i] y es : %.2f ",menor,arreglo[menor]);
}