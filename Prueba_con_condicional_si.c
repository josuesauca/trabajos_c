/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tama�o del arreglo determina la longitud
   m�xima que puede tener la cadena que guarda (tama�o-1, por el caracter de terminaci�n).
   La constante MAX_STRLEN define el tama�o m�ximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se ley�
   otra variable con scanf. */

int main() {
	int edad_usuario;
	char poliza[MAX_STRLEN];
	int poliza_a;
	int poliza_alcohol;
	int poliza_alcohol_b;
	int poliza_b;
	int poliza_edad;
	int poliza_edad_b;
	int poliza_elejida;
	int poliza_enfermedad;
	int poliza_enfermedad_b;
	int poliza_lentes;
	int poliza_lentes_b;
	int poliza_total;
	char problema_alcohol[MAX_STRLEN];
	char problema_enfermedad[MAX_STRLEN];
	char problema_lentes[MAX_STRLEN];
	char volver_al_ciclo[MAX_STRLEN];
	poliza_a = 1200;
	poliza_b = 950;
	do {
		system("@cls||clear");
		printf("Elija el tipo de poliza: (A) cobertura amplia, o (B) Da�os a terceros : ");
		scanf("%s",poliza);
		if (strcmp(poliza,"a")!=0 && strcmp(poliza,"A")!=0 && strcmp(poliza,"b")!=0 && strcmp(poliza,"B")!=0) {
			printf(" NO EXISTE ESE PLAN \n");
		}
		if (strcmp(poliza,"a")==0 || strcmp(poliza,"A")==0) {
			printf("Tiene por h�bito beber alcohol(V o F) : ");
			scanf("%s",problema_alcohol);
			printf("Utiliza lentes (V o F) : ");
			scanf("%s",problema_lentes);
			printf("Padece alguna enfermedad como: deficiencia cardiaca o diabetes (V o F) : ");
			scanf("%s",problema_enfermedad);
			printf("Ingrese la edad que posee ");
			scanf("%i",&edad_usuario);
			if (strcmp(problema_alcohol,"v")==0 || strcmp(problema_alcohol,"V")==0) {
				poliza_alcohol = poliza_a*0.10;
			}
			if (strcmp(problema_lentes,"v")==0 || strcmp(problema_lentes,"V")==0) {
				poliza_lentes = poliza_a*0.05;
			}
			if (strcmp(problema_enfermedad,"v")==0 || strcmp(problema_enfermedad,"V")==0) {
				poliza_enfermedad = poliza_a*0.05;
			}
			if (edad_usuario>=40) {
				poliza_edad = poliza_a*0.20;
			} else {
				poliza_edad = poliza_a*0.10;
			}
			poliza_elejida = poliza_a;
			poliza_total = poliza_elejida+poliza_alcohol+poliza_lentes+poliza_enfermedad+poliza_edad;
			printf("Su costo total de la poliza ser� de : %i\n",poliza_total);
		}
		if (strcmp(poliza,"b")==0 || strcmp(poliza,"B")==0) {
			printf("Tiene por h�bito beber alcohol(V o F) : ");
			scanf("%s",problema_alcohol);
			printf("Utiliza lentes (V o F) : ");
			scanf("%s",problema_lentes);
			printf("Padece alguna enfermedad como: deficiencia cardiaca o diabetes (V o F) : ");
			scanf("%s",problema_enfermedad);
			printf("Ingrese la edad que posee ");
			scanf("%i",&edad_usuario);
			if (strcmp(problema_alcohol,"v")==0 || strcmp(problema_alcohol,"V")==0) {
				poliza_alcohol_b = poliza_b*0.10;
			}
			if (strcmp(problema_lentes,"v")==0 || strcmp(problema_lentes,"V")==0) {
				poliza_lentes_b = poliza_b*0.05;
			}
			/* No lee el v */
			if (strcmp(problema_enfermedad,"v")==0 || strcmp(problema_enfermedad,"V")==0) {
				poliza_enfermedad_b = poliza_b*0.05;
			}
			/* Hasta aqui */
			if (edad_usuario>=40) {
				poliza_edad_b = poliza_b*0.20;
			} else {
				poliza_edad_b = poliza_b*0.10;
			}
			poliza_elejida = poliza_b;
			poliza_total = poliza_elejida+poliza_alcohol_b+poliza_lentes_b+poliza_enfermedad_b+poliza_edad_b;
			printf("Su costo total de la poliza ser� de : %i\n",poliza_total);
		}
		printf("Desea continar Si(1) o No(2) \n");
		scanf("%s",volver_al_ciclo);
	} while (volver_al_ciclo == '2');
	return 0;
}

