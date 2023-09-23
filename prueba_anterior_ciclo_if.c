#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL,"spanish");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    int edad;
    float costoLentes, costoEdad, costoHabito ,costoEnfermedad, costoTotalPoliza;
    char poliza, habito, lentes, enfermedad;
    float costoBasePoliza;
    system("@cls||clear");
    printf("Elija el tipo de poliza:(A)cobertura amplia, o (B)Daños a terceros :");
    scanf(" %c",&poliza);
    if (poliza  != 'A'&& poliza  != 'a' && poliza != 'b' && poliza != 'B' ){
		printf ("\nEsta poliza no existe");
	}
    if( poliza  == 'A'||poliza  == 'a') {
		costoBasePoliza = 1200;
		printf ("Tiene por hábito beber alcohol (V o F): ");
		scanf (" %c",&habito);
		printf ("Utiliza lentes (V o F) ");
		scanf (" %c",&lentes);
		printf ("Padece alguna enfermedad como:deficiencia cardiaca o diabetes(V o F) :");
		scanf (" %c",&enfermedad);
		printf ("Edad que posee: ");
		scanf("%i",&edad);
			if (habito == 'V' ||habito == 'v') {
				costoHabito = costoBasePoliza * 0.1;				
			}
			
			if (lentes == 'V'||lentes == 'v') {
				costoLentes = costoBasePoliza * 0.05;
            }
			if (enfermedad == 'V'|| enfermedad == 'v') {
				costoEnfermedad  = costoBasePoliza * 0.05;
            }
			
			if (edad>=40) {
				costoEdad = costoBasePoliza * 0.2;
			}else{
				costoEdad = costoBasePoliza * 0.1;
            }	
			costoTotalPoliza = costoBasePoliza + costoLentes + costoEdad + costoHabito + costoEnfermedad ;		
			printf("Su valor Total es : $ %.2f",costoTotalPoliza);
	}
    if( poliza  == 'b'|| poliza == 'B') {
		costoBasePoliza = 950;
		printf ("Tiene por hábito beber alcohol (V o F): ");
		scanf (" %c",&habito);
		printf ("Utiliza lentes (V o F) ");
		scanf (" %c",&lentes);
		printf ("Padece alguna enfermedad como:deficiencia cardiaca o diabetes(V o F) :");
		scanf (" %c",&enfermedad);
		printf ("Edad que posee: ");
		scanf("%i",&edad);
			if (habito == 'V' ||habito == 'v') {
				costoHabito = costoBasePoliza * 0.1;				
			}
			
			if (lentes == 'V'||lentes == 'v') {
				costoLentes = costoBasePoliza * 0.05;
            }
			if (enfermedad == 'V'|| enfermedad == 'v') {
				costoEnfermedad  = costoBasePoliza * 0.05;
            }
			
			if (edad>=40) {
				costoEdad = costoBasePoliza * 0.2;
			}else{
				costoEdad = costoBasePoliza * 0.1;
            }	
			costoTotalPoliza = costoBasePoliza + costoLentes + costoEdad + costoHabito + costoEnfermedad ;		
			printf("Su valor Total es : $ %.2f",costoTotalPoliza);
	}

    return 0;
}
