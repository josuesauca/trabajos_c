/* #include<stdio.h>
#include<stdlib.h>

int Presentar(int anio);
void Ventas(int i, int j,float ventastotalmes,float ventasalcanzadasanio,float mesventatotalmayor, float mesventatotalmenor,
            float promedioventasanio,int *anio,float proyeccion);
void SegundaPresentacion(float ventasalcanzadasanio,float promedioventasanio,float proyeccion,int *j,float mesventatotalmayor,
            float mesventatotalmenor,int i,float ventastotalmes, char *mayormes[*j], char *menormes[*j] );   


int main (){ 
int anio; 
int i,j,k;
float ventastotalmes,ventasalcanzadasanio, promedioventasanio ,mesventatotalmayor,mesventatotalmenor;
float proyeccion,porciento;    
porciento = 10;
ventasalcanzadasanio = 0.0;
system("@cls||clear");

Presentar(anio);

Ventas( i,  j, ventastotalmes, ventasalcanzadasanio, mesventatotalmayor,  mesventatotalmenor, promedioventasanio, &anio, proyeccion);
   return 0;
} 



int Presentar(int anio){
printf("*********  INFORME DE VENTAS  *********\n");
printf("-- Ingrese el año del informe -- \n\t");
printf("===========\n\t");
scanf("%i",&anio);
printf("\t===========\n");
return anio;
}

void Ventas(int i, int j,float ventastotalmes,float ventasalcanzadasanio,float mesventatotalmayor, float mesventatotalmenor,
            float promedioventasanio,int *anio,float proyeccion){
char *mes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" , "DICIEMBRE"};
char *mayormes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" , "DICIEMBRE"};
char *menormes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" , "DICIEMBRE"};
    for ( i = 0 ,j = 0; i < 12 && j <= 12; i++){
        printf("|–––––––––––––––––––––––––––––––––––––––––––|–––––––––––|\n");  
        if ((mes[i] == mes[8] || mes[i] == mes[10])||(mes[i] == mes[8] || mes[i] == mes[11])){
        printf("| Ingrese las ventas totales de %s\t",mes[i]); 
        scanf("%f",&ventastotalmes); 
        }else{
            printf("| Ingrese las ventas totales de %s\t\t",mes[i]);  
            scanf("%f",&ventastotalmes); 
        } 
        if(i == 11){
            printf("|–––––––––––––––––––––––––––––––––––––––––––|–––––––––––|\n"); 
        }
        ventasalcanzadasanio = ventasalcanzadasanio + ventastotalmes;
        if(i == 0 && j == 0){
                mesventatotalmayor = ventastotalmes;
                mesventatotalmenor = ventastotalmes;
            }else{ 
              
                if (ventastotalmes > mesventatotalmayor){
                    mesventatotalmayor = ventastotalmes;   
                    mayormes[j] = mes[i];
                    }    
              
                if(ventastotalmes < mesventatotalmenor){
                    mesventatotalmenor = ventastotalmes;
                    menormes[j] =   mes[i];
                    }    
            }

        }
promedioventasanio = ventasalcanzadasanio / 12;
anio = anio + 1;
proyeccion = ventasalcanzadasanio + (ventasalcanzadasanio * 10/100); 

SegundaPresentacion( ventasalcanzadasanio, promedioventasanio, proyeccion, &j, mesventatotalmayor, mesventatotalmenor, i, ventastotalmes,&mayormes[j],  &menormes[j] );
}

void SegundaPresentacion(float ventasalcanzadasanio,float promedioventasanio,float proyeccion,int *j,float mesventatotalmayor,float mesventatotalmenor,int i,float ventastotalmes, char *mayormes[*j], char *menormes[*j] ){ 
    printf("\n\n--------------------------------------------------------------------------------------------------------------------\n");
    printf("El TOTAL de ventas alcanzadas en el año es = %.4f  USD\n", ventasalcanzadasanio);
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("El PROMEDIO de ventas alcanzado en el año es = %.4f  USD\n",promedioventasanio);
    printf("--------------------------------------------------------------------------------------------------------------------\n");

    printf("La venta más alta corresponde al mes de %s con %.4f USD de venta total\n",mayormes[*j], mesventatotalmayor);
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    
    printf("La venta más baja corresponde al mes de %s con %.4f USD de venta total\n",menormes[*j], mesventatotalmenor);
  
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("\n-La proyección (con un aumento del 10%%) de la VENTA TOTAL para el próximo año es de | %.4f USD |\n",proyeccion);  
    printf("--------------------------------------------------------------------------------------------------------------------\n");  
    printf("\n\n\n|-----------------------------------------------------------------------------|\n");
    printf("|Desarrollado por:Patricio Paredes,Jean Agreda,Jhonatan Sefla,Josue Sauca     |\n");
    printf("|-----------------------------------------------------------------------------|\n"); 
} 


char *mes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" ,
                 "DICIEMBRE"};
char *mayormes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" ,
                 "DICIEMBRE"};
char *menormes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" ,
                 "DICIEMBRE"};

                 
 */

#include<stdio.h>
#include<stdlib.h>

void ingresarVentas(char *meses[], float ventas[12]);
void presentarEncabezado(int anio);
float totalVentas(int limite, float ventas[limite]);
void presentarTabla(char *meses[], int limite, float ventas[limite], float totalVenta);
int buscarPosicionMayorVenta(int limite, float ventas[limite]);
int buscarPosicionMenorVenta(int limite, float ventas[limite]);
void generarReporte(int anio, char *meses[], int limite, float ventas[limite]);
void mensajeSalida ();


int main(){
    char continuar;
    do{
        system("@cls||clear");
        char *meses[] = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO.", "JUNIO",
                        "JULIO", "AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};
        int anio;
        float ventas[12];
        printf ("----------------------------------------");
	    printf ("\n\tPROGRAMA: REPORTE DE VENTAS\n");
	    printf ("----------------------------------------\n");
        printf("A%co para el reporte: ",164);
        scanf("%d", &anio);
        ingresarVentas(meses, ventas);
        generarReporte(anio, meses, 12, ventas);
        printf ("\nPresione (S) para Salir ó cualquier");
        printf ("\ntecla para continuar \n");
        printf ("Que accion desea ?\t");
        scanf (" %c", &continuar);
    }while (continuar != 's' &&  continuar != 'S');
        mensajeSalida ();
        getchar();
        return 0;
}

void ingresarVentas(char *meses[], float ventas[12]){    
    for (int i = 0; i < 12; i++){
        printf("Ingrese la venta del mes %s:  ", meses[i]);    
        scanf("%f", &ventas[i]);
    }
}
void presentarEncabezado(int anio){
    printf("----------------------------------------\n");
    printf("\t*REPORTE DE VENTAS*\n");
    printf("\t\t%d\n", anio);
}
float totalVentas(int limite, float ventas[limite]){
    float suma = 0;
    for (int i = 0; i < limite; i++){
        suma = suma + ventas[i];
    }
    return suma;
}
void presentarTabla(char *meses[], int limite, float ventas[limite], float totalVenta){    
    printf("----------------------------------------\n");
    printf("\tMES\t|\tVENTA\n"); 
    printf("----------------------------------------\n");
    for (int i = 0; i < limite; i++){
        printf("  %s:\t\t%.2f\n",meses[i] ,ventas[i]);
    }    
    printf("----------------------------------------\n");
    printf("\tTOTAL\t|\t%.2f\n", totalVenta); 
    printf("----------------------------------------\n");
}
int buscarPosicionMayorVenta(int limite, float ventas[limite]){
    int posicionMa = 0;
    for (int i = 0; i < limite; i++){
        if (ventas[i] > ventas[posicionMa]){
            posicionMa = i;
        }
    }    
    return posicionMa;
}
int buscarPosicionMenorVenta(int limite, float ventas[limite]){
    int posicionMe = 0;
    for (int j = 0; j < limite; j++){
        if (ventas[j] < ventas[posicionMe]){
            posicionMe = j;
        }
    }    
    return posicionMe;
}
void generarReporte(int anio, char *meses[], int limite, float ventas[limite]){
    system("@cls||clear");
    presentarEncabezado(anio);
    float totalVenta = totalVentas(limite, ventas);
    presentarTabla(meses, limite, ventas, totalVenta);
    float promedio = totalVenta/limite;
    printf("\nPROMEDIO DE VENTAS:\t\t%.2f\n", promedio);
    int posicionMayor = buscarPosicionMayorVenta(limite,ventas);
    printf("MAYOR VENTA EN %s:  \t%.2f\n", meses[posicionMayor],ventas[posicionMayor]);
    int posicionMenor = buscarPosicionMenorVenta(limite,ventas);
    printf("MENOR VENTA EN %s:  \t%.2f\n", meses[posicionMenor],ventas[posicionMenor]);
    float proyeccion =  (totalVenta * 0.10) + totalVenta;
    printf("PROYECCION DE VENTAS %i:\t%.2f\n", (anio+1), proyeccion);

        
}
void mensajeSalida (){
        printf("\nGRACIAS POR UTILIZAR NUESTRO PROGRAMA!!!\n");
        printf("\tVUELVA PRONTO!!!\n");
        printf ("\n----------------------------------------");
        printf ("\nPROGRAMA DESARROLLADO POR:");
        printf ("\n----------------------------------------\n");
        printf ("\n>> ALEXANDER RICHARD CAÑAR RODRIGUEZ");
        printf ("\n>> NAYELY CRUZCAYA RAMIREZ HERRERA");
        printf ("\n>> JONATHAN DAVID SEFLA MACAS");
        printf ("\n>> JOSE ISRAEL YANGARI CALVA\n");
        printf ("\n\t PRIMERO  B\n");
        printf ("\n----------------------------------------\n");
}  