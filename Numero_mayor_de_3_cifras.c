/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int num_1;
	int num_2;
	int num_3;
	printf("Ingrese el primer numero : ");
	scanf("%i",&num_1);
	printf("Ingrese el segundo numero : ");
	scanf("%i",&num_2);
	printf("Ingrese el numero tres : ");
	scanf("%i",&num_3);
	if (num_1>num_2 && num_1>num_3) {
		printf("El numero %i es el mayor\n",num_1);
	} else {
		if (num_2>num_1 && num_2>num_3) {
			printf("El numero %i es el mayor\n",num_2);
		} else {
			if (num_3>num_2 && num_1<num_3) {
				printf("El numero %i es el mayor\n",num_3);
			}
		}
	}
	return 0;
}

