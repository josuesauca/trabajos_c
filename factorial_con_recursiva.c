#include <stdio.h>


int main(){
	int numero;
	printf("Digite un numero : ");
	scanf("%i",&numero);
	int i,total=0;
	for(i=1;i<=numero;i++){
		printf("%i + ",factorial(i));
		
		total = total + factorial(i) ;
	}

	printf("= %i",total);
	
	
	
	
	return 0;
}

int factorial(int numero){
	if(numero==1){
		return 1;
	}else{
		return factorial(numero-1)*numero;
	}
}
