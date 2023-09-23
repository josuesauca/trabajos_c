//Algoritmo hecho por Josue Sauca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int ingresoLimite(char *etiqueta);
int **ingresoMatriz(int filas,int columnas);
void presentarMatriz(int filas,int columnas,int **matriz);
bool verificarDimensiones(int filasA,int columnasA,int filasB, int columnasB,int **matrizA,int **matrizB);
void prensentarSiNoEsIgual(bool verificar);

int main(int argc, char const *argv[]){
    
    system("@cls||clear");

    int filasA = ingresoLimite("Ingreso filas : ");
    int columnasA = ingresoLimite("Ingreso columnas : ");
    int filasB = ingresoLimite("Ingreso filas : ");
    int columnasB = ingresoLimite("Ingreso columnas : ");

    int **matrizA = ingresoMatriz(filasA,columnasA);
    int **matrizB = ingresoMatriz(filasB,columnasB);
    int i,j;
    
    printf("\n\n");
    presentarMatriz(filasA,columnasA,matrizA);
    printf("\n\n");
    presentarMatriz(filasB,columnasB,matrizB);

    bool verificar = verificarDimensiones(filasA,columnasA,filasB,columnasB,matrizA,matrizB);
    

    if(!verificar){
        printf("\nLas matrices son iguales");
    }else{
        printf("\nLas matrices no son iguales");
        
    }  
    //prensentarSiNoEsIgual(verificar);
    return 0;
}

int ingresoLimite(char *etiqueta){
    
    int ingreso;
    printf("%s",etiqueta);
    scanf("%i",&ingreso);
    return ingreso;

}


int **ingresoMatriz(int filas,int columnas){
    int **matriz = (int **)malloc(filas *sizeof(int));
    int i,j;
    for(i=0;i<filas;i++){
        matriz[i] = (int *)malloc(columnas *sizeof(int));
        for(j=0;j<columnas;j++){
            printf("Ingrese [%i][%i] : ",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }
    return matriz;
}

void presentarMatriz(int filas,int columnas,int **matriz){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){

            printf("%i\t",matriz[i][j]);
        }
        printf("\n");
    }
    
}

bool verificarDimensiones(int filasA,int columnasA,int filasB, int columnasB,int **matrizA,int **matrizB){
    bool verificar = true;
    int i,j;
    if(filasA == filasB && columnasA ==columnasB){
        for(i=0;i<filasA;i++){
            for (j = 0; j < columnasB; j++){
                if (matrizA[i][j] != matrizB[i][j]){
                    verificar = false;
                }
            }            
        }
    }else{
        printf("\nNo se pueden comparar");
    }
    return verificar;

}

void prensentarSiNoEsIgual(bool verificar){
    
    if(!verificar){
        printf("\nLas matrices son iguales");
    }else{
        printf("\nLas matrices no son iguales");
        
    }

}