#include <stdio.h>
#include <stdlib.h>

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void sumaMatrices( int filas,int columnas,int matrizA[filas][columnas],int matrizB[filas][columnas],int Respuesta[filas][columnas]);


int main(){
    system("@cls||clear");
    int numFilas,numColumnas;
    
    
    printf(" S--U--M--A--D--E--M--A--T--R--I--C--E--S \n");
    printf("Ingrese la dimension de las matrices (Filas,Columnas) : ");
   
    scanf("%d %d",&numFilas,&numColumnas);
    int matrizA[numFilas][numColumnas];
    int matrizB[numFilas][numColumnas];
    int Respuesta[numFilas][numColumnas];
    
    ingresarmatriz(numFilas,numColumnas,matrizA,"A");
    ingresarmatriz(numFilas,numColumnas,matrizB,"B");
    sumaMatrices(numFilas,numColumnas,matrizA,matrizB,Respuesta);
    
    presentarmatriz(numFilas,numColumnas,matrizA,"A");
    printf("+\t+\n");
    presentarmatriz(numFilas,numColumnas,matrizB,"B");
    printf("\t=\n");
    presentarmatriz(numFilas,numColumnas,Respuesta,"Matriz Respuesta");



    return 0;
}

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],
    char *nombreMatriz){
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                printf("Ingrese la posicion fila '%s'[%d][%d] : ",nombreMatriz,i,j);
                scanf("%i",&matriz[i][j]);
            }
        }
}



void presentarmatriz(int filas,int columnas, int matriz[filas][columnas],
    char *nombreMatriz){
        printf("Matriz '%s'\n ",nombreMatriz);
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                printf("%d\t",matriz[i][j]);
        
            }
            printf(" \n"); 
        }
}
void sumaMatrices( int filas,int columnas,int matrizA[filas][columnas],int matrizB[filas][columnas],int Respuesta[filas][columnas]){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            Respuesta[i][j]= matrizA[i][j]+matrizB[i][j];

        }
    }


}
