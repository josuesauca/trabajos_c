#include <stdio.h>

float potencia(int c);
float generar_primo(int i);
float factorial(float primo);

int main(){
	int limite;
	int serie_fibo;
	int i;
	int a = 0;
	int b=1;
	int c =0;
	float potencia_1 = 1;
	float primo=1;
	float facto = 1;
	float total = 0;
	printf("Ingrese un limite :");
	scanf("%i",&limite);	
	
	
	for(i=1;i<=limite;i++){			
		c= a+b;
		potencia_1 = potencia(c);
		primo = generar_primo(i);
		facto = factorial (primo);		
		total = total + (facto/potencia_1);
		printf("%.0f!/%i^%i + ",primo,c,i);		
		a=b;
		b=c;		
	}
	printf("\nS = %.3f",total);
	
	return 0;
}

float potencia(int c){
	float total = 1;
	int i;
	
	for(i=1;i<=c;i++){
		total = total*c;
	}
	
	return total;	
	
}


float generar_primo(int i){
	int es_primo=0;
	int numero = 2;
	int j;
	
	while(i>0){
		es_primo = 1;
		for(j=2;j<numero;j++){
			if(numero%j==0){
				es_primo=0;
			}
		}
		if(es_primo==1){
			i--;
				
		}		
		numero++;
		
	
	}
	return j;

}


float factorial(float primo){
	int i;
	float total =i ; 
	
	while(i<=primo){
		total = total *i;	
		i++;
	}
	return total;
}

