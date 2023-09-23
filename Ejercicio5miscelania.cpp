#include <stdio.h>

int main(){
	int nota,sumador; 
	char alumno[10],alumno2[10]; 
	printf("INGRESE EL NOMBRE DEL PRIMER ALUMNO :");
	scanf("%c",alumno); 
	fflush(stdin);
	printf("INGRESE EL NOMBRE DEL SEGUNDO ALUMNO :");
	scanf("%c",alumno2); 
	fflush(stdin);
	for(int i;i<=3;i++){		
		printf("INGRESE SU NOTA : ");
		scanf("%i",nota);
	}
	
	
	return 0;
}
