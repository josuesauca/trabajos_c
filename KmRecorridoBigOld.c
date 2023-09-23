//Autores JOSUE SAUCA,MELISSA TUZA
// PARALELO PRIMERO "B"

#include<stdio.h>
#include<stdlib.h>

float **ingresarMatriz(char *dias[],int filas, int columnas);
void presentarMatriz(char *dias[],int filas, int columnas, float **matriz,float matrizRespuesta[filas]);
float *sumarMatriz(int filas, int columnas, float **matriz);
float promedioTrabajadorFilas(int i,float *matrizRespuesta);
void MensajeSalida();

int main (int argc, char const *argv[]){
    system("@cls||clear");
    int numTrabajadores,columnas=7;
    char *dias[] = {"L","M","M","J","V","S","D"};
    printf("Ingrese el numero de Trabajadores : ");
    scanf("%i",&numTrabajadores);
    float **matriz = ingresarMatriz(dias,numTrabajadores,columnas);
    float *matrizRespuesta = sumarMatriz(numTrabajadores,columnas,matriz);
    system("@cls||clear");
    presentarMatriz(dias,numTrabajadores,columnas,matriz,matrizRespuesta);
    MensajeSalida();
    return 0;              
}

float **ingresarMatriz(char *dias[],int filas, int columnas){
    float **matriz =(float **)malloc(filas*sizeof(float)); 
    for (int i = 0; i < filas; i++){
        matriz[i] = (float *)malloc(columnas*sizeof(int));
        for (int j = 0; j < columnas; j++){
               printf("N%i) Digite el valor del dia %s : ",i+1,dias[j]);
            scanf("%f", &matriz[i][j]);
        }
    }
    return matriz;
}

float *sumarMatriz(int filas, int columnas, float **matriz){
    float *matrizRespuesta = (float *)malloc(filas*sizeof(float));
    for (int i = 0; i < filas; i++){
        matrizRespuesta[i]=0;
        for (int j = 0; j < columnas; j++){
            matrizRespuesta[i]=matrizRespuesta[i] + matriz[i][j];
        }
    }
    return matrizRespuesta;
}

float promedioTrabajadorFilas(int i,float *matrizRespuesta){
    return matrizRespuesta[i]/7;

}
 
void presentarMatriz(char *dias[],int filas, int columnas, float **matriz,float *matrizRespuesta){
    float suma = 0;
    float sumaColumnas = 0;
    for (int i = 0; i < columnas; i++) {
        printf("\t%s",dias[i]);
    }
    printf("\tTotal\tPromedio\n");
    for (int i = 0; i < filas; i++){
        printf("%i\t",i+1);
        for (int j = 0; j < columnas; j++){
            printf("%.2f\t", matriz[i][j]);
            suma = suma +matriz[i][j];
        }
        printf("%.2f\t",matrizRespuesta[i]);
        printf("%.2f\n",promedioTrabajadorFilas(i,matrizRespuesta));
        
    }

}

void MensajeSalida(){
    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA");
    printf("\nPRIMER CICLO PARALELO B");
}