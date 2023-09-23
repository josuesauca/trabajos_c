#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numero_random;
    system("@cls||clear");
    srand(time(NULL));
    numero_random = 1 + rand() % (100+1)-1;
    printf("El numero random es %i",numero_random);

    return 0;
}