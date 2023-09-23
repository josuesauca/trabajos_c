#include <stdio.h>
#include <math.h>

int main(){
	int n,total,j=1;
	printf("Ingrese un limite : ");
	scanf("%i",&n);
	
	int i ;
	printf("S = ");
	for(i=1;i<=n;i++){
		printf(" + %i^2",i);
		j = j *2;
		total = total +j;
		j++;
	}
	printf("\nS = %i ",total);
	
	
	
	return 0;
}
