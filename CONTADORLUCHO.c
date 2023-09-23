#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum mesesAnio {
  Enero = 1, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre,  
};
int main () {
    int anioEspecifico, limite;
    float totalVentasMensuales, mesVentaMaximo, mesVentaMinimo, ventasMensuales;
    float proyeccionPromedioAnio, promedioVentasAnio, totalVentasAnio, auxMensualMaximo, auxMensualMinimo;
    enum mesesAnio mes;
    char cancelar;
    char auxMesMaximo;
    char mesMaximo;
    const char *nombreMes [] = {"", "ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO",
        "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};
    do {
        system ("@cls || clear");
        bool minimo = false;
        limite = 12;
        totalVentasAnio = 0.00;
        auxMensualMinimo = 0.00;
        auxMensualMaximo = 0.00;
        printf ("Ingrese el anio especifico que desea realizar el informe de ventas\n");
        scanf ("%i", &anioEspecifico);
        for (mes = Enero; mes <= Diciembre; mes++) {
            printf ("Ingrese el valor total del mes de %s\n$", nombreMes[mes]);
            scanf ("%f", &ventasMensuales);
            totalVentasAnio = totalVentasAnio + ventasMensuales;
            if (minimo == false){
                auxMensualMinimo = ventasMensuales;
                mesVentaMinimo = auxMensualMinimo;
                minimo = true;
            }
            if (ventasMensuales >= auxMensualMaximo) {
                auxMensualMaximo = ventasMensuales;
                mesVentaMaximo = auxMensualMaximo;
                minimo = true;
            } else {
                minimo = false;
            }
            if (minimo == false ){
                if (ventasMensuales >= auxMensualMinimo) {
                    mesVentaMinimo = auxMensualMinimo;
                } else {
                    auxMensualMinimo = ventasMensuales;
                    mesVentaMinimo = auxMensualMinimo;
                    minimo = true;
                }
            }
        }
        
        printf ("El anio del informe es: %i\n", anioEspecifico);
        printf ("El total de ventas alcanzados en el anio es: $%.2f\n", totalVentasAnio);
        promedioVentasAnio = totalVentasAnio / limite;
        printf ("El promedio de ventas alcanzado en el anio es: $%.2f\n", promedioVentasAnio);
        printf ("El mes con la venta total mayor durante el anio es .......... con un total de: $%.2f\n", mesVentaMaximo);
        printf ("El mes con la venta total menor durante el anio es .......... con un total de: $%.2f\n", mesVentaMinimo);
        proyeccionPromedioAnio = (totalVentasAnio * 0.1) + totalVentasAnio;
        printf ("La proyeccion de la venta total para el proximo anio es: $%.2f\n", proyeccionPromedioAnio);
        printf ("Presione (C) para cancelar la ejecucion del programa, o cualquier otra tecla para continuar\n");
        printf ("Que desea realizar?\n");
        getchar ();
        scanf ("%c", &cancelar);
    } while (cancelar != 'C' && cancelar != 'c');
    return 0;
}
