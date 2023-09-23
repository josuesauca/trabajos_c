#include <stdio.h>
#include <stdlib.h>

int main(int argc,char const *argv[]){
    int suma,i,numero;
    int verificar;
    system("@cls||clear");
    suma = 0;
    printf("\n");
    i = 0;

    do{
        printf("Ingrese el numero a sumar : ");
        scanf("%i",&numero);
        suma = suma + numero;
        printf("Desea seguir sumando Si(1), pulse cualquier tecla para terminar : ");
        scanf("%i",&verificar);
        i++;        
    } while (verificar == 1);    

    printf("La suma de sus %i numeros es : %i",i,suma);        
    return 0;
}