/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	int anio;
	char volver_al_ciclo[MAX_STRLEN];
	do {
		printf("Ingrese el año a verifica\n");
		scanf("%i",&anio);
		if ((anio%4==0) && (anio%100!=0) || (anio%400==0)) {
			printf("Su año es bisiesto\n");
		} else {
			printf("Su año no es bisiesto\n");
		}
		printf("Desea volver a ingresar otro año,pulse cualquier letra para continuar o F para terminar\n");
		scanf("%s",volver_al_ciclo);
	} while (!(strcmp(volver_al_ciclo,"f")==0 || strcmp(volver_al_ciclo,"F")==0));
	return 0;
}

