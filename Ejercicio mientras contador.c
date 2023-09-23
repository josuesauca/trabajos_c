/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Marvin Achupallas,Juan Armijos,Luis Jumbo,Josue Sauca. */
/* Año Cursante: Primer Ciclo ¨Ä¨ */
/* Fecha: 12-Enero-2020 */
int main() {
	float i;
	int limite;
	int num;
	int valortotal;
	printf("INGRESE LA TABLA DE MULTIPLICAR QUE DESEA \n");
	scanf("%i",&num);
	printf("INGRESE UN LIMITE PARA SU TABLA\n");
	scanf("%i",&limite);
	i = 1;
	while (i<=limite) {
		valortotal = num*i;
		printf("%iX%f=%i\n",num,i,valortotal);
		i = i+1;
	}
	return 0;
}

