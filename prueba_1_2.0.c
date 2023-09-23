
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int padece_enfermedad, tipo_de_poliza, toma_alcohol, utiliza_lentes;
    float cargos, costo_de_la_poliza, cuota, edad;
    printf ("Ingrese el valor de edad: ");
    scanf ("%f", &edad);
    (void) getchar ();
    printf ("Seleccione el valor de tipo de poliza.\n");
    printf ("\t1.- A cobertura amplia\n");
    printf ("\t2.- B da\244os a terceros\n");
    printf ("\t: ");
    do {
        scanf ("%d", &tipo_de_poliza);
        (void) getchar ();
        if (tipo_de_poliza<1||tipo_de_poliza>2)
            printf ("Valor incorrecto. Ingr\202selo nuevamente.: ");
    } while (tipo_de_poliza<1||tipo_de_poliza>2);
    printf ("Seleccione el valor de toma alcohol.\n");
    printf ("\t1.- si\n");
    printf ("\t2.- no\n");
    printf ("\t: ");
    do {
        scanf ("%d", &toma_alcohol);
        (void) getchar ();
        if (toma_alcohol<1||toma_alcohol>2)
            printf ("Valor incorrecto. Ingr\202selo nuevamente.: ");
    } while (toma_alcohol<1||toma_alcohol>2);
    printf ("Seleccione el valor de utiliza lentes.\n");
    printf ("\t1.- si\n");
    printf ("\t2.- no\n");
    printf ("\t: ");
    do {
        scanf ("%d", &utiliza_lentes);
        (void) getchar ();
        if (utiliza_lentes<1||utiliza_lentes>2)
            printf ("Valor incorrecto. Ingr\202selo nuevamente.: ");
    } while (utiliza_lentes<1||utiliza_lentes>2);
    printf ("Seleccione el valor de padece enfermedad.\n");
    printf ("\t1.- si\n");
    printf ("\t2.- no\n");
    printf ("\t: ");
    do {
        scanf ("%d", &padece_enfermedad);
        (void) getchar ();
        if (padece_enfermedad<1||padece_enfermedad>2)
            printf ("Valor incorrecto. Ingr\202selo nuevamente.: ");
    } while (padece_enfermedad<1||padece_enfermedad>2);
    cuota=tipo_de_poliza==1?1200:950;
    cargos=0;
    if(toma_alcohol==1)
        cargos=cargos+cuota*0.1;
    if(utiliza_lentes==1)
        cargos=cargos+cuota*0.05;
    if(padece_enfermedad==1)
        cargos=cargos+cuota*0.05;
    if(edad>40)
        cargos=cargos+cuota*0.2;
    else
        cargos=cargos+cuota*0.1;
    costo_de_la_poliza=cuota+cargos;
    printf ("Valor de cargos: %g\n", cargos);
    printf ("Valor de costo de la poliza: %g\n", costo_de_la_poliza);
    printf ("Valor de cuota: %g\n", cuota);
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}
