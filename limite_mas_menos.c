#include <stdio.h>
#include <math.h>

int main(){
	int limite;
	int i;
	printf("Ingrese ub limite : ");
	scanf("%i",&limite);
	
	
	for(i=1;i<=limite;i++){
	
	if(i%2==0){
		
		
		printf("+%i",i);
		
		
	}else{
		printf("-%i",i);
	}
		
	
	
	}
	
	
	
	
	
	
	
	
	return 0;
}
