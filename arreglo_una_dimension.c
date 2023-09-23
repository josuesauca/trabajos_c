#include <stdio.h>
#include <stdlib.h>

int main(){
	int limite;
	int b[100];
	int c[100];
	printf("Ingrese un limite : ");
	scanf("%i",&limite);
	int i;
	for(i=0;i<limite;i++){
		printf("Digite la posicion %i : ",i+1);
		scanf("%i",&b[i]);	
	}	
	system("@cls||clear");
	printf("\n==============================");
	printf("\n\tArreglo -> ");
	for(i=0;i<limite;i++){
		printf("%i\t",b[i]);	
	}
	printf("\n==============================");
	printf("\n\tA -> ");
	for(i=0;i<limite;i++){
		if(b[i]%2==0){
			printf("%i\t",b[i]);
		}	
	}	
	printf("\n==============================");
	printf("\n\tB -> ");
	for(i=0;i<limite;i++){
		if(b[i]%2!=0){
			c[i]=b[i];
			printf("%i\t",c[i]);
		}
	}	
	
	
	return 0;
}

