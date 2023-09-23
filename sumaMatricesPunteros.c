/*

Operacion que me permita ingresar dor matrices pero por punteros




*/
#include <stdio.h>
#include <stdlib.h>

int ingresarLimite(char *etiqueta);
int **ingresarMatriz(int filas,int columnas,char *etiqueta);
void presentarMatriz(int filas,int columnas,int **matriz,char *etiqueta);
int **sumaMatriz(int filas, int columnas, int **matrizA, int **MatrizB);

int main(int argc, char const *argv[]){
    system("@cls||clear");
    printf("SUMA DE MATRICES\n");
    int tamanioFilas,tamanioColumnas;
    tamanioFilas = ingresarLimite("Ingrese las Filas : ");
    tamanioColumnas = ingresarLimite("Ingrese las Columnas : ");
    int **matrizA = ingresarMatriz(tamanioFilas,tamanioColumnas,"Matriz 'A'");
    int **matrizB = ingresarMatriz(tamanioFilas,tamanioColumnas,"Matriz 'B'");
    int **matrizSuma = sumaMatriz(tamanioFilas,tamanioColumnas,matrizA,matrizB);
    int **matrizC = ingresarMatriz(tamanioFilas,tamanioColumnas,"Matriz 'C'");
    matrizSuma = sumaMatriz(tamanioFilas,tamanioColumnas,matrizSuma,matrizC);
    presentarMatriz(tamanioFilas,tamanioColumnas,matrizA,"Matriz 'A'");
    printf("\n +");
    presentarMatriz(tamanioFilas,tamanioColumnas,matrizB,"Matriz 'B'");
    printf("\n +");
    presentarMatriz(tamanioFilas,tamanioColumnas,matrizC,"Matriz 'C'");
    printf("\n");
    presentarMatriz(tamanioFilas,tamanioColumnas,matrizSuma,"Matriz 'Suma'");

    return 0;
}


int ingresarLimite(char *etiqueta){
    int valorInicial;
    printf("%s",etiqueta);
    scanf("%i",&valorInicial);
    return valorInicial;
}

int **ingresarMatriz(int filas,int columnas,char *etiqueta){
    int **matriz =(int **)malloc(filas*sizeof(int)); 
    int i,j;
    printf("Ingresando %s\n",etiqueta);
    //Recorrer lo que hemos creado --> filas
    //Ahora cada fila lo vamos a tratar como arreglo unidimensional
    for ( i = 0; i < filas; i++){
        //Crear los elementos que va a contener ese vector
        matriz[i] = (int *)malloc(columnas*sizeof(int));
        //*(matriz+i) = (int *)malloc(columnas*sizeof(int));
        for ( j = 0; j < columnas; j++){
            printf("Ingrese la posicion [%i][%i] para la matriz %s : ",i,j,etiqueta);
            scanf("%i",&matriz[i][j]);
        }
    } 
    return matriz;
}

void presentarMatriz(int filas,int columnas,int **matriz,char *etiqueta){
    int i,j;
    printf("%s\n",etiqueta);
    for ( i = 0; i < filas; i++){
        for ( j = 0; j < columnas; j++){
            printf("%i\t",matriz[i][j]);
        }
        printf("\n");
    } 

}

int **sumaMatriz(int filas, int columnas, int **matrizA, int **matrizB){
    int i,j;
    int **suma =(int **)malloc(filas*sizeof(int)); 
    for ( i = 0; i < filas; i++){
        suma[i] = (int *)malloc(columnas*sizeof(int));
        for (j = 0; j < columnas; j++){
            suma[i][j] = matrizA[i][j] + matrizB[i][j];
            
        }
    }
    return suma;
}