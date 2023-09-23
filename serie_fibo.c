#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int fibo,a,b,suma,limite,i;
    char continuar;
    system("@cls||clear"); 
    do{
        system("@cls||clear"); 
        printf ("Ingrese un limite : ");
        scanf ("%i",&limite);
        fibo = 0;
        a = 1;
        b = 0;
        suma = 0;
        i= 1;
        printf("S = ");
    
        while (i<=limite){
            suma = suma +fibo;
            printf(" + %i ",fibo);
            fibo = a + b;
            a = b;
            b = fibo;
            i++;
        }
        printf("\nSuma = %i",suma);
        printf("\nDesea continuar?\nPulse (S) para terminar o pulse cualquier tecla para empezar de nuevo : ");
        scanf(" %c",&continuar);
    }while (continuar != 'S' && continuar != 's');
    printf("\nGracias por Usar el Programa!!!\nVuelva Pronto");
    
    return 0;
}
