// Hecho por Josue Sauca
// 13/1/2020
// Carrera de Computación 
#include <stdio.h>
#include <math.h>

int main (){
	float contador=0,constante = 1,incremento=2,multiplicacion,sumadorsumas=0,sumadorestas=0,totalsuma,totaldenominadormas;
	int numeroTerminos=1,limite,numerosPares,numerosImpares,totaldenominador=1;
    char continuar;
		//do{
			printf("INGRESE UN LIMITE : ");
			scanf("%i",&limite);
	        	do{
	        	    	numeroTerminos = numeroTerminos + contador;
	        			if (numeroTerminos%2==0){
	        			numerosPares = numeroTerminos;	        			
	        			multiplicacion =  pow(numerosPares,2);
	        			
	        			printf ("-%i^2/%i",numerosPares,totaldenominador);		
	        			
	        			totaldenominadormas = multiplicacion/totaldenominador;
	        			
	        			printf (" = -%.5f\n ",totaldenominadormas);	
	        			sumadorestas = sumadorestas + totaldenominadormas;
	        			
	        			}else{
	        				
	        			numerosImpares = numeroTerminos;
	        			
	        			multiplicacion =  pow(numerosImpares,2);
	        			
	        			printf (" +%i^2/%i",numerosImpares,totaldenominador);
	        			
	        			totaldenominadormas = multiplicacion/totaldenominador;
	        			
	        			printf (" = %.5f\n ",totaldenominadormas);
	        			
	        			sumadorsumas = sumadorsumas + totaldenominadormas;
	        				
	        			}	
	        		//denominador
	        		totaldenominador = totaldenominador+incremento;
	        		 incremento = incremento++;
	        		//fin del proceso del proceso nominador
	        		numeroTerminos = numeroTerminos +constante;	
	        		contador=0;	 			             			
	        	}while(numeroTerminos<=limite);
	        		totalsuma = sumadorsumas-sumadorestas;
					/*printf ("\nS= %.5f\n",totalsuma);
					printf("(C) para cancelar la ejecución, cualquier tecla para continuar.. Que acción desea realizar?\n");
			        	scanf("%c", &continuar);
		        		getchar();     
     	}while(continuar != 'C' && continuar != 'c');*/
	return 0;
}

