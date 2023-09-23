#include <stdio.h>
#include <time.h>


int main(){
	float Valor_de_la_compra,Descuento,Total=0;
	int numero_random; 
	printf("Ingrese el total de la compra : ");
	scanf("%f",&Valor_de_la_compra);
	srand(time(NULL));
	numero_random = 1+rand()%((200+1) - 1);
	
	if(numero_random<74){
		Descuento = 0.15;
		Descuento = Descuento * Valor_de_la_compra ; 
		Total = Valor_de_la_compra - Descuento ; 
	}else{
		Descuento = 0.20;
		Total = Descuento * Valor_de_la_compra ; 
		Descuento = Descuento * Valor_de_la_compra ; 
		Total = Valor_de_la_compra - Descuento ; 
	}
	printf("Su numero de random es %i\nObtiene un descuento del : %.2f ",numero_random,Descuento);
	printf("\nSu total a pagar es : %.2f",Total);
	
	
	
	return 0;
}
