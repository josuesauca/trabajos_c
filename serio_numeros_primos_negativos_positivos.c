#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int i,j,primo,limite;
    bool esprimo;
    float suma = 0;
    int signo;
    int contador_signo;
    
    printf("Ingrese un limite : ");
    scanf("%i",&limite);

    i = 1;
    primo = 1;
    signo = 1;
    while(i<=limite){
        esprimo = true;
        j = 2;

        while ((j<primo)&&(esprimo == true)) {
            if(primo%j==0){
                esprimo = false;
            }
            j++;
        }
        
        if(esprimo==true){
            if(signo>0){
                printf(" + ");
            }else{
                printf(" - ");
            }
            printf(" %i ",primo);

            suma = suma + (primo*signo);
            primo++;
            i++;
            contador_signo++;
            if(contador_signo>1){
                signo = signo * (-1);
                contador_signo = 1;
            }
        }else{
            primo++;
        }
    }
    printf("\nS = %.2f",suma);
    return 0;
}