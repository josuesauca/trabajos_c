#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[]){


    int limite, i,j,k = 1;
    int signo , primo;
    int fibo ,a ,b;
    int exponente , factoPrimo = 1,contador = 1;
    float suma  =0;

    bool esprimo;
    system("@cls||clear");

    printf("Ingrese un limite : ");
    scanf("%i",&limite);

    i = 1;
    primo = 2;
    fibo = 0;
    a = 1;
    b = 0;
    exponente = 1;
    signo = 1;
    
    while (i<=limite){  
                     
        esprimo = true;

        for (size_t j = 2; (j < primo && esprimo); j++){
            if (primo%j == 0){
                esprimo = false;
            }
        }

        if (esprimo == true){

            if(signo>0){
                printf(" + ");
            }else{
                printf(" - ");            
            }
                    

            
            fibo  = a+b;

            while (k<=primo){
                factoPrimo = factoPrimo * k;
                k++;
            }
                    

            printf(" %i!/%i^%i ",primo,fibo,exponente);

            suma = suma + (factoPrimo / pow(fibo,exponente) * signo);
            a = b;
            b = fibo;
            primo ++;
            i++;
            exponente++;

            
            contador++;
            signo*= -1;
                    
        }else{
            primo ++;
        }           

    }
    
    printf("\nS  = %.2f",suma);
        
    
    return 0;
}
