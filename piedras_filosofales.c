#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){
    /*int matriz[100][100];
    int filas, columnas;
    int i, j;
    int eleccion;
    int respuesta[100][100];
    int acumulador = 0;
    system("@cls||clear");
    printf("Ingrese el numero de filas : ");
    scanf("%i", &filas);
    printf("Ingrese el numero de columnas : ");
    scanf("%i", &columnas);
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < columnas; j++) {
            printf("Ingrese la posicion [%i][%i] : ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < columnas; j++){
            printf("Desea escoger la casilla [%i][%i] Si(1) o No(2): ", i + 1, j + 1);
            scanf("%i", &eleccion);

            if (eleccion == 1) {
                acumulador = acumulador + matriz[i][j];
                respuesta[i][j] = respuesta[i][j] + matriz[i][j];
                i++;
                j = -1;
           }
           if (i >= filas){
                i = filas;
                j = columnas;
            }
        }
    }
    printf("\n===========================================================\n");
    printf("\t\tMatriz Original\n");
    printf("===========================================================\n");
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < columnas; j++) {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n===========================================================\n");
    printf("\t\tMatriz Respuesta\n");
    printf("===========================================================\n");
    for (size_t i = 0; i < filas; i++){
        for (size_t j = 0; j < columnas; j++){
            printf("%i\t", respuesta[i][j]);
        }
        printf("\n");
    }
    printf("\nSuma : %i", acumulador);*/
    int matriz[100][100];
    int filas,columnas;
    int i,j;
    int eleccion;
    int respuesta[100][100] ;
    int acumulador = 0;
    int numero_random;
    int direccion;
    srand(time(NULL));
    
    system("@cls||clear");
    printf("Ingrese el numero de filas : ");
    scanf("%i",&filas);
    printf("Ingrese el numero de columnas : ");
    scanf("%i",&columnas);
    for (size_t i = 0; i < filas; i++){
        for (size_t j = 0; j < columnas; j++) {
            numero_random =rand() % (8+1);
            matriz[i][j] = numero_random;
        }       
    }

    for (size_t i = 0; i < filas; i++){
        for (size_t j = 0; j < columnas; j++) {
            printf("Desea escoger la casilla para sumar [%i][%i] Si(1) o No(2): ",i+1,j+1);
            scanf("%i",&eleccion);
            if (eleccion==1) {
                acumulador = acumulador + matriz[i][j];
                respuesta[i][j] = respuesta[i][j] +matriz[i][j];
                i++;
                j=-1;
           }
           /*printf("Izquierda (1) o Derecha(2) : ");
           scanf("%i",&direccion);
           if(direccion ==1){
               j--;

           }else{
               j++;
           }*/
           if (i >= filas){
                    i = filas;
                    j = columnas;
            }
            
        }       
    }
    system("@cls||clear");
    printf("\n===========================================================\n");
    printf("\t\tMatriz Original\n");
    printf("===========================================================\n");
    for (size_t i = 0; i < filas; i++){
        for (size_t j = 0; j < columnas; j++) {
            printf("%i\t",matriz[i][j]);
        }       
        printf("\n");
    }

    printf("\n===========================================================\n");
    printf("\t\tMatriz Respuesta\n");
    printf("===========================================================\n");
    for (size_t i = 0; i < filas; i++){
        for (size_t j = 0; j < columnas; j++) {
            printf("%i\t",respuesta[i][j]);
        }       
        printf("\n");
    }
    printf("\nSuma : %i",acumulador);


   return 0;
}
