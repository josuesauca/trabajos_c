#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){

    int limite,j,primo,suma = 0;
    bool esprimo;
    system("@cls||clear");
    printf("Ingrese un Limite : ");
    scanf("%i",&limite);
    primo = 2;

    while (limite>0){
        
        esprimo = true;
        
        for (size_t j = 2; (j < primo && esprimo); j++){
            if(primo%j==0){
                esprimo = false;
            }
        }

        if(esprimo){
            printf("+ %i ",primo);
            suma = suma +primo;
            //primo++;
            limite--;
        }/*else{
            primo++;
        }*/
        primo++;
    }
    printf("\nS = %i",suma);
    return 0;
}
