/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int cont;
	float i;
	int num;
	printf("Ingrese el numero que desee encontrar el denominador\n");
	scanf("%i",&num);
	for (i=1;i<=num;i+=1) {
		if (num%i==0) {
			printf(" Sus divisores son  %f\n",i);
			cont = cont+1;
		}
	}
	printf(" Tiene %i  divisores\n",cont);
	return 0;
}

