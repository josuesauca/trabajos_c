#include <stdio.h>
#include <stdlib.h>

int ingresarLimite(char *etiqueta);
void ingresarMatriz(char *etiqueta,int filas,int columnas,int matriz[filas][columnas]);
void presentarMatriz(char *etiqueta,int filas,int columnas,int matriz[filas][columnas]);
void sumaMatriz(int filas,int columnas, int matrizA[filas][columnas],int matrizB[filas][columnas],int sumarMatriz[filas][columnas]);

int main(int argc, char const *argv[]){

    system("@cls||clear");

    int filas,columnas;
    
    filas = ingresarLimite("Ingrese el limite de filas para la matriz : ");
    columnas = ingresarLimite("Ingrese el limite de columnas para la matriz : ");
    
    int matrizA[filas][columnas], matrizB[filas][columnas],matrizSuma[filas][columnas];
    system("@cls||clear");
    ingresarMatriz("Matriz 'A'",filas,columnas,matrizA);
    printf("\n\n");
    ingresarMatriz("Matriz 'B'",filas,columnas,matrizB);
    //system("@cls||clear");
    //printf("\n-----------------------\n");
    presentarMatriz("Matriz 'A'",filas,columnas,matrizA);
    printf("\n\t+\n");
    presentarMatriz("Matriz 'B'",filas,columnas,matrizB);
    sumaMatriz(filas,columnas,matrizA,matrizB,matrizSuma);
    printf("\n=========================\n");
    presentarMatriz("Matriz 'Suma'",filas,columnas,matrizSuma);
    //ingresarMatriz("",int filas,int columnas,int matriz[filas][columnas]){

    return 0;
}

int ingresarLimite(char *etiqueta){
    int valorIngresado;
    printf("%s",etiqueta);
    scanf("%i",&valorIngresado);
    return valorIngresado;
}

void ingresarMatriz(char *etiqueta,int filas,int columnas,int matriz[filas][columnas]){
    int i,j;
    int contador = 1;
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            printf("Ingrese la posicion [%i][%i] para la matriz %s : ",i,j,etiqueta);
            scanf("%i",&matriz[i][j]);
        }
    }
}


void presentarMatriz(char *etiqueta,int filas,int columnas,int matriz[filas][columnas]){
    int i,j;
    printf("\n%s\n",etiqueta);
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            printf("%i\t",matriz[i][j]);
        }
        printf("\n");
    }

}


void sumaMatriz(int filas,int columnas, int matrizA[filas][columnas],int matrizB[filas][columnas],int sumarMatriz[filas][columnas]){
    int i,j;
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            sumarMatriz[i][j] = matrizA[i][j] + matrizB[i][j];      
        }
    }
}