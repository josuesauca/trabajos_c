/*Este algoritmo fue desarrollado por :
                                JOSUE ALEJANDRO SAUCA PUCHA
                                PRIMER CICLO PARALELO "A" DE COMPUTACIÓN
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <string.h>

void Fecha_del_Sistema();
void Impresion_de_Factura();
void Hora_del_sistema(); 
void Inicializar_Factura ();



typedef struct Cliente{
    char Nombres[30];
    char Apellidos[30];
    char Cedula[15];
    char Correo[30];
    char Direccion[30];   
}Datos_Cliente;

Datos_Cliente Presentar_datos_del_cliente(){
    Datos_Cliente Datos_de_Entrada;
    printf("INGRESE SUS DOS NOMBRES : ");
    fflush(stdin);
    gets(Datos_de_Entrada.Nombres);
    printf("INGRESE SUS DOS APELLIDOS :");
    fflush(stdin);
    gets(Datos_de_Entrada.Apellidos);
    printf("INGRESE SU NUMERO DE CEDULA : ");
    fflush(stdin);
    gets(Datos_de_Entrada.Cedula);
    printf("INGRESE SU CORREO ELECTRONICO : ");
    fflush(stdin);
    gets(Datos_de_Entrada.Correo);
    printf("INGRESE SU DIRECCION : ");
    fflush(stdin);
    gets(Datos_de_Entrada.Direccion);
    return Datos_de_Entrada;

}


typedef struct Producto{

    char codigo[10];
    char detalle[25];
    float precio_unitario;
    float precio_total;
    float cantidad;

}Datos_del_producto;



typedef struct Factura{
    Datos_Cliente cliente;
    Datos_del_producto producto[10];
    float Total_Factura; 
   

}Datos_Factura;


void Inicializar_Factura (){
    Datos_Factura factura; 
    int NUM_PRODUCTO;
    
    /*Copiar de una cadena a otra,solo funciona con cadenas */
    //strcpy(factura.cliente.Nombres,"Josue Alejandro");
    //printf("%s",factura.cliente.Nombres);
    printf("INGRESE LOS SIGUIENTES DATOS CORRESPONDIENTES\n ");
    printf("================================================================================\n");
    printf("INGRESE SUS DOS NOMBRES : ");
    fflush(stdin);
    gets(factura.cliente.Nombres);
    printf("INGRESE SUS DOS APELLIDOS :");
    fflush(stdin);
    gets(factura.cliente.Apellidos);
    printf("INGRESE SU NUMERO DE CEDULA : ");
    fflush(stdin);
    gets(factura.cliente.Cedula);
    printf("INGRESE SU CORREO ELECTRONICO : ");
    fflush(stdin);
    gets(factura.cliente.Correo);
    printf("INGRESE SU DIRECCION : ");
    fflush(stdin);
    gets(factura.cliente.Direccion);
    printf("\n\n\n\n\n\n\n\n\n\t\tFACTURA DE LA EMPRESA TELCEL\n");
    Fecha_del_Sistema();
    Hora_del_sistema(); 
    printf("NOMBRES COMPLETOS : %s %s\nCEDULA : %s\nCORREO : %s \nDIRECCION :%s \n ",factura.cliente.Nombres,factura.cliente.Apellidos,factura.cliente.Cedula,factura.cliente.Correo,factura.cliente.Direccion);
    printf("Ingrese el numero de productos que va a adquirir : ");
    scanf("%i",&NUM_PRODUCTO);
    for(int i=0 ;i<NUM_PRODUCTO;i++){
        printf("Ingrese la cantidad de articulos del producto que va a llevar : ");
        fflush(stdin);
        scanf (" %f",&factura.producto[i].cantidad);
        printf("Ingrese el codigo de su producto : ");
        fflush(stdin);
        //scanf (" %s",factura.producto[i].codigo);
        gets(factura.producto[i].codigo);
        printf("Ingrese la descripcion de su producto : ");
        fflush(stdin);
        //scanf (" %s",factura.producto[i].detalle);
        gets(factura.producto[i].detalle);
        printf("Ingrese el precio unitario del producto : ");
        fflush(stdin);
        scanf (" %f",&factura.producto[i].precio_unitario );

        factura.producto[i].precio_total = factura.producto[i].precio_unitario * factura.producto[i].cantidad;
    }

 printf("Cantidad de Articulos  || Codigo || Descripcion || Precio Unitario ||    Total   \n");
    for(  int i=0 ;i<NUM_PRODUCTO;i++  ){
        printf(" %f             ||   %s   ||      %s     ||        %f       ||    %f         ||   \n ",factura.producto[i].cantidad,factura.producto[i].codigo,factura.producto[i].detalle,factura.producto[i].precio_unitario, factura.producto[i].precio_total);
    }

    
    
}


void Fecha_del_Sistema(){
    char Fecha[100];    
    time_t t;
    struct tm *tm;
    t=time(NULL);
    tm=localtime(&t);
    strftime(Fecha, 100, "%d/%m/%Y", tm);
    printf ("FECHA: %s\n", Fecha);
}
void Hora_del_sistema(){
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output,128,"HORA : %H:%M:%S",tlocal);
    printf("%s\n",output);
}

int main(){
    system("@cls||clear"); 
    Inicializar_Factura ();
    return 0;
    
    
} 