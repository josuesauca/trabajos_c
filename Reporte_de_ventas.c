#include <stdio.h> 
#include <stdlib.h>

/*float ingresarVenta( char *meses[],int numeroMes){
    float venta;
    printf("VENTA DEL MES  %s :",meses[numeroMes]);
    scanf("%f",&venta);
    return venta;
}*/

float ingresarVenta( char *meses[],float ventas[12]){
    float venta;
    for (int i =0 ; i< 12;i++){
        printf("VENTA DEL MES  %s :",meses[i]);
        scanf("%f",&ventas[i]);
    }
    return venta;
}




/*void presentarTabla( char *meses[],float ventaEnero,float ventaFebrero,
                    float ventaMarzo,float ventaAbril,float ventaMayo,float ventaJunio,
                    float ventaJulio,float ventaAgosto,float ventaSeptiembre,
                    float ventaOctubre,float ventaNoviembre, float ventaDiciembre ){
    printf("=========================================================================\n");
    printf("||             MES                ||                VALOR            || \n");
    printf("=========================================================================");
    int  i = 0;
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaEnero);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaFebrero);
    printf("||             %s                 ||                  .2%f           ||\n ",meses[i++],ventaMarzo);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaAbril);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaMayo);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaJunio);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaJulio);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaAgosto);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaSeptiembre);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaOctubre);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaNoviembre);
    printf("||             %s                 ||                  .2%f           || \n",meses[i++],ventaDiciembre);
    printf("=========================================================================");
    
}*/

void presentarTabla( char *meses[],float venta[] ){
    printf("=========================================================================\n");
    printf("||             MES                ||                VALOR            || \n");
    printf("=========================================================================\n");
    for (int i =0 ; i<= 12;i++){
        if((meses[i] == meses [8] || meses[i] == meses[10])||meses[i] ==meses[11] ){
        printf("||             %s\t\t||                  %.2f\t\t|| \n",meses[i],venta[i]);    
        }else{
        printf("||             %s\t\t||                  %.2f\t\t|| \n",meses[i],venta[i]);  
        }
          
    }
printf("=========================================================================");


}


void presentarEncabezado(int anio){
    printf("\t\tREPORTE DE VENTAS DE LA EMPRESA TECATE\n");
    printf("\t\t\t\t%d\n",anio);

}
float promedioVentas(float venta[12]){
    int total_venta = 0;
    for (int i =0; i < venta[i] ;i++){
        total_venta = total_venta +venta[i];
    }
   return total_venta;
}

int main(){
    system("@cls||clear");
    int anio;
    
    /*float ventaEnero,ventaFebrero,ventaMarzo,
    ventaAbril,ventaMayo,ventaJunio,ventaJulio,
    ventaAgosto,ventaSeptiembre,ventaOctubre,
    ventaNoviembre,ventaDiciembre;
    */

    char *meses[] = {"ENERO", "FEBRERO","MARZO" ,"ABRIL","MAYO","JUNIO",
                    "JULIO", "AGOSTO","SEPTIEMBRE","OCTUBRE","NOVIEMBRE","DICIEBRE "};
    float ventas[12];
    
    printf("AÑO PARA EL REPOTE: ");
    scanf("%d",&anio);
    int i = 0;
    /*ventaEnero = ingresarVenta(meses,i++);
    ventaFebrero = ingresarVenta(meses,i++);
    ventaMarzo = ingresarVenta(meses,i++);
    ventaAbril = ingresarVenta(meses,i++);
    ventaMayo = ingresarVenta(meses,i++);
    ventaMarzo = ingresarVenta(meses,i++);
    ventaJunio = ingresarVenta(meses,i++);
    ventaJulio = ingresarVenta(meses,i++);
    ventaAgosto = ingresarVenta(meses,i++);
    ventaSeptiembre = ingresarVenta(meses,i++);
    ventaOctubre = ingresarVenta(meses,i++);
    ventaNoviembre = ingresarVenta(meses,i++);
    ventaDiciembre = ingresarVenta(meses,i++);
    presentarEncabezado(anio);
    presentarTabla(meses, ventaEnero,ventaFebrero,ventaMarzo,ventaAbril,ventaMayo,ventaJunio,ventaJulio,
    ventaAgosto,ventaSeptiembre,ventaOctubre,
    ventaNoviembre,ventaDiciembre);*/
    ingresarVenta(meses,ventas);
    presentarEncabezado(anio);
    presentarTabla(meses,ventas);
    

    return 0;
}