#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void matriz_descendente(int filas,int columnas,int matriz[filas][columnas]);
void matriz_ascendente(int filas,int columnas,int matriz[filas][columnas]);
void ingreso(int filas,int columnas,int matriz[filas][columnas]);

int main(){
	system("@cls||clear");
	int matriz[100][100];	
	int filas,columnas;
	printf("Digite las filas y columnas de la matriz : ");
	scanf("%i %i",&filas,&columnas);	
	ingreso(filas,columnas,matriz);
	printf("\n");
	printf("\nMatriz Ascendente \n");
	matriz_ascendente(filas,columnas,matriz);
	printf("\nMatriz Descendente\n ");
	matriz_descendente(filas,columnas,matriz);
	system("pause");
	getch();
	return 0;
}
void ingreso(int filas,int columnas,int matriz[filas][columnas]){
	int i,j;
	for(i=0;i<filas;i++){		
		for(j=0;j<columnas;j++){
			printf("Digite los valores de[%i][%i] : ",i+1,j+1);
			scanf("%i",&matriz[i][j]);	
		}
	}		
}
void matriz_ascendente(int filas,int columnas,int matriz[filas][columnas]){	
	int i,j;
	for(i=0;i<filas;i++){		
		for(j=0;j<columnas;j++){
			printf("\t%i",matriz[i][j]);	
		}
		printf("\n");
	}	
}



void matriz_descendente(int filas,int columnas,int matriz[filas][columnas]){
	int i,j;
	for(i=filas-1;i>=0;i--){		
		for(j=columnas-1;j>=0;j--){
			printf("\t%i",matriz[i][j]);	
		}
		printf("\n");
	}	
}
