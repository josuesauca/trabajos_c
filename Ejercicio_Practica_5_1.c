//ALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE
//PARALELO "B"

#include <stdio.h>
#include <stdlib.h>

int AnioInforme(int *Anio); 
void PresentacionInforme(char *mes_menor[],char *mes_mayor[],float Ventas_Total_Anio,
                        float Promedio_Ventas,float Mes_Mayor,float Mes_Menor, float Proyeccion_proximo_anio,int AnioInforme);
void MensajeSalida();

int main(int argc, char const *argv[]){
    char *meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    char *mes_menor[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    char *mes_mayor[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    int Anio,AnioProximo,i;
    float Mes_Mayor,Mes_Menor, Proyeccion_proximo_anio;
    float Total_Ventas_Mes[12],Ventas_Total_Anio,Promedio_Ventas;
    char Volver_al_Ciclo;

    system("@cls||clear");
    do{
        system("@cls||clear");
        AnioProximo = AnioInforme(&Anio);
        printf("\n\n");        
        Ventas_Total_Anio = 0;    
    
        for (i = 0; i< 12; i++){

            printf("----------------------------------------------|--------------------------|");
            printf("\nIngrese la Venta Total del Mes %s      \t\t",meses[i]);
            scanf("%f",&Total_Ventas_Mes[i]);

            if(i==0){
                Mes_Mayor = Total_Ventas_Mes[i];
                Mes_Menor = Total_Ventas_Mes[i];
            }else{
                if (Total_Ventas_Mes[i] >= Mes_Mayor ){
                    Mes_Mayor = Total_Ventas_Mes[i];              
                    //*mes_mayor  = meses[i];               
                    *mes_mayor  = *(meses+i);               
                }
                if(Total_Ventas_Mes[i]<= Mes_Menor){
                    Mes_Menor = Total_Ventas_Mes[i];
                    //*mes_menor  = meses[i];
                    *mes_menor  = *(meses+i);
                }
            }
            Ventas_Total_Anio = Ventas_Total_Anio +Total_Ventas_Mes[i];
        }
        system("@cls||clear");
        printf("||             Mes              ||             Ventas           ||");
        printf("\n------------------------------------------------------------------");
        for(i=0;i<12;i++){
            
            printf("\n||             %s     \t||              %.2f \t\t||",meses[i],Total_Ventas_Mes[i]);
            printf("\n------------------------------------------------------------------");
            
        }

        Promedio_Ventas = (Ventas_Total_Anio /12);
        Proyeccion_proximo_anio = (Ventas_Total_Anio*0.10) + Ventas_Total_Anio; 
        PresentacionInforme(mes_menor,mes_mayor,Ventas_Total_Anio,Promedio_Ventas,Mes_Mayor,Mes_Menor,Proyeccion_proximo_anio,AnioProximo);
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&Volver_al_Ciclo);
        MensajeSalida();

    }while(Volver_al_Ciclo != 'C' && Volver_al_Ciclo != 'c');   
    return 0;
}

int AnioInforme(int *Anio){
    printf("\t----------------------------------------------\n");
    printf("\t\tIngrese un A%co para el Informe ",164);
    printf("\n\t--------------------------------------------\n\t\t\t");
    scanf("%i",Anio);
    return (*Anio);
}
 
void PresentacionInforme(char *mes_menor[],char *mes_mayor[],float Ventas_Total_Anio,
                    float Promedio_Ventas,float Mes_Mayor,float Mes_Menor, float Proyeccion_proximo_anio,int AnioInforme){

    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Total de Ventas Alcanzado en el A%co es : $%.2f",164,Ventas_Total_Anio);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Promedio de Ventas Alcanzado en el A%co es : $%.2f",164,Promedio_Ventas);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Mes Mayor es %s con un Total de $ %.2f",*mes_mayor,Mes_Mayor);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Mes Menor es %s con un Total de $ %.2f",*mes_menor,Mes_Menor); 
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("La Proyecci%cn para el A%co %i del 10%% es de : $%.2f",162,164,(AnioInforme+1),Proyeccion_proximo_anio);
    printf("\n--------------------------------------------------------------------------------------------\n");

}

void MensajeSalida(){

    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");
}




















































































