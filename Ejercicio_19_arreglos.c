/*Ingresar los límites de una matriz, llenar con valores aleatorios para cada fila y luego mostrar dicha
matriz en forma ordenada por sus valores.*/

#include <stdio.h>
#include <stdlib.h>

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void Ordenar_Matriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);


int main(){
    system("@cls||clear");
    int numFilas,numColumnas;
    int dimension;
    printf(" \n");
    printf("Ingrese la dimension de las matrices (Filas,Columnas) : ");
    scanf("%d",&dimension);
    numFilas=dimension;
    numColumnas=dimension;   
    int matrizA[numFilas][numColumnas];    
      
    ingresarmatriz(numFilas,numColumnas,matrizA,"A");    
    presentarmatriz(numFilas,numColumnas,matrizA,"A");
    printf("\n\n");  
    return 0;
}



void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],
    char *nombreMatriz){
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                printf("Ingrese la posicion fila '%s' [%d][%d] : ",nombreMatriz,i+1,j+1);
                scanf("%i",&matriz[i][j]);
            }
        }
}



void presentarmatriz (int filas,int columnas, int matriz[filas][columnas],
    char *nombreMatriz){
        printf("Matriz '%s'\n",nombreMatriz);
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                    printf("%d\t",matriz[i][j]);

            }
            printf(" \n");
        }
}

void Ordenar_Matriz(int filas,int columnas, int matriz[filas][columnas],
        char *nombreMatriz){





}
