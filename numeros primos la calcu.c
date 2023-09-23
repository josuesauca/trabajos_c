/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	float cont;
	int i;
	int num;
	cont = 0;
	printf("<<<BIENVENIDO A LA CALCU>>>\n");
	printf("ingrese un numero\n");
	scanf("%i",&num);
	for (i=2;i<=num-1;i+=1) {
		if (num%i==0) {
			cont = cont+1;
		}
	}
	if (cont>0) {
		printf("el numero no es primo\n");
	} else {
		printf("el numero es primo\n");
	}
	printf("GRACIAS POR USAR ESTE PROGRAMA\n");
	printf("POR ANTONIO CARTUCHE\n");
	printf("1er ciclo paraleo B\n");
	printf("Lunes 17 de junio de 2019\n");
	return 0;
}

