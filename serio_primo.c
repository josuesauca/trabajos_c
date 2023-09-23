#include <stdio.h>


int main(){
	int limite,total=0,numero_primo=0;
	printf("Digite un limite : ");
	scanf("%i",&limite);
	int i; 
	for(i=1;i<=limite;i++){
		if(i%1==0 && i%i==0){
			printf(" %i + ",numero_primo);
			total = total +numero_primo;
		}	
	}
	printf(" = %i",total);
	
	
	
	
	return 0;
}
