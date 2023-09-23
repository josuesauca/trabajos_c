#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
void numero_reinas(int filas, int columnas,int matriz[filas][columnas]);
void imprimir_matriz(int filas,int columnas,int matriz[filas][columnas]);
void vuelta_atras(int etapa,int filas,int columnas,int matriz[filas][columnas]);
bool aceptable(int filas, int etapa,int columnas,int matriz[filas][columnas]);

int main(){
    system("@cls||clear");
    int filas = 8;
    int columnas = 8;
    int matriz[filas][columnas];
    numero_reinas(filas,columnas,matriz);
    imprimir_matriz (filas,columnas,matriz);

    
    return 0;
}


void numero_reinas(int filas, int columnas,int matriz[filas][columnas]){
    int i,j;
    for (size_t i = 0; i < filas; i++) {
        for(size_t j = 0; j < columnas; j++){
            matriz[i][j]=0;
        } 
    }       
}

void imprimir_matriz(int filas,int columnas,int matriz[filas][columnas]){
    int i,j;
    for (size_t i = 0; i < filas; i++) {
        for(size_t j = 0; j < columnas; j++){
            printf("%i\t",matriz[i][j]);
        }    
        printf("\n");    
    }
}

void vuelta_atras(int etapa,int filas,int columnas,int matriz[filas][columnas]){
    int i;
    for (size_t i = 0; i < matriz[filas][columnas]; i++){
       if(aceptable(filas,etapa)){
           matriz[i][etapa] = 1;
           if(aceptable == matriz[filas][columnas] -1){
               imprimir_matriz();
           }else{
               vuelta_atras(etapa+1);
           }
           matriz[i][etapa] = 0;
       }
    }
    
}


bool aceptable(int filas, int etapa,int columnas,int matriz[filas][columnas]){
    int j;
    for (size_t j = 0; j <=filas; j++){
        if(solucion[j][etapa]==1){
            return false;
        }
    }

    for (size_t j = 0; j <=etapa; j++) {
        if(solucion[i][j]==1){
            return false;
        }
    }
    int h = filas;
    for (size_t j = etapa; j >= 0 && h >=0; j--){
        if(solucion[h][j]==1){
            return false;
        }
    }
    h = filas;
    for (size_t j = etapa; j >= 0 && h < matriz[filas][columnas]; j--){
        if(solucion[h][j]==1){
            return false;
        }
        h++;
    }

    return true;
    
    
}*/