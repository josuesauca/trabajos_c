/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float altura,area,base_menor,base_mayor;
	system("@cls||clear");
	printf("Ingrese la base mayor\n");
	scanf("%f",&base_mayor);
	printf("Ingrese la base menor\n");
	scanf("%f",&base_menor);
	printf("Ingrese la altura \n");
	scanf("%f",&altura);
	area = altura*(base_mayor+base_menor)/2;
	printf("El area del trapecio es %f\n",area);
	return 0;
}

