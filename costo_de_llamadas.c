#include <stdio.h>
#include <stdlib.h>

enum Clave {
	AMERICA_DEL_NORTE = 12,
	AMERICA_CENTRAL = 15,
	AMERICA_DEL_SUR = 18,
	EUROPA = 19,
	ASIA = 23,
	AFRICA = 25,
	OCEANIA = 29,
	OTROS = 31
	
}clave_1;



int main(){
	int Minutos,Clave;
	float Total_Minutos = 0;
	system("@cls||clear");
	printf("Ingrese sus minutos hablados : ");
	scanf("%i",&Minutos);
	printf("Digite la Clave del Pais : ");
	scanf("%i",&Clave);
	clave_1 = Clave;
	switch(clave_1){
		case AMERICA_DEL_NORTE : 
			Total_Minutos = Minutos *2.1;		
		break;
		
		case AMERICA_CENTRAL: 
			Total_Minutos = Minutos *1.9;			
		break;
		
		case AMERICA_DEL_SUR :
			Total_Minutos = Minutos *1.5;
		break;
		
		case EUROPA :
			Total_Minutos = Minutos *3;
		break;
		
		case ASIA :
			Total_Minutos = Minutos *3.5;
		break;
		
		case AFRICA :
			Total_Minutos = Minutos *3.3;
		break;
		
		case OCEANIA :
			Total_Minutos = Minutos *3.8;
		break;
		
		
		case OTROS :
			Total_Minutos = Minutos *3.8;
		break;	
	}
	
	printf("\nSus minutos consumidos : %i ",Minutos);
	printf("\nSu Total a Pagar es : %.2f ",Total_Minutos);	
	
	return 0;
}
