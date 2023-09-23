/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

int main() {
	float area;
	float numero_pi;
	float perimetro;
	float radio;
	numero_pi = 3.1416;
	printf("Ingrese su radio\n");
	scanf("%f",&radio);
	area = numero_pi*(pow(radio,2));
	perimetro = 2*numero_pi*radio;
	printf("Su area es %f\n",area);
	printf("Su perimetro es %f\n",perimetro);
	return 0;
}

