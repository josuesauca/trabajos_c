#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct cliente{
    char nombresApellidos[100];
    char dni[10];
    char correo[50];
    char direccion[50];
};

struct items{
    char producto[20];
    int codigo;
    int cantidad;
    float precioUnitario;
};

struct Factura{
    int NroFactura;
    int fecha;
    float totalDeProducto;
    float subTotal;
    float tasaIva;
    float totalIva;
    float Total;
    
    struct cliente El_cliente; 
    struct items *El_producto;
};

struct Factura *generar_Factura(int cantidadproductos);
struct items *productos_adquiridos(struct Factura *Mi_Factura, int cantidadproductos);
struct cliente datos_cliente();
void total(struct Factura *Mi_Factura, int cantidadProductos);
float subTotalNeto(struct Factura *Mi_Factura, int cantidadproductos);
void presentarInformacion(struct Factura *pFactura,int cantidadproductos);
int numeros_Aleatorio (int limite);

int main (){
    struct Factura *pFactura;
    int cantidadproductos;
    system("@cls||clear");
    
    printf ("Ingrese la cantidad de productos que desea facturar\n");
    scanf("%d",&cantidadproductos);
    pFactura = generar_Factura(cantidadproductos); 
 
    system("@cls||clear");
    fflush(stdin);
    presentarInformacion(pFactura,cantidadproductos);
    //free(pFactura);

    return 0;
}

//sintesis 
struct Factura *generar_Factura(int cantidadproductos){
    struct Factura *Mi_Factura;
    //time_t t;
    
    //struct tm *tm;
    Mi_Factura = (struct Factura *)malloc(cantidadproductos * sizeof(struct Factura));
    //t=time(NULL);
    //tm=localtime(&t);
    //Mi_Factura->fecha=tm;
    //Mi_Factura->NroFactura= numeros_Aleatorio (1000);
    Mi_Factura->El_producto = productos_adquiridos(Mi_Factura, cantidadproductos);
    Mi_Factura->El_cliente = datos_cliente();

    
    //for (int j = 1; j <= cantidadproductos; j++){

    //    Mi_Factura->El_producto.totalDeProducto[j] = Mi_Factura->El_producto[j].cantidad * Mi_Factura->El_producto[j].precioUnitario;
    //}

    total(Mi_Factura, cantidadproductos);
    Mi_Factura->subTotal = subTotalNeto(Mi_Factura, cantidadproductos);    
    fflush(stdin);
    printf("Cual es la tasa de impuesto a los productos: ?");
    scanf("%f", &Mi_Factura->tasaIva);
    Mi_Factura->totalIva=(Mi_Factura->subTotal*(Mi_Factura->tasaIva/100));
    Mi_Factura->Total=((Mi_Factura->subTotal)+ (Mi_Factura->totalIva));
    //
    return Mi_Factura;
}

struct items *productos_adquiridos(struct Factura *Mi_Factura, int cantidadproductos){
    struct items *productosAdquiridos;
    
    productosAdquiridos = (struct items *)malloc(cantidadproductos*sizeof(struct items));// posición memoria
    
    for(int i = 1 ; i<=cantidadproductos;i++){
        fflush(stdin);
        printf("Ingrese nombre del producto Nro.[%i]:",i);
        scanf("%[^\n]s",productosAdquiridos[i].producto);
        //fgets(productosAdquiridos.producto,sizeof(productosAdquiridos[i].producto),stdin);
        printf("Ingrese el codigo del producto [%s]:",productosAdquiridos[i].producto);
        scanf("%d",&productosAdquiridos[i].codigo);
        printf("Ingrese la cantidad adquirida de/del [%s]:",productosAdquiridos[i].producto);
        scanf("%d",&productosAdquiridos[i].cantidad);
        printf("Ingrese el precio de/del [%s]:",productosAdquiridos[i].producto);
        scanf("%f",&productosAdquiridos[i].precioUnitario);
        
    }
    return productosAdquiridos;
}

struct cliente datos_cliente(){
    struct cliente infoCliente;
    fflush(stdin);
    printf("Ingrese los nombres y apellidos del usuario : ");
    scanf("%[^\n]s",infoCliente.nombresApellidos);
    //fgets(infoCliente.nombresApellidos,sizeof(infoCliente.nombresApellidos), stdin);
    fflush(stdin);
    printf("Ingrese el dni del usuario : ");
    scanf("%[^\n]s",infoCliente.dni);
    //fgets(infoCliente.dni,sizeof(infoCliente.dni),stdin);
    fflush(stdin);
    printf("Ingrese el correo del usuario : ");
    scanf("%[^\n]s",infoCliente.correo);
    //fgets(infoCliente.correo,sizeof(infoCliente.correo),stdin);
    fflush(stdin);
    printf("Ingrese la direccion de residencia del usuario : ");
    scanf("%[^\n]s",infoCliente.direccion);
    //fgets(infoCliente.direccion,sizeof(infoCliente.direccion),stdin);
    
    return infoCliente;
}

void presentarInformacion(struct Factura *pFactura,int cantidadproductos){
    system("@cls||clear");
    //system("color 9");
    //printf("\nHoy es: %02d/%02d/%d\n",pFactura->tm_mday, tm->tm_mon+1, 1900+tm->tm_year);
    printf("Nro.Factura: %i\n",pFactura->NroFactura);
    printf("-----------------------------------------------------\n");
    printf("Datos del cliente\n");
    printf("-----------------------------------------------------\n");
    printf("Nombres: %s\n",pFactura->El_cliente.nombresApellidos);
    printf("Cedula(dni): %s",pFactura->El_cliente.dni);
    printf("\nCorreo: %s\n",pFactura->El_cliente.correo);
    printf("Direccion: %s\n",pFactura->El_cliente.direccion);
    printf("-----------------------------------------------------\n");
    printf("Listado de Productos\n");
    printf("-----------------------------------------------------\n");
    
    for(int i=1; i<=cantidadproductos;i++){

        printf("\tCodigo:%i \tCantidad:%i \tDescripcion:%s \tPrecio U:%2.f\t",pFactura->El_producto[i].codigo, pFactura->El_producto[i].cantidad, pFactura->El_producto[i].producto, pFactura->El_producto[i].precioUnitario);
    
    }
    
    printf("Sub Total Neto: %2.f USD($)\n",pFactura->subTotal);
    printf ("IVA(%.f%%): %.2f\n",pFactura->tasaIva,pFactura->totalIva);
    printf ("Total a pagar: %.2f USD($)\n",pFactura->Total);
    printf ("======================================================================\n");
    printf ("!!!!!GRACIAS POR TU COMPRA!!!!!\n");
    printf ("======================================================================\n");
    printf ("Programa por XYZ");
    printf ("\n======================================================================\n");
}

int numeros_Aleatorio (int limite){
    srand(time(NULL));
    return rand()%limite;
}

float subTotalNeto(struct Factura *Mi_Factura, int cantidadproductos){
    float sub = 0.0;
    for (int i = 1; i <= cantidadproductos; i++){
        sub = sub + Mi_Factura[i].totalDeProducto;
    }
    return sub;
}

void total(struct Factura *Mi_Factura, int cantidadProductos){
    
    for (int i = 1; i <= cantidadProductos; i++){

        Mi_Factura[i].totalDeProducto = (Mi_Factura->El_producto[i].cantidad) * (Mi_Factura->El_producto[i].precioUnitario);

    }
} 
