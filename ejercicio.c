#include <stdio.h>
#include <stdlib.h>

enum semana_laboral {LUNES=1, MARTES=2, MIERCOLES=3, JUEVES=4, VIERNES=5};
int main(){

    int dia = 1;
    scanf("%d",&dia);
    for (int i = LUNES; i <= VIERNES; i++){
        printf ("El d%ca de la semana es: %d\n",161, i);
        if ((i % 2) != 0){
            printf ("Hoy es un gran d%ca para Teor%ca de la Programaci%cn\n",161,161,162);
        }
        if (dia == i){
            break;
        }
    }
    return 0;

}


