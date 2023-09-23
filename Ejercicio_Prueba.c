#include <stdio.h>
#include <stdlib.h>

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas]);
void presentarmatriz(int filas,int columnas, int matriz[filas][columnas]);
void sumaMatrices( int filas,int columnas,int matrizA[filas][columnas],int matrizB[filas][columnas],int Respuesta[filas][columnas]);


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
  
    sumaMatrices(numFilas,numColumnas,matrizA);


    return 0;
}



void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas]){
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                printf("Ingrese la posicion fila  [%d][%d] : ",i+1,j+1);
                scanf("%i",&matriz[i][j]);
            }
        }
}



void presentarmatriz (int filas,int columnas, int matriz[filas][columnas]){
        printf("Matriz '%s'\n");
        for(int i=0;i<filas ; i++){
            for(int j=0;j<columnas;j++){
                printf("%d\t",matriz[i][j]);
       
            }
            printf(" \n");
        }
}
void sumaMatrices/*En esta funcion realizamos las operaciones de multiplicación,suma y resta*/ ( int filas,int columnas,int matrizA[filas][columnas],int matrizB[filas][columnas],int Respuesta[filas][columnas]){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(i==j||j==i){
            Respuesta[i][j]= matrizA[i][j]*matrizB[i][j];
           
    if(simetrica==1){
        printf("La MATRIZ ingresada es simetrica\n");
    }else{
        printf("La MATRIZ ingresada no es simetrica\n");
    }
}
    printf("\n");
       
    }

}