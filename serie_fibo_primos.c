#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float num_primo(int i);
float potencia_del_indice(float potencia);

int main(){
	system("@cls||clear");
	int a = 1,b=0;	
	int limite;
	int i;
	float primo = 1;
	float potencia = 1,total_potencia= 1; 	
	float Total_1 = 0,Total_2=0;
	float pow_pares=0,pow_impares = 0;	
	float pot_1 = 0,pot_2=0,suma_fibo=0;
	float S = 0, S_1 = 0,S_2=0;
	
	
	printf("\nIngrese un limite : ");
	scanf("%i",&limite);	
	printf("S = ");		
	for(i=1;i<=limite;i++){		
		suma_fibo=a+b;
		primo = num_primo(i);
		potencia = suma_fibo + primo;				
		
		if(i%2==0){
			
		
			
			Total_1  =  (suma_fibo/primo);
			pow_pares= pow(Total_1,potencia);		
			
			printf(" %.2f %.2f  %.2f  %.2f %.2f \n ",Total_1,suma_fibo,primo,pow_pares,potencia);
			
			//printf(" +(%.0f/%.0f)^%.0f = %.14f \n",suma_fibo,primo,potencia,pow_pares);	
			S_1 = S_1 +pow_pares;		
				
		}else{
			Total_2  =  (primo/suma_fibo);		
			pow_impares= pow(Total_2,potencia);
			
			//printf(" +(%.0f/%.0f)^%.0f = %.2f \n",primo,suma_fibo,potencia,pow_impares);	
			S_2 = S_2 +pow_impares;	
		}
		
		a = b;
		b = suma_fibo;
		primo = 0;
		potencia = 0;	
		
	}	
	S = S_1+S_2;
	printf("\nS = %.13f",S);
	return 0;
	
}
	
	
float num_primo(int i){
	int esprimo = 0;
	int numero=2;
	int j;
	while(i>0){
		esprimo=1;
		for(j=2;j<numero;j++){
			if(numero%j==0){
				esprimo=0; 
			}
		}
		if(esprimo==1){
			if(j>=3){
				i--;				
			}			
		}
		numero++;		
	}
	return j;	
}

float potencia_del_indice(float potencia){
	int j;
	float total = 1;
	for(j=1;j<=potencia;j++){		
		total = total * potencia;
	}
	
	return total;	
}
