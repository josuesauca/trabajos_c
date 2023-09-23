#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int main () {
int a, n, Denominador, exponente;
double fact, sumaTotal;
bool inicio = true;
char cancelar;
    do {
    printf ("Ingrese el valor de la funcion exponencial\n");
    scanf ("%i", &a);
    printf ("Ingrese el valor de precision\n");
    scanf ("%i", &n);
    inicio = true;
    Denominador = 1;
    sumaTotal = 0;
    exponente = 1;
    if (inicio == true) {
    printf ("e^%i = 1 +", a);
    inicio = false;
    }
    while (Denominador <= n) {
    for (fact = 1; fact <= Denominador; fact++) {
    fact = fact * Denominador;
    }
    printf (" ((%i^%i)/%i!) +", a, exponente, Denominador);
    sumaTotal = sumaTotal + (pow (a, exponente) / fact);
    exponente = exponente + 1;
    Denominador = Denominador + 1;
    }
    sumaTotal = sumaTotal + 1;
    printf ("\ne^%i = %lf\n", a, sumaTotal);
    printf ("Presione (C) para cancelar la ejecucion, y cualquier otra tecla para cancelar con el programa\n");
    getchar ();
    scanf ("%c", &cancelar);
    } while (cancelar != 'C' && cancelar != 'c');
return 0;
}