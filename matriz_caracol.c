#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){


    int matriz[100][100],tamanio,a ,b,valor;
    system("@cls||clear");

    printf("Ingrese un tamanio : ");
    scanf("%i",&tamanio);
    a = 0;
    b = tamanio -1;
    valor = 1;
    for (int j = 0; j< tamanio; j++){
        
        for (int i = a; i <=b; i++){
            matriz[a][i] = valor++,"%c",123;
        }

        
        for (int i =a + 1; i <= b; i++){        
            matriz[i][b] = valor++;
        }

        for (int i = b-1; i >= a; i--){
            matriz[b][i] = valor++;
        }
        
        for (int i = b-1; i >= a+1; i--){
            matriz[i][a] = valor++;
        } 
        a++; 
        b--;


    }


    for (int f= 0; f <tamanio; f++){
        for (int i = 0; i < tamanio; i++){
            printf("%i\t",matriz[f][i]);
        }
        printf("\n");
        
    }


    return 0;
}
 

/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 1 ....n
int main(int argc, char const *argv[])

{
    int num;
    int signo=1;
    float suma=0;
    printf ("Ingrese el termino\n");
    scanf ("%i",&num);
    for (int i = 1; i<=num; i++){
        if (i%2==0) {
            signo*=-1;
        }else {
            signo=1;
        }

        if (signo>0) {
            printf ("+");
        }else {
            printf ("-");
        }

        printf ("%i", i);   
        suma = suma+i*signo;
    }
    printf ("\nS=%.f",suma);
    return 0;
} */