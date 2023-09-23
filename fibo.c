#include <stdio.h>
#include <stdlib.h>

int main(){
	system("@cls||clear");
	int a,b,fibo,limite,j;
	double suma,factorial;
	char continuar;
	do{
			
				printf ("INGRESE EL LIMITE DE LA SERIE : \n");
				scanf ("%i",&limite);
				a=0;
				b=1;
				fibo=1;
				suma=0;
				j=1;
				printf("S= ");
	while(j<=limite)
	{
				
				
					printf("\t+ %d !",fibo);
		            //CALCULAR FACTORIAL
		            factorial = 1;
		            for (int i = 2 ;i <= fibo; i++)
					{
		            	factorial = factorial*i; 	
		            	     	
		            	           	
		            }
					
					suma = suma+factorial;		
					
					a =fibo;
					fibo = a+b;
					b=a;
					j= j+1;		
				
	}
				
	
				printf("\nS= %.olf\n",suma);
				printf("PRESIONE (C) para salir, o cualquier letra para continuar..");
				scanf("%c",&continuar);
			
			
			
			
			
			
			
			
			
	}while (continuar !='c' && continuar !='C');
 

	return 0;
}






	

