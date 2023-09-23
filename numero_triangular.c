#include <stdio.h>


int main(){
	int limite,total=0,numero_triangular=0;
	printf("Digite un limite : ");
	scanf("%i",&limite);
	int i; 
	for(i=1;i<=limite;i++){
		if(i==1){
			numero_triangular = i*(i-1);
			total = total +numero_triangular;
		}else{
			numero_triangular = (i*(i-1))/2;
			printf(" %i + ",numero_triangular);
			total = total +numero_triangular;
		}	
	}
	printf(" = %i",total);
	
	
	
	return 0;
}
