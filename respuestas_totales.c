#include <stdio.h>
#include <stdlib.h>
int main(){

    int Respuesta_Correcta, Respuesta_Incorrecta, Respuesta_Blanco,Total_Correctas,Total_Incorrectas,Total_Blanco,Respuestas_Totales;
    system("@cls||clear");
    printf("\tBienvenido\n");
    printf("Ingrese el Total de Respuestas Correctas :");
    scanf("%i",&Respuesta_Correcta);
    printf("Ingrese el Total de Respuestas Incorrectas :");
    scanf("%i",&Respuesta_Incorrecta);
    printf("Ingrese el Total de Respuestas Correctas :");
    scanf("%i",&Respuesta_Blanco);
    Total_Correctas =  Respuesta_Correcta* 4;
	Total_Incorrectas = Respuesta_Incorrecta *(-1);
	Total_Blanco = Respuesta_Blanco * 0;
	Respuestas_Totales = Total_Correctas+Total_Incorrectas+Total_Blanco;
    printf("\nSus respuestas Correctas ingresadas son : %i, con un valor de : %i ",Respuesta_Correcta,Total_Correctas);
    printf("\nSus respuestas Incorrectas ingresadas son : %i, con un valor de : %i ",Respuesta_Incorrecta,Total_Incorrectas);
    printf("\nSus respuestas en Blanco ingresadas son : %i, con un valor de : %i ",Respuesta_Blanco,Total_Blanco);
    printf("\nEl Puntaje Final es :%i",Respuestas_Totales);
    return 0;
    
}