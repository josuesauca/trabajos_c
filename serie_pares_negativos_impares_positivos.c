#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int limite , i = 1;
    float suma = 0;
    int signo = 1, signo_termino = 1;
    printf("Por favor digite un limite : ");
    scanf("%i",&limite);

    for (size_t i = 1; i <= limite; i++){

        (signo_termino>0)? printf(" + "):printf(" - ");

        printf(" %i^2 ",i);
        suma = suma + (pow(i,2) * signo_termino);
        signo++;

        if (signo> 1) {
			signo_termino = signo_termino*(-1);
			signo = 1;
		}
    }
    printf("\nSuma : %.2f",suma);  
    return 0;
}
