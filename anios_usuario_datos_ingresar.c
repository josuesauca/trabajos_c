#include <stdio.h>
#include <stdlib.h>
int main(){
    int anio_nacimiento,mes_nacimiento,dia_nacimiento;
    int anio_persona,mes_persona,dias_persona;
    int Anio_actual, Mes_actual,Dia_actual;
    system("@cls||clear");
    printf("==================================Bienvenido=============================");
    printf("\nPrograma para calcular la edad a partir de una fecha ingresada");
    printf("\n=======================================================================\n");
    printf("Ingrese el A%co de su nacimiento : ",164);
    scanf("%i",&anio_nacimiento);
    printf("Ingrese el Mes de su Nacimiento : ");
    scanf("%i",&mes_nacimiento);
    printf("Ingrese el D%ca de su Nacimiento : ",161);
    scanf("%i",&dia_nacimiento);
     printf("Ingrese el A%co Actual : ",164);
    scanf("%i",&Anio_actual);
    printf("Ingrese el Mes Actual : ");
    scanf("%i",&Mes_actual);
    printf("Ingrese el D%ca Actual : ",161);
    scanf("%i",&Dia_actual);

    if ((Anio_actual>=anio_nacimiento)&&(Mes_actual>=mes_nacimiento)&&(Dia_actual>=dia_nacimiento)) {
        anio_persona = (Anio_actual - anio_nacimiento);
        mes_persona = (Mes_actual - mes_nacimiento);
        dias_persona = (Dia_actual- dia_nacimiento);
    }else{
        if((mes_nacimiento>Mes_actual)&&(dia_nacimiento>Dia_actual)||(dia_nacimiento>Dia_actual)){
            anio_persona = (Anio_actual - (anio_nacimiento+1));
            mes_persona = ((Mes_actual - (mes_nacimiento+1))+12);
            dias_persona = ((Dia_actual- dia_nacimiento)+30);	
        }else{
            if((mes_nacimiento>Mes_actual)) {
                anio_persona = (Anio_actual - (anio_nacimiento+1));
                mes_persona = ((Mes_actual - mes_nacimiento)+12);
                dias_persona = (Dia_actual- dia_nacimiento);
            }
            
        }
    }
    system("@cls||clear");
    printf("\nA%co de su Nacimiento : %i - %i - %i ",164,anio_nacimiento,mes_nacimiento,dia_nacimiento);
    printf("\nEl d%ca de Hoy es : %i - %i - %i ",161,Anio_actual,Mes_actual,Dia_actual);
    printf("\nUsted tiene : %i A%co(s), %i Mes(es), %i D%ca(s)",anio_persona,164,mes_persona,dias_persona,161);


    return 0;
}