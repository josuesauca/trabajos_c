#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

int ingresarTermino();
float sumar(int nTerminos);
int generarTermino(int numero);
int verificarPrimo(int numero);
float factorial(int numero);
//unsigned long potencia (unsigned long base, int exponente);
unsigned long potencia(unsigned long base,int j);


int main(int argc, char const *argv[]){

    int nTerminos;
    char volverCiclo;
    do{

        float suma;
        system("@cls||clear");
        nTerminos = ingresarTermino();
        suma = sumar(nTerminos);
        printf("\nS = %.f",suma);
        
        printf("\nPulse (S) para terminar el programa, o Cualquier tecla para continuar : ");
        scanf(" %c",&volverCiclo);

    } while(volverCiclo != 'S' && volverCiclo != 's');
    printf("\nGRACIAS POR USAR EL PROGRAMA \nVUELVA PRONTO!!!");

    return 0;
}

int ingresarTermino(){
    int nTerminos;
    printf("Ingrese un limite : ");
    scanf("%i",&nTerminos);
    return nTerminos;
}

float sumar(int nTerminos){
    float suma = 0,fact = 1;
    int termino = 2;
    int pot ;
    for (size_t  i = 1; i <=nTerminos ; i++){
        termino = generarTermino(termino);
        printf(" + (%i!)^%i ",termino,i);
        //printf(" + %f ",fact);
        fact = factorial(termino);
        pot = potencia(fact,i); 
        suma = suma + pot;
        termino++;
    }
    return suma;
}

int generarTermino(int numero){
    bool esPrimo;

    do{
        esPrimo = verificarPrimo(numero);
        if (esPrimo!=true){
            numero++;
        }        

    } while (esPrimo!= true);
    return numero;
}

int verificarPrimo(int numero){
    bool esPrimo = true;
    int i = 2;
    while (esPrimo && i<numero){
        /* if (numero % i == 0){
            esPrimo = false;
        } */
        esPrimo = !(numero %i ==0 );
        i++;
    }
    return esPrimo;
}

float factorial(int numero){
    float facto = 1;
    for (size_t i = 1; i <= numero; i++)    {
        facto = facto * i;
    }
    return facto;
}


 unsigned long potencia(unsigned long base,int j){
    unsigned long pot = 1;
    for (ptrdiff_t i = 1; i <= j; i++){
        pot = pot * base;
    }
    return pot; 
}
 

/* unsigned long potencia (unsigned long base, int exponente){
    unsigned long pot = 1;
    
    for (int i = 1; i <= exponente; i++){
        pot = pot * base;
    }
    
    return pot;
} */