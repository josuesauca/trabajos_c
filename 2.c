#include <stdio.h>
#include <stdlib.h>


void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void presentarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz);
void sumaMatrices(int filas,int columnas,int matrizA[filas][columnas],int Respuesta[filas][columnas]);
void verificarMatriz(int filas,int columnas,int Respuesta[filas][columnas]);

void Presentacion_de_Datos();


int main(){
    system("@cls||clear");
    Presentacion_de_Datos();
    int numFilas,numColumnas;

    printf("Matriz Igual  \n");
    printf("Ingrese la dimension de las matrices (Filas,Columnas) : ");

    scanf("%d %d",&numFilas,&numColumnas);

    int matrizA[numFilas][numColumnas];
    int Respuesta[numFilas][numColumnas];
    ingresarmatriz(numFilas,numColumnas,matrizA,"A");
    sumaMatrices(numFilas,numColumnas,matrizA,Respuesta);
    presentarmatriz(numFilas,numColumnas,matrizA,"A");

    printf("\t=\n");
    presentarmatriz(numFilas,numColumnas,Respuesta,"Matriz Respuesta");
    /*if( Respuesta[numFilas,numColumnas] == Respuesta[numColumnas,1]){
        
		printf("Su matriz no es simetrica");		
    }else{
       	printf("Su matriz es simetrica");
    }*/
    //verificarMatriz(numFilas,numColumnas,Respuesta);

    return 0;
}

void ingresarmatriz(int filas,int columnas, int matriz[filas][columnas],char *nombreMatriz){
	int i,j;
        for( i=0;i<filas;i++){
        	//int j;
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
            printf(" \n");
        }
}
void sumaMatrices( int filas,int columnas,int matrizA[filas][columnas],int Respuesta[filas][columnas]){
    int i,j;
	for( i=0;i<filas;i++){
        for( j=0;j<columnas;j++){
            Respuesta[i][j]= matrizA[i][j];

        }
    }

}
void verificarMatriz( int filas,int columnas,int Respuesta[filas][columnas]){
     if( Respuesta[filas][columnas] != Respuesta[filas][columnas]){
        printf("Su matriz no es simetrica");

    }else{
        printf("Su matriz es simetrica");
    }

}
void Presentacion_de_Datos(){
    printf("\n|----------------------------------------------------------------|\n");
    printf("\nEste algoritmo fue elaborado por :                             \n");
    printf("\n                                  Josue Alejandro Sauca Pucha\n");
    printf("\nFecha: 20/2/2020\n");
    printf("\nCiclo:Primer Ciclo A\n" );

}
