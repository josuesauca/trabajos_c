#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    
    int numero,total = 0;
    int i;
    system("@cls||clear");
    printf("Ingrese un numero par mostrar en la tabla : ");
    scanf("%i",&numero);

    for (size_t i = 1; i <= 15; i++){

        total  = numero * i;
        printf("\n%i x %i = %i",numero,i,total);        
        
    }   
    
    return 0;
}
