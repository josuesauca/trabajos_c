/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* ALGORITMO PARA ENCONTRAR EL MAXIMO COMUN DIVISOR  */
/* NOMBRE:JOSUE ALEJANDRO SAUCA PUCHA  */
/* FECHA: 29 DE DICIEMBRE DEL 2019  */
int main() {
	float number1;
	float number2;
	printf("|-------------------------------------------------|\n");
	printf("|------------Ingresar el numero  1----------------|\n");
	scanf("%f",&number1);
	printf("|-------------------------------------------------|\n");
	printf("|------------Ingresar el numero  2----------------|\n");
	scanf("%f",&number2);
	while (number1>number2) {
		if (number1!=number2) {
			number1 = number1-number2;
		} else {
			number2 = number2-number1;
		}
	}
	printf("|-------------------------------------------------|\n");
	printf(" Su resultado es :%f\n",number1);
	printf("|-------------------------------------------------|\n");
	printf("|-Este algoritmo esta hecho por : JOSUE SAUCA-----|\n");
	printf("|-FECHA DE ELABORACIÓN : 23 DE DICIEMBRE DEL 2019-|\n");
	return 0;
}

