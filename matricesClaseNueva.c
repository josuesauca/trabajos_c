#include <stdio.h>
#include <stdlib.h>

void ingresarrMatriz(int filas,int columnas,int matriz[filas][columnas]);
void presentarMatriz(int filas,int columnas,int matriz[filas][columnas]);
void inicializarMatriz(int filas, int columnas, int arrayOfArray[filas][columnas]);

void cambioDiagonalPrincipal(int cambio,int filas , int columnas, int matriz[filas][columnas]);

int main(int argc, char const *argv[]){
    system("@cls||clear");
    /*
    int matriz[3][4] ={
        {1,2,3,4},
        {0,5,7,9},
        {6,9,-7,-55}m
    };


    */

    int filas,columnas;
    
    printf("Ingrese un numero de filas : ");
    scanf("%i",&filas);
    printf("Ingrese un numero de columnas : ");
    scanf("%i",&columnas);

    int matriz[filas][columnas];

    printf("Ingresar Matriz\n ");
    ingresarrMatriz(filas,columnas,matriz);
    //system("@cls||clear");
    printf("\n\n");
    printf("Presentar Matriz\n");
    presentarMatriz(filas,columnas,matriz);
    printf("\n-----------------------------\n");
    int cambio ;
    printf("Ingrese el valor que desea fijar a la DP : ");
    scanf("%i",&cambio);
    cambioDiagonalPrincipal(cambio,filas,columnas,matriz);
    printf("Matriz Cambiada\n");
    printf("\n-----------------------------\n");
    presentarMatriz(filas,columnas,matriz);
    /* printf("Presentar sin Inicializar\n");
    inicializarMatriz(filas,columnas,matriz);
    printf("Presentar sin Inicializar\n");
    presentarMatriz(filas,columnas,matriz);
 */

    

    return 0;
}

void ingresarrMatriz(int filas,int columnas,int matriz[filas][columnas]){
    int i,j;
    int contador = 1;
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            printf("Ingrese la posicion [%i][%i] : ",i,j);
            scanf("%i",&matriz[i][j]);
           /*  matriz[i][j] = contador;
            printf("[%i][%i] = %i",i,j,matriz[i][j]);
            contador++; */
        }
    }
}


void presentarMatriz(int filas,int columnas,int matriz[filas][columnas]){
    int i,j;
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            printf("%i\t",matriz[i][j]);
        }
        printf("\n");
    }

}

void inicializarMatriz(int filas, int columnas, int arrayOfArray[filas][columnas]){
    int i,j;
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            arrayOfArray[i][j] = -999;
        }
    }

}

void cambioDiagonalPrincipal(int cambio,int filas , int columnas, int matriz[filas][columnas]){
    int i,j;
    for (i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            //if(i==j){
                matriz[i][i] = cambio;
                //cambio++;
            //}
        }
    }

}