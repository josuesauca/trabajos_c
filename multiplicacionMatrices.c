//Algoritmo hecho por Josue Sauca
#include <stdio.h>
#include <stdlib.h>

int ingresarLimite(char *etiqueta);
void ingresarMatriz(char *etiqueta,int filas,int columnas,int matriz[filas][columnas]);
void presentarMatriz(char *etiqueta,int filas,int columnas,int matriz[filas][columnas]);
void multiMatriz(int filasA,int columnasA,int filasB,int columnasB, int matrizA[filasA][columnasA],int matrizB[filasB][columnasB],int multiplicarMatrices[filasA][columnasB]);

int main(int argc, char const *argv[]){

    system("@cls||clear");
    int filasA,columnasA;
    int filasB,columnasB;
    
    filasA = ingresarLimite("Ingrese el limite de filas para la matriz : ");
    columnasA = ingresarLimite("Ingrese el limite de columnas para la matriz : ");
    filasB = ingresarLimite("Ingrese el limite de filas para la matriz : ");
    columnasB = ingresarLimite("Ingrese el limite de columnas para la matriz : ");

    int matrizA[filasA][columnasA], matrizB[filasB][columnasB],matrizMulti[100][100] ;

    if (columnasA==filasB){
       int matrizMulti[filasA][columnasB];       
    }else{
        printf("\nNo se puede realizar el calculo");
        //abort();
        return 1;
    }

    ingresarMatriz("Matriz 'A'",filasA,columnasA,matrizA);
    printf("\n\n");
    ingresarMatriz("Matriz 'B'",filasB,columnasB,matrizB);
    presentarMatriz("Matriz 'A'",filasA,columnasA,matrizA);
    printf("\n\tX\n");
    presentarMatriz("Matriz 'B'",filasB,columnasB,matrizB);
    multiMatriz(filasA,columnasA,filasB,columnasB,matrizA,matrizB,matrizMulti);
    printf("\n=========================\n");
    presentarMatriz("Matriz 'Multiplicada'",filasA,columnasB,matrizMulti);
    
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


void multiMatriz(int filasA,int columnasA,int filasB,int columnasB, int matrizA[filasA][columnasA],int matrizB[filasB][columnasB],int multiplicarMatrices[filasA][columnasB]){
    int i,j,k;
    for (i = 0; i < filasA; i++){
        for ( j = 0; j < columnasB; j++){

            //multiplicarMatrices[i][j] = 0;

            for (k = 0; k <columnasA ; k++){
                
                multiplicarMatrices[i][j] = multiplicarMatrices[i][j] + matrizA[i][k] * matrizB[k][j]; 

            }

        }
    }
}