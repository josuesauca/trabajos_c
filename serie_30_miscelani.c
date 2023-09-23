#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    system("@cls||clear");

    int limite ,i,j;
    int incremento = 1;
    float suma = 0;
    int signo = 1,factorial = 1;
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
    j = 1;

    for(i=1;i<=limite;i++){
        if(signo>0){
            printf(" + ");
        }

        printf(" %i!/%i ",i,incremento);

        while (j<=i){
            factorial = factorial *j;
            j++;
        }
        
        suma = suma + ((factorial/incremento) * signo);
        incremento+=2;
    }
    printf("\nS : %.2f",suma);
    
    return 0;
}
