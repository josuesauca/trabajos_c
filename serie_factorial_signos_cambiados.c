/*

1! + 2! - 3! + 4!  ... N!



*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){

    int limite;
    int i,j,k;
    int factorial = 1;
    int sumatotal =0;
    int contador , signo;
    system("@cls||clear");
    printf("Ingrese un limite : ");
    scanf("%i",&limite);

    i = 1;
    j = 1;
    contador = 1;
    signo = 1;
    while (i<=limite){
        
            if(signo > 0 ){
                printf(" + "); 
            }else{
                printf(" - ");
            }

        /*while(k<= i){
            contador = contador * (-1);
            k++;

        }*/
        
        printf(" %i! ",i);
          
            
        while(j<=i){
            factorial = factorial *j;
            j++;
        }
        sumatotal = sumatotal + (factorial * signo);
            
        contador++;
        if (contador > 2){
            signo  = signo * (-1); 
            contador = 1;
        }        
        i++;
    }

    printf("\nS : %i",sumatotal);
    
    
    return 0;
}
