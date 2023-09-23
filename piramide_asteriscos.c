#include <stdio.h>


int main(){
	int altura,blancos,asteriscos;
	
	
	
	for(altura=6;altura>0;altura--){
		
		for(blancos = 1;blancos<=6-altura;blancos++){
			printf(" ");
		}
		for(asteriscos=1;asteriscos<=(altura*2)-1;asteriscos++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
