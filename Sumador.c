#include <stdio.h>
#include <stdbool.h>


int main (){
	int numeroTerminos=1,limite,contador=0,sumador=0,constante = 1;
	bool par = true;
	printf("INGRESE UN LIMITE : ");
	scanf("%i",&limite);
	do{
		
	   	numeroTerminos =numeroTerminos +contador;
		sumador =numeroTerminos+sumador;	
		
		printf (" %i\n",numeroTerminos);
		numeroTerminos = numeroTerminos +constante;
		contador=0;
	
		if( par == true){
		
			
			
			
			
			
		}
	    	    
	}while(numeroTerminos<=limite);
	printf( "\nLA SUMA ES : %i ",sumador);
	
	return 0;
}

