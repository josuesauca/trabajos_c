#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int i,j,primo,limite;
    bool esprimo;
    float suma = 0;
    int k = 1,factorial = 1;
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
    i = 1;
    primo = 2;
  
    while(i<=limite){
        esprimo = true;
        //j = 2;

        /*while ((j<primo)&&(esprimo)) {
            if(primo%j==0){
                esprimo = false;
            }
            j++;
        }*/

        for (size_t j = 2;(j<primo)&&(esprimo); j++){
            if(primo%j==0){
                esprimo = false;
            }
        }
        
        
        if(esprimo){
            
            printf(" + %i! ",primo);
            /*while (k<=primo){
                factorial = factorial * k;
                k++;
            }
            suma = suma + factorial;*/
            suma = suma +primo;
            primo++;
            i++;
          
        }else{
            primo++;
        }
    }
    //printf("\nS = %.2f",suma);
    printf("\nFinal = %.2f",suma);
    return 0;
}