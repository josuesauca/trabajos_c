// @Author Patricio Paredes,Jean Agreda,Jhonatan Sefla,Josue Sauca *2020-01-26* computación "A"
#include<stdio.h>
#include<stdlib.h>

int Presentar(int anio);
void Ventas(int i, int j,float ventastotalmes,float ventasalcanzadasanio,float mesventatotalmayor, float mesventatotalmenor,
            float promedioventasanio,int *anio,float proyeccion);
void SegundaPresentacion(float ventasalcanzadasanio,float promedioventasanio,float proyeccion,int *j,float mesventatotalmayor,
            float mesventatotalmenor,int i,float ventastotalmes, char *mayormes[*j], char *menormes[*j] );   

//PROGRAMA PRINCIPAL
int main (){ 
int anio; 
int i,j,k;
float ventastotalmes,ventasalcanzadasanio, promedioventasanio ,mesventatotalmayor,mesventatotalmenor;
float proyeccion,porciento;    
char *mes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" ,
                 "DICIEMBRE"};
char *mayormes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" ,
                 "DICIEMBRE"};
char *menormes[] ={ "ENERO" , "FEBRERO", "MARZO" , "ABRIL" , "MAYO" , "JUNIO" , "JULIO" , "AGOSTO" , "SEPTIEMBRE" , "OCTUBRE" , "NOVIEMBRE" ,
                 "DICIEMBRE"};
porciento = 10;
ventasalcanzadasanio = 0.0;
system("@cls||clear");

Presentar( anio);

Ventas( i,  j, ventastotalmes, ventasalcanzadasanio, mesventatotalmayor,  mesventatotalmenor, promedioventasanio, &anio, proyeccion);
   return 0;
} 


//FUNCIONES

int Presentar(int anio){
printf("***  INFORME DE VENTAS  ***\n");
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
                //MESMAXIMO
                if (ventastotalmes > mesventatotalmayor){
                    mesventatotalmayor = ventastotalmes;   
                    mayormes[j] = mes[i];
                    }    
                //MES MINIMO
                if(ventastotalmes < mesventatotalmenor){
                    mesventatotalmenor = ventastotalmes;
                    menormes[j] =   mes[i];
                    }    
            }

        }
promedioventasanio = ventasalcanzadasanio / 12;
anio = anio + 1;
proyeccion = ventasalcanzadasanio + (ventasalcanzadasanio * 10/100); 
//LLAMADA A FUNCIóN (segundapresentación)
SegundaPresentacion( ventasalcanzadasanio, promedioventasanio, proyeccion, &j, mesventatotalmayor, mesventatotalmenor, i, ventastotalmes,&mayormes[j],  &menormes[j] );
}

void SegundaPresentacion(float ventasalcanzadasanio,float promedioventasanio,float proyeccion,int *j,float mesventatotalmayor,float mesventatotalmenor,int i,float ventastotalmes, char *mayormes[*j], char *menormes[*j] ){ 
    printf("\n\n--------------------------------------------------------------------------------------------------------------------\n");
    printf("El TOTAL de ventas alcanzadas en el año es = %.4f  USD\n", ventasalcanzadasanio);
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("El PROMEDIO de ventas alcanzado en el año es = %.4f  USD\n",promedioventasanio);
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    //VENTA MáS ALTA
    printf("La venta más alta corresponde al mes de %s con %.4f USD de venta total\n",mayormes[*j], mesventatotalmayor);
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    //VENTA MáS BAJA
    printf("La venta más baja corresponde al mes de %s con %.4f USD de venta total\n",menormes[*j], mesventatotalmenor);
    //Proyección
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("\n-La proyección (con un aumento del 10%%) de la VENTA TOTAL para el próximo año es de | %.4f USD |\n",proyeccion);  
    printf("--------------------------------------------------------------------------------------------------------------------\n");  
    printf("\n\n\n|-----------------------------------------------------------------------------|\n");
    printf("|Desarrollado por:Patricio Paredes,Jean Agreda,Jhonatan Sefla,Josue Sauca     |\n");
    printf("|-----------------------------------------------------------------------------|\n"); 
}