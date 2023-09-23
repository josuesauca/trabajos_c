#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
	system("@cls||clear");
	int limite;
	int suma ,a,b;
	suma = 1;
	a = 1;
	b= 0;	
	int inc_2,inc_6;
	inc_2 = 1;
	inc_6 = 3;
	float pot;
	pot = 1;
	bool signo;
	signo = true;
	float total_fac = 0;
	int signo_termino = 1,cont_sig= 0;
	printf("Ingrese un limite : ");
	scanf("%i",&limite);
	int i;
	printf("S = ");
	for(i=1;i<=limite;i++){
		
		suma = a+b;
		
		if(signo_termino>0){
			printf(" + ");			
		}else{
			printf(" - ");
		}
		/*
		if(i%3==0){
			signo = false;
		}else{
			signo= true;
		}
		
		
		
		if(signo==false){
			printf("-(%i/%i)^%i ",inc_2,inc_6,suma);	
			pot = pow(inc_2/inc_6,suma);
			
		}else{
			printf("+(%i/%i)^%i ",inc_2,inc_6,suma);	
			pot = pow(inc_2/inc_6,suma);
		}
		*/
		a=b;
		b=suma;
		inc_2+=2;
		inc_6+=6;		
		
		cont_sig++;
		
		
				
		
		
	}

	
	return 0;
}


