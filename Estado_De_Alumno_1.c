/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tama�o del arreglo determina la longitud
   m�xima que puede tener la cadena que guarda (tama�o-1, por el caracter de terminaci�n).
   La constante MAX_STRLEN define el tama�o m�ximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

int main() {
	float aprendizaje_autonomo;
	char estado_alumno;
	float lecciones;
	float participacion_clase;
	float promedio_examenes;
	float promedio_lecciones_participaciones;
	float promedio_total;
	float promedio_trabajos_clase_extraclase;
	float trabajos_clase;
	float trabajos_extraclase;
	printf("Ingrese la nota de Trabajos en Clase ");
	scanf("%f",&trabajos_clase);
	printf("Ingrese la nota de Trabajos en Extraclase ");
	scanf("%f",&trabajos_extraclase);
	printf("Ingrese la nota de Lecciones ");
	scanf("%f",&lecciones);
	printf("Ingrese la nota de Participaci�n en Clase ");
	scanf("%f",&participacion_clase);
	printf("Ingrese la nota de Trabajos Autonomo ");
	scanf("%f",&aprendizaje_autonomo);
	printf("Ingrese la nota de Promedio de Evaluaciones ");
	scanf("%f",&promedio_examenes);
	trabajos_clase = (trabajos_clase/10)/2;
	trabajos_extraclase = (trabajos_extraclase/10)/2;
	promedio_trabajos_clase_extraclase = trabajos_clase+trabajos_extraclase;
	lecciones = (lecciones/10)/2;
	participacion_clase = (participacion_clase/10)/2;
	promedio_lecciones_participaciones = lecciones+participacion_clase;
	aprendizaje_autonomo = aprendizaje_autonomo/10;
	promedio_examenes = (promedio_examenes*7)/10;
	promedio_total = promedio_trabajos_clase_extraclase+promedio_lecciones_participaciones+aprendizaje_autonomo+promedio_examenes;
	if (promedio_total>=7) {
		estado_alumno = 'A';
	} else {
		if (promedio_total>=2.40 && promedio_total<=6.99) {
			estado_alumno = 'B';
		} else {
			if (promedio_total>=0.0 && promedio_total<=2.39) {
				estado_alumno = 'C';
			}
		}
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("==========================================================================\n");
	printf("==========================================================================\n");
	printf("|Su promedio de Trabajos en Clase es :%f\n",trabajos_clase);
	printf("|Su promedio de Trabajos en Extraclase es :%f\n",trabajos_extraclase);
	printf("==========================================================================\n");
	printf("|Su promedio de Trabajos en Clase y Extraclase es :%f\n",promedio_trabajos_clase_extraclase);
	printf("==========================================================================\n");
	printf("|Su promedio de Lecciones es :%f\n",lecciones);
	printf("|Su promedio de Participacion en Clase es  :%f\n",participacion_clase);
	printf("==========================================================================\n");
	printf("|Su promedio de Lecciones y Participaci�n en Clase es :%f\n",promedio_lecciones_participaciones);
	printf("==========================================================================\n");
	printf("|Su promedio de Aprendizaje Aut�nomo es  :%f\n",aprendizaje_autonomo);
	printf("==========================================================================\n");
	printf("|Su promedio de los Examenes es :%f\n",promedio_examenes);
	printf("==========================================================================\n");
	printf("==========================================================================\n");
	printf("|Su promedio Total es :%f\n",promedio_total);
	switch (estado_alumno) {
	case 'A':
		printf("==========================================================================\n");
		printf("Usted esta Aprobado\n");
		printf("==========================================================================\n");
		break;
	case 'B':
		printf("==========================================================================\n");
		printf("Usted esta en Suspenso\n");
		printf("==========================================================================\n");
		break;
	case 'C':
		printf("==========================================================================\n");
		printf("Usted esta Reprobado\n");
		printf("==========================================================================\n");
		break;
	}
	return 0;
}

