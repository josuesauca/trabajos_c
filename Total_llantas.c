//Algoritmo hecho por: Jhonatana Sefla,Josue Sauca,Juan Castillo, Nathaly Bravo 
//Primer Ciclo "B"
#include <stdio.h>
#include <stdlib.h>

int main(){

    int Cantidad_llantas;
    float Descuento,Precio_Total;
    system("@cls||clear");
    printf("Algoritmo Realizado por : Josue Sauca\n");
    printf("\n==============Bienvenido==================\n");
    printf("Ingrese la Cantidad de Llantas de llevar : ");
    scanf("%i",&Cantidad_llantas);

    if((Cantidad_llantas>=1) && (Cantidad_llantas < 5)){
        Precio_Total = (Cantidad_llantas * 800);
    }else{
        if((Cantidad_llantas >= 5) && (Cantidad_llantas <=8)){
            Precio_Total = (Cantidad_llantas * 700);
        }else{
            if(Cantidad_llantas >8){
                Descuento = (800*0.30);
                printf("\nEl descuento que tiene es de : $ %.2f ",Descuento);
                Precio_Total = ((Cantidad_llantas * 800)-Descuento);	
            }
        }
    }
    printf("\nSu Total a Pagar es : $ %.2f \n",Precio_Total);
    return 0;
}