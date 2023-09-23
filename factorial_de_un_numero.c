#include <stdio.h>
#include <stdlib.h>



int main (){
    char continuar;

    do{

    int i,num,suma = 0,contador = 1;
    
    printf("INGRESE UN NUMERO :");
    scanf("%i",&num);

    for (int i=1;i<=num;i++){
        contador = contador *i;
        suma = suma + contador -1;

    }
    printf(" Su factorial es :%i\n",contador);
    printf(" La suma de su factorial es :%i",suma);
    printf ("Presione (C) para cancelar la ejecucion del programa, o cualquier otra tecla para continuar\n");
    scanf(" %c",&continuar);
    }while(continuar != 'c' && continuar != 'C');

    return 0;
}