#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int limite,respuesta [100][100],suma[100][100];
	int matriz[100][100];
	int matriz_2[100][100],matriz_secu[100][100];
	int aux;
	system("@cls||clear");
	printf("Digite un limite para su matriz : ");
	scanf("%i",&limite);
	aux = limite -1;
	
	printf("\n\tMatriz A\n");
	for( i=0;i<limite;i++ ){
		for(j=0;j<limite;j++){
			printf("Digite la posicion [%i][%i] : ",i+1,j+1);
			scanf("%i",&matriz[i][j]);				
		}
	}
	printf("\n\tMatriz B\n");
	for( i=0;i<limite;i++ ){
		for(j=0;j<limite;j++){
			printf("Digite la posicion [%i][%i] : ",i+1,j+1);
			scanf("%i",&matriz_2[i][j]);				
		}
	}
	
	printf("\n=========================");
	printf("\n\tMatriz A\n");
	
	for( i=0;i<limite;i++ ){
		for(j=0;j<limite;j++){
			printf("\t%i",matriz[i][j]);			
		}
		printf("\n");
	}
	
	printf("\n=========================");
	printf("\n\tMatriz B\n");
	for( i=0;i<limite;i++ ){
		for(j=0;j<limite;j++){
			printf("\t%i",matriz_2[i][j]);				
		}
		printf("\n");
	}
	
	printf("\n=========================");
	printf("\n\tMatriz Respuesta\n");
	
	for(i=0;i<limite;i++){		
		for(j=0;j<limite;j++){			
			if(i==j||j==i){				
				respuesta[i][j]  = matriz[i][j]*matriz_2[i][j]  ; 
				printf("\t%i",respuesta[i][j]);
			}
			if(i>j){				
				respuesta[i][j] = matriz[i][j]-matriz_2[i][j]  ; 
				printf("\t%i",respuesta[i][j]);	
			}
			if(j>i){
				respuesta[i][j]  = matriz[i][j]+matriz_2[i][j]  ; 
				printf("\t%i",respuesta[i][j]);						
			}
			/* if(i==aux-j){
				matriz_secu[i][j] = matriz_secu[i][j] +matriz[i][j];

			}  */
		
		}
		printf("\n");
	
	}
	printf("\nLa otra matriz\n");
	for(i=0;i<limite;i++){		
		for(j=0;j<limite;j++){		
			/* if(i==limite-j){
				matriz_secu[i][j] = matriz_secu[i][j] +matriz[i][j];

			}	 */
			printf("\t%i",matriz_secu[i][j]);
		
		}
		printf("\n");
	
	}
	
	return 0;
}
