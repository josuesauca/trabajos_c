#include <stdio.h>
#include <stdbool.h>


int main (){
	int numeroTerminos=1,limite,contador=0,sumador=0,constante = 1,totaldenominador=1,incremento=2;
	bool par = true;
	printf("INGRESE UN LIMITE : ");
	scanf("%i",&limite);
	do{
	    numeroTerminos =numeroTerminos +contador;
		sumador =numeroTerminos+sumador;		
		
		
		//denominador
		totaldenominador = totaldenominador+incremento;
		 incremento = incremento++;
		//findenominador //	
		numeroTerminos = numeroTerminos +constante;	
		contador=0;	    
				    
			if(numeroTerminos%2==0){
			
			printf(" \n-%i\n",numeroTerminos);
			
			
			}		    
		
			if(par==true){
				printf(" \n+%i\n",numeroTerminos);
				
			}
				    
				    
				    
	}while(numeroTerminos<=limite);
	
	
	return 0;
}
