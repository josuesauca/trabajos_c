#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[20][20];
	int auxiliar_1[20][20];	
	int i,j;
	system("@cls||clear");
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			printf("Ingrese la posicion [%i][%i] : ",i,j);
			scanf("%i",&matriz[i][j]);						
		}
	}
	system("@cls||clear");	
	printf("\n\n");
	printf("===================================\n");
	printf("\tMatriz Original\n");
	printf("===================================\n");
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			printf("%i\t",matriz[i][j]);			
		}
		printf("\n");
	}
	printf("\n\n");
	printf("===================================\n");
	printf("\tMatriz Respuesta\n");
	printf("===================================\n");
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){				
			if(j==1){
				auxiliar_1[i][j] = matriz[i][4];
				printf("%i\t",auxiliar_1[i][j]);				
			}else{
				if(j==4){
					matriz[i][j] = matriz[i][1];
					printf("%i\t",matriz[i][j]);						
				}else{					
					printf("%i\t",matriz[i][j]);					
				}				
			}				
		}
		printf("\n");
	}	
	return 0;
}
