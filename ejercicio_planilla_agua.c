#include <stdio.h>

/*60 años tercera edad*/ 

int main(){
	int edad,discapacidad,impuesto_alcantarilla = 0.40,recoleccion_basura = 0.50,tasa_procesamiento_de_datos = 0.20;
	float consumo_agua,total_a_pagar = 0;
	printf("Ingrese el valor por m³ de agua : ");
	scanf("%f",&consumo_agua);
	printf("Ingrese su edad : ");
	scanf("%i",&edad);
	printf("Tiene alguna discapacidad pulse (1) si es asi, sino pulse (0) : ");
	scanf("%i",&discapacidad);
	
	if (consumo_agua >= 0 && consumo_agua <= 15 ){
		total_a_pagar  = consumo_agua * 2.00;
					
	}else{
			 
		if(consumo_agua >=15 && consumo_agua <= 25){
			total_a_pagar  = consumo_agua* 2.05;
			
		}else{
			
			if(consumo_agua >= 25 && consumo_agua <=40){
				total_a_pagar  = consumo_agua* 2.15;
				
			}else{				
					
				if(consumo_agua >= 40 && consumo_agua <=60){
					total_a_pagar  = consumo_agua* 2.25;
					
				}else{
					
					if(consumo_agua >=60){
						total_a_pagar  = consumo_agua* 2.60;					
					}
				}		
			}	
		}		
	}

	printf("Usted debe pagar : %.2f",total_a_pagar);
	
	return 0;
}
