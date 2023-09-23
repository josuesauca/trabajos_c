#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

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
void presentarInformacion(struct Factura *pFactura,int cantidadproductos);

int main (){
    struct Factura *pFactura;
    system("@cls||clear");
    int cantidadproductos;
    printf("Ingrese la cantidad de productos que desea facturar\n");
    scanf("%d",&cantidadproductos);
    pFactura = generar_Factura(cantidadproductos);
    presentarInformacion(pFactura,cantidadproductos);
    return 0;
}

//sintesis 
struct Factura *generar_Factura(int cantidadproductos){
    struct Factura *Mi_Factura;
    Mi_Factura = (struct Factura *)malloc(cantidadproductos * sizeof(struct Factura));
    Mi_Factura->El_producto = productos_adquiridos(Mi_Factura, cantidadproductos);
    Mi_Factura->El_cliente = datos_cliente();
    
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
    printf("Ingrese los nombres y apellidos del usuario\n");
    scanf("%[^\n]s",infoCliente.nombresApellidos);
    //fgets(infoCliente.nombresApellidos,sizeof(infoCliente.nombresApellidos), stdin);
    fflush(stdin);
    printf("Ingrese el dni del usuario\n");
    scanf("%[^\n]s",infoCliente.dni);
    //fgets(infoCliente.dni,sizeof(infoCliente.dni),stdin);
    fflush(stdin);
    printf("Ingrese el correo del usuario\n");
    scanf("%[^\n]s",infoCliente.correo);
    //fgets(infoCliente.correo,sizeof(infoCliente.correo),stdin);
    fflush(stdin);
    printf("Ingrese la direccion de residencia del usuario\n");
    scanf("%[^\n]s",infoCliente.direccion);
    //fgets(infoCliente.direccion,sizeof(infoCliente.direccion),stdin);
    
    return infoCliente;
}

void presentarInformacion(struct Factura *pFactura,int cantidadproductos){
    system("@cls||clear");
    //system("color 9");
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
    printf("Codigo:%i \tCantidad:%i \tDescripcion:%s \tPrecio U:%2.f\t",pFactura->El_producto[i].codigo,pFactura->El_producto[i].cantidad,pFactura->El_producto[i].producto,pFactura->El_producto[i].precioUnitario);
    }
    
}

//int numeros_Aleatorio (int limite){
//    srand(time(NULL));
//    return rand()%limite;
//}