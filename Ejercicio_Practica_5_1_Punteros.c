
//ALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE
//PARALELO "B"

#include <stdio.h>
#include <stdlib.h>

int anioInforme();
float *ingresoTotalMeses(int longitud,char *meses[]);
void presentarInfome(int anio,char *meses[],int longitud,float totalVentasMes[longitud]);
int mesMenor(int longitud,float totalVentasMes[longitud]);
int mesMayor(int longitud,float totalVentasMes[longitud]);
void ventasTotales(int anioInforme,int longitud,float totalVentasMes[longitud],char *mes_Mayor[],char *mes_Menor[],int mesMayor,int mesMenor);
void presentacionFinal(char *mes_Menor[],char *mes_Mayor[],float ventasTotalAnio,float totalVentasMes[],
                    float promedioVentas,int mesMayor,int mesMenor, float proyeccionProximoAnio,int anioInforme);
void MensajeSalida();

int main(int argc, char const *argv[]){
    char *meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    char *mesMenorInforme[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    char *mesMayorInforme[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    int anioProximo,longitud = 12 , mes_Mayor,mes_Menor;
    char Volver_al_Ciclo;

    do{

        system("@cls||clear");
        anioProximo = anioInforme();       
        float *ingresoVentaMes = ingresoTotalMeses(longitud,meses);   
        system("@cls||clear");
        presentarInfome(anioProximo,meses,longitud,ingresoVentaMes);
        mes_Mayor = mesMayor(longitud,ingresoVentaMes);
        mes_Menor = mesMenor(longitud,ingresoVentaMes);
        ventasTotales(anioProximo,longitud,ingresoVentaMes,mesMayorInforme,mesMenorInforme,mes_Mayor,mes_Menor);            
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&Volver_al_Ciclo);
        MensajeSalida();

    }while(Volver_al_Ciclo != 'C' && Volver_al_Ciclo != 'c');   
    return 0;
}

int anioInforme(){
    int anio;
    printf("\t----------------------------------------------\n");
    printf("\t\tIngrese un A%co para el Informe ",164);
    printf("\n\t--------------------------------------------\n\t\t\t");
    scanf("%i",&anio);
    return anio;
}

float *ingresoTotalMeses(int longitud,char *meses[]){
    int i;
    float *ventaMes = (float *)malloc(longitud*sizeof(float));
    for (i = 0; i< longitud; i++){
        printf("----------------------------------------------|--------------------------|");
        printf("\nIngrese la Venta Total del Mes %s      \t\t",meses[i]);
        scanf("%f",&ventaMes[i]);
    }
    return ventaMes;
}

void presentarInfome(int anio,char *meses[],int longitud,float totalVentasMes[longitud]){
    int i;
    system("@cls||clear");
    printf("\n------------------------------------------------------------------\n");
    printf("\t\t\tInforme del A%co %i",164,anio);
    printf("\n------------------------------------------------------------------");
    printf("\n\n||             Mes              ||          Ventas              ||");
    printf("\n------------------------------------------------------------------");
    for(i=0;i<longitud;i++){         
        printf("\n||             %s     \t||          $%.2f   \t\t||",meses[i],totalVentasMes[i]);
        printf("\n------------------------------------------------------------------");
    }
}

int mesMenor(int longitud,float totalVentasMes[longitud]){
    int menor = 0,i;
    for (i = 0; i < longitud; i++){
        if (i==0){
            menor = i;
        }else{
            if(totalVentasMes[i] <= totalVentasMes[menor]){
               menor = i;
            }
        }
    }
    return menor;
}

int mesMayor(int longitud,float totalVentasMes[longitud]){
    int mayor = 0, i;
    for (i = 0; i < longitud; i++){
        if (i==0){
            mayor = i;
        }else{
            if(totalVentasMes[i] >= totalVentasMes[mayor]){
                mayor = i;
            }
        }
    }
    return mayor;
}

void ventasTotales(int anioInforme,int longitud,float totalVentasMes[longitud],char *mes_Mayor[],char *mes_Menor[],int mesMayor,int mesMenor){
    float ventasTotalAnio = 0,promedioVentas = 0,proyeccionProximoAnio = 0;
    int i;    
    for (i = 0; i< 12; i++){
        ventasTotalAnio = ventasTotalAnio +totalVentasMes[i];
    }
    promedioVentas = (ventasTotalAnio /12);
    proyeccionProximoAnio = (ventasTotalAnio*0.10) + ventasTotalAnio; 
    presentacionFinal(mes_Menor,mes_Mayor,ventasTotalAnio,totalVentasMes,promedioVentas,mesMayor,mesMenor,proyeccionProximoAnio,anioInforme);
}
 
void presentacionFinal(char *mes_Menor[],char *mes_Mayor[],float ventasTotalAnio,float totalVentasMes[],
                    float promedioVentas,int mesMayor,int mesMenor, float proyeccionProximoAnio,int anioInforme){

    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Total de Ventas Alcanzado en el A%co es : $%.2f",164,ventasTotalAnio);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Promedio de Ventas Alcanzado en el A%co es : $%.2f",164,promedioVentas);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Mes Mayor es %s con un Total de $ %.2f",mes_Mayor[mesMayor],totalVentasMes[mesMayor]);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("El Mes Menor es %s con un Total de $ %.2f",mes_Menor[mesMenor],totalVentasMes[mesMenor]); 
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("La Proyecci%cn para el A%co %i del 10%% es de : $%.2f",162,164,(anioInforme+1),proyeccionProximoAnio);
    printf("\n--------------------------------------------------------------------------------------------\n");

} 

void MensajeSalida(){
    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");
}










