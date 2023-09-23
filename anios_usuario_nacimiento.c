#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    system("@cls||clear");
    __time32_t ahora = time(NULL);
    struct tm tm = *localtime(&ahora);
    int anio_nacimiento,mes_nacimiento,dia_nacimiento;
    int anio_persona,mes_persona,dias_persona;
    printf("==================================Bienvenido=============================");
    printf("\nPrograma para calcular la edad a partir de una fecha ingresada");
    printf("\n=======================================================================\n");
    printf("Ingrese el A%co de su nacimiento : ",164);
    scanf("%i",&anio_nacimiento);
    printf("Ingrese el Mes de su Nacimiento : ");
    scanf("%i",&mes_nacimiento);
    printf("Ingrese el D%ca de su Nacimiento : ",161);
    scanf("%i",&dia_nacimiento);

    if(( tm.tm_year+1900 >= anio_nacimiento )&&( tm.tm_mon+1 >= mes_nacimiento )&&( tm.tm_mday >= dia_nacimiento )){
        anio_persona = ((tm.tm_year+1900) - anio_nacimiento);
	    mes_persona = ((tm.tm_mon+1) - mes_nacimiento);
	    dias_persona = (tm.tm_mday- dia_nacimiento);
    }else{
        if(( mes_nacimiento > tm.tm_mon+1 )&&( dia_nacimiento > tm.tm_mday )||(dia_nacimiento>=(tm.tm_mday)) ){
            anio_persona = ((tm.tm_year+1900) - (anio_nacimiento+1));
            mes_persona = (((tm.tm_mon+1) - (mes_nacimiento+1))+12);
            dias_persona = (((tm.tm_mday)- dia_nacimiento)+30);	
        }else{
            if( mes_nacimiento >(tm.tm_mon+1)){
                anio_persona = ((tm.tm_year+1900) - (anio_nacimiento+1));
			    mes_persona = (((tm.tm_mon+1)  - mes_nacimiento)+12);
			    dias_persona = ((tm.tm_mday)- dia_nacimiento);
            }
        }
    }
    system("@cls||clear");
    printf("\nA%co de su Nacimiento : %i - %i - %i ",164,anio_nacimiento,mes_nacimiento,dia_nacimiento);
    printf("\nEl d%ca de Hoy es : %i - %i - %i ",161,tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday);
    printf("\nUsted tiene : %i A%co(s), %i Mes(es), %i D%ca(s)",anio_persona,164,mes_persona,dias_persona,161);
    
    return 0;
}
