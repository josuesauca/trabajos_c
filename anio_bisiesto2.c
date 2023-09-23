#include <stdio.h>
#include <stdlib.h>

int main(){
	int anio;
	float mod;
	system("@cls||clear");
	printf("Ingrese un anio : ");
	scanf("%i",&anio);
	/*mod = anio%400;
	printf("\nResiduo %f \n",mod);*/
	if( ( ( (anio%4)==0) && ((anio%100)!=0) ) || ( (anio%400)==0) ) {
		printf("\nEl anio es bisiesto");	
	}else{
		printf("\nEl anio no es bisiesto");
	}
	return 0;
}
