//Marvin Achupallas,Juan Armijos,Luis Jumbo,Josue Sauca.
//Año Cursante: Primer Ciclo ¨Ä¨
//Fecha: 12-Enero-2020

#include <stdio.h>

int main(){
	
	int num,valorTotal,limite,i=1;
	printf ("INGRESE LA TABLA DE MULTIPLICAR QUE DESEAS\n");
	scanf ("%i",&num);
	printf ("INGRESE UN LIMITE PARA SU TABLA\n");
	scanf ("%i",&limite);
	
	
	while(i<=limite){
		
		valorTotal = num*i;
		printf ("%iX%i=%i\n",num, i,valorTotal);
		i=i+1;	
		
	}
		
	return 0;
}
