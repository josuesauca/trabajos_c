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
void Imprimir_Datos_del_Cliente();
void Factura_txt();
void Inicializar_Factura ();


FILE *hd;

struct Cliente{
    char Nombres[30];
    char Apellidos[30];
    char Cedula[15];
    char Correo[30];
    char Direccion[30];   
}Datos_Cliente;

struct Producto{
    char codigo[10];
    char detalle[25];
    float precio_unitario;
    float precio_total;
    int cantidad;
}Datos_del_producto[20];



void Inicializar_Factura (){
    int NUM_PRODUCTO;
    
    printf("INGRESE LOS SIGUIENTES DATOS CORRESPONDIENTES\n");
    printf("================================================================================\n");
    printf("INGRESE SUS DOS NOMBRES : ");
    fflush(stdin);
    gets(Datos_Cliente.Nombres);
    printf("INGRESE SUS DOS APELLIDOS :");
    fflush(stdin);
    gets(Datos_Cliente.Apellidos);
    printf("INGRESE SU NUMERO DE CEDULA : ");
    fflush(stdin);
    gets(Datos_Cliente.Cedula);
    printf("INGRESE SU CORREO ELECTRONICO : ");
    fflush(stdin);
    gets(Datos_Cliente.Correo);
    printf("INGRESE SU DIRECCION : ");
    fflush(stdin);
    gets(Datos_Cliente.Direccion);
    system("@cls||clear");
    Fecha_del_Sistema();
    Hora_del_sistema(); 
    printf("\t\tFACTURA DE LA EMPRESA TELCEL\n");    
    printf("NOMBRES COMPLETOS : %s %s\nCEDULA : %s\nCORREO : %s \nDIRECCION :%s \n",Datos_Cliente.Nombres,Datos_Cliente.Apellidos,Datos_Cliente.Cedula,Datos_Cliente.Correo,Datos_Cliente.Direccion);
    printf("Ingrese la cantidad de productos que va a llevar: ");
    scanf("%i",&NUM_PRODUCTO);
    system("@cls||clear");
    for(int i=1 ;i<=NUM_PRODUCTO;i++){
        printf("Cantidad :");
        scanf ("%i",&Datos_del_producto[i].cantidad);
        printf("Codigo del producto :");
        fflush(stdin);
        gets(Datos_del_producto[i].codigo);
        printf("Descripcion :");
        fflush(stdin);
        gets(Datos_del_producto[i].detalle);
        printf("Precio Unitario :");
        fflush(stdin);
        scanf ("%f",&Datos_del_producto[i].precio_unitario );
        system("@cls||clear");

        //factura.producto[i].precio_total = factura.producto[i].precio_unitario * factura.producto[i].cantidad;
    }



    printf("Cantidad de Articulos\t||\tCodigo\t||\tDescripcion\t||\tPrecio Unitario\t||\tTotal \t||");
    printf("\n\n");
    for(int i=1;i<=NUM_PRODUCTO;i++){
        printf("\t %i \t\t|| %s \t\t|| %s \t\t\t|| %.2f \t\t|| %f \t\t||\n",Datos_del_producto[i].cantidad,Datos_del_producto[i].codigo,Datos_del_producto[i].detalle,Datos_del_producto[i].precio_unitario, Datos_del_producto[i].precio_total);
    }

    
    
}

/*Presentar_Items_del_Cliente IngresarItem(int limite , Presentar_Items_del_Cliente Items){
    float Total_de_un_producto,Suma_de_los_productos,Auxiliar;
    //struct Items Ingresar_Items;  
    double Iva_de_todos_los_productos_ingresados, Total_a_pagar,Subtotal_de_los_productos; 
     
    printf("INGRESE LA CANTIDAD DE PRODUCTOS QUE VA A LLEVAR : ");
    fflush(stdin);
    scanf("%i",&Items[0].Cantidad_Productos);
    Auxiliar = 0;

    for (int i=0;i<Items[0].Cantidad_Productos;i++){

        printf("INGRESE EL CODIGO DE SU PRODUCTO : ");
        fflush(stdin);
        fgets(Items[0].Codigo,sizeof(Items[i].Codigo),stdin);       
        printf("INGRESE LA DESCRIPCION DE SU PRODUCTO : ");
        fflush(stdin);
        fgets(Items[1].Descripcion,sizeof(Items[i].Descripcion),stdin); 
        printf("INGRESE EL PRECIO UNITARIO DE SU PRODUCTO : ");
        fflush(stdin);
        scanf("%i",&Items[i].Precio_Unitario); 
        printf("INGRESE LA CANTIDAD DE PRODUCTO QUE VA A LLEVAR :  ");
        fflush(stdin);
        scanf("%i",&Items[i].Cantidad_Productos);
        /*PARA CALCULAR EL VALOR DE UN PRODUCTO*/
        //Total_de_un_producto = Items[i].Cantidad_Productos * Items[i].Precio_Unitario;
     
        /*-----------------------------------------*//*
        Suma_de_los_productos = Total_de_un_producto + Auxiliar ; 
        
        Total_de_un_producto = Auxiliar ; 
         
        Auxiliar = Suma_de_los_productos;
        
    }
    Iva_de_todos_los_productos_ingresados = 0.12 * Suma_de_los_productos;
     printf("\nEL IVA DE LA COMPRA DE SUS PRODUCTOS ES = %.2lf ",Iva_de_todos_los_productos_ingresados);
    Subtotal_de_los_productos = Suma_de_los_productos-Iva_de_todos_los_productos_ingresados; 
     printf("\nEL SUBTOTAL DE SUS PRODUCTOS ES = %.2lf ",Subtotal_de_los_productos);
    Total_a_pagar = Iva_de_todos_los_productos_ingresados + Subtotal_de_los_productos;
    printf("\nSU TOTAL A PAGAR ES = %.2lf ",Total_a_pagar);

    return (Items[limite]);

} */

void Fecha_del_Sistema(){
    char Fecha[100];    
    time_t t;
    struct tm *tm;
    t=time(NULL);
    tm=localtime(&t);
    strftime(Fecha, 100, "%d/%m/%Y", tm);
    printf ("FECHA: %s\n",Fecha);
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
    Factura_txt();
    return 0;
   
    
} 

void Factura_txt(){
    char direccion[] = {"C:\\Users\\DELL\\Desktop\\ALGORITMOS\\Introduccion\\Factura_Tipo.txt"};
    hd = fopen(direccion,"wt");
    /*if(hd ==NULL){
        printf("\nErorr al ejecutar el archivo");
        return 1;
    }*/
    fprintf(hd,"\n\t\tFACTURA DE LA EMPRESA TELCEL\n");   
    fprintf(hd,"================================================================================\n");
    fprintf(hd,"====================================ITEMS=======================================\n");
    fprintf(hd,"================================================================================\n");
    fprintf(hd,"Cantidad de Articulos || Codigo || Descripcion || Precio Unitario || Subtotal\n");
    fprintf(hd,"================================================================================\n");
    
    fprintf(hd,"======================||========||=============||=================||==========||\n");
    fclose(hd);
}

