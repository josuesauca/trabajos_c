#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void Matrices( int filas,int columnas,int matrizA[filas][columnas],int Respuesta[filas][columnas]);

//void verificar_matriz(int numFilas,int numColumnas,int  Respuesta[numFilas][numColumnas]);

void Presentacion_de_Datos();


int main(){
    system("@cls||clear");
    Presentacion_de_Datos();
    bool  verificar;
    int numFilas,numColumnas;    
    
    printf("Matriz Igual  \n");
    printf("Ingrese la dimension de las matrices (Filas,Columnas) : ");
   
    scanf("%d %d",&numFilas,&numColumnas);
    
    int matrizA[numFilas][numColumnas];

    int Respuesta[numFilas][numColumnas];
    
    ingresarmatriz(numFilas,numColumnas,matrizA,"A");   
    Matrices(numFilas,numColumnas,matrizA,Respuesta);    
    presentarmatriz(numFilas,numColumnas,matrizA,"A");    
    
    printf("\t=\n");
    presentarmatriz(numFilas,numColumnas,Respuesta,"Matriz Respuesta");
    
   	if(Respuesta[numFilas][numColumnas] == Respuesta[numColumnas][numFilas]){
   		printf("\nEs igual ");
	}else{
		printf("\nNo es igual ");
	}
	//verificar_matriz(numFilas,numColumnas,Respuesta);

    return 0;
}

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],
    char *nombreMatriz){
    	int i,j;
        for( i=0;i<filas ; i++){
            for( j=0;j<columnas;j++){
                printf("Ingrese la posicion fila '%s'[%d][%d] : ",nombreMatriz,i,j);
                scanf("%i",&matriz[i][j]);
            }
        }
}


void presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz){
        printf("Matriz '%s'\n ",nombreMatriz);
        int i,j;
        for( i=0;i<filas ; i++){
            for( j=0;j<columnas;j++){
                printf("%d\t",matriz[i][j]);
        
            }
            printf("\n"); 
        }
}
void Matrices( int filas,int columnas,int matrizA[filas][columnas],int Respuesta[filas][columnas]){
    int i,j;
	for( i=0;i<filas;i++){
    
        for( j=0;j<columnas;j++){
            Respuesta[i][j]= matrizA[i][j];

        }
    }

}
/*
void verificar_matriz(int numFilas,int numColumnas,int  Respuesta[numFilas][numColumnas]){
	if(Respuesta[numFilas][numColumnas] == Respuesta[numColumnas][numFilas]){
   		printf("\nEs igual ");
	}else{
		printf("\nNo es igual ");
	}
	
	
	
	
}
*/
void Presentacion_de_Datos(){
    printf("\n|----------------------------------------------------------------|\n");
    printf("\nEste algoritmo fue elaborado por :                             \n");
    printf("\n                                  Josue Alejandro Sauca Pucha\n");
    printf("\nFecha: 20/2/2020\n");
    printf("\nCiclo:Primer Ciclo A\n" );

}
