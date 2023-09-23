#include <stdio.h>

void ingresar_arreglo(int limite,int a[limite]);
void mostrar_arreglo(int limite,int a[limite]);
void arreglo_ordenado(int limite ,int a[limite]);

int main(){
	int a[100],limite;
	printf("Ingrese un limite : ");
	scanf("%i",&limite);
	ingresar_arreglo(limite,a);
	mostrar_arreglo(limite,a);
	arreglo_ordenado(limite,a);
	getch();	
	return 0;
}

void ingresar_arreglo(int limite,int a[limite]){
	int i;
	for(i=0;i<limite;i++){
		scanf("%i",&a[i]);
	}
	printf("\n");
}

void mostrar_arreglo(int limite,int a[limite]){
	int i;
	printf("\nArreglo Original \n");
	for(i=0;i<limite;i++){
		printf(" %i ",a[i]);
	}
	printf("\n");
}

void arreglo_ordenado(int limite ,int a[limite]){
	int i,j,aux;
	for(i=0;i<limite;i++){
		
		for(j=0;j<limite;j++){
			
			if(a[j]>a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
			
		}
	}
	printf("\nArreglo Ordenado \n");
	for(i=0;i<limite;i++){
		printf(" %i ",a[i]);
	}
	
	
}
