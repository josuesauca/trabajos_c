#include <stdio.h>
#define Cambio 1.14

int main(){
	float Transferencia,Total=0;	
	printf("Ingrese el monto total de la transferencia : ");
	scanf("%f",&Transferencia);
	
	Total = Transferencia * Cambio;
	
	printf("El Valor Total en Dolares es : %.2f",Total);	
	return 0;
}
