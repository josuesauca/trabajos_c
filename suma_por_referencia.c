#include <stdio.h>
#include <stdlib.h>
void  ingresarmatriz(int filas,int columnas, int matriz[filas][columnas], char *nombreMatriz);
void  presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void  sumaMatrices( int filas,int columnas,int matrizA,int matrizB);


int main(){

    system("@cls||clear");
    int numFilas,numColumnas;
    
    printf(" S--U--M--A--D--E--M--A--T--R--I--C--E--S \n");
    printf("Ingrese la dimension de las matrices (Filas,Columnas) : ");
   
    scanf("%d %d",&numFilas,&numColumnas);
    int  *matrizA= &ingresarmatriz(numFilas,numColumnas,'A');
    int  *matrizB= &ingresarmatriz(numFilas,numColumnas,"B");

    presentarmatriz(numFilas,numColumnas,matrizA,"A");
    printf("+\t+\n");
    presentarmatriz(numFilas,numColumnas,matrizB,"B");
    printf("\t=\n");
    sumaMatrices( numFilas,numColumnas,matrizA,matrizB);

    return 0;
}


void  ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],
 char *nombreMatriz){
    
    int matriz=(int**) malloc(filas* (sizeof(int)));

        for(int i = 0; i < filas ; i++){

            *matriz[i] = (int) malloc(columnas * sizeof(int));
            
            for(int j = 0; j < columnas; j++){
                printf("Ingrese la posicion fila '%s'[%d][%d] : ",nombreMatriz,i,j);
                scanf("%i",&matriz[i][j]);
            }
        }
        return matriz;
}



void  presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz){
        printf("Matriz '%s'\n ",nombreMatriz);
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                printf("%d\t",matriz[i][j]);
        
            }
            printf(" \n"); 
        }
}

void  sumaMatrices( int filas,int columnas,int **matrizA,int **matrizB){

    int  matriz = (int) malloc(filas* (sizeof(int)));
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[&i][&j]= matrizA[i][j] + matrizB[i][j];

        }
    }
    return matriz;


}
