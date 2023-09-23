#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum bolita{
    bolita_blanca = 1,
    bolita_verde = 2,
    bolita_amarilla =3,
    bolita_azul = 4,
    bolita_roja = 5
};

int main(){
    float compra_total,descuento;
    int sorteo_bolita;
    system("@cls||clear");
    printf("Ingrese el valor de la compra total : ");
    scanf("%f",&compra_total);
    srand (time(NULL)); 
    sorteo_bolita =  rand () %5+1; 
    printf("Usted a obtenido la bolita de color : ");
    switch (sorteo_bolita)   {
        case bolita_blanca: 
            printf("Bolita Blanca, tiene un descuento de 0%%\n");
            descuento = compra_total * 0;
        break;
        case bolita_verde: 
            printf("Bolita Verde, tiene un descuento de 0%%\n");
            descuento = compra_total * 0.10;
        break;
        case bolita_amarilla: 
            printf("Bolita Amarilla, tiene un descuento de 25%%\n");
            descuento = compra_total * 0.25;
        break;
        case bolita_azul: 
            printf("Bolita Azul, tiene un descuento de 50%%");
            descuento = compra_total * 0.50;
        break;
        case bolita_roja: 
            printf("Bolita Roja, tiene un descuento de 100%%");
            descuento = compra_total *  1 ;
        break;
    }
    printf("\nSu Total de compra es : $ %.2f",compra_total);   
    printf("\nUsted tiene un descuento de : $ %.2f",descuento);
    printf("\nSu Total a pagar es : $ %.2f",(compra_total-descuento));    

    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    //sorteo_bolita = 1+ rand () %(5+1)-1; 