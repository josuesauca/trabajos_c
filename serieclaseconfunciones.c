#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int potencia (int base, int exponente);
int factorial (int numero);
bool verificarPrimo (int numero);
int generarNumeroPrimo (int numero);
void presentarTermino (int numerador, int denominador, int signo, int exponente);
void generarFibo (int *actual, int *anterior);
void generarSigno (int *contadorDeSigno, int *signo);
double operarTermino (int numerador, int denominador, int signo, int exponente);

int main (){
    system ("@cls||clear");  
    int nTerminos;
    printf ("Ingrese el numero de terminos: ");
    scanf ("%i", &nTerminos);
    int numeroPrimo, signo, fibo;
    double suma = 0;
    numeroPrimo = 2;
    signo = 1;
    fibo = 1;
    int anteriorFibo = 0;
    int contadorDeSigno = 0;
    for (int i = 1; i <= nTerminos ; i++){
        generarSigno (&contadorDeSigno, &signo);
        numeroPrimo = generarNumeroPrimo (numeroPrimo);
        presentarTermino (numeroPrimo, fibo, signo, i);
        suma = suma + operarTermino (numeroPrimo, fibo, signo, i);
        
        numeroPrimo++;
        generarFibo(&fibo, &anteriorFibo);
    }    
    printf("\n S = %lf", suma); 
    return 0;
}

int potencia (int base, int exponente){
    int potencia = 1;
    for (int i = 1; i <= exponente; i++){
        potencia = potencia * base;
    }
    return potencia ;
}

/* 
Funcion que me permita calcular el factorial de un numero 
*/
int factorial (int numero){
    int factorial = 1;
    for (int i = 1; i <= numero; i++){
        factorial = factorial * i;
    }
    return factorial ;
}

bool verificarPrimo (int numero){
    int cont = 2;
    bool esPrimo = true;
    while (cont<numero && esPrimo==true){
        if ((numero%cont)==0){
            esPrimo=false;
        }
        cont++;            
    }
    return esPrimo;
}

/*
Va a devolver un numero primo apartir del numero recibido como parametro;
en caso de que sea un numero primo devolvera el mismo, 
de lo contrario me devolvera el siguientre numero primo.
*/
int generarNumeroPrimo (int numero){
    bool esPrimo;
    do{
        esPrimo = verificarPrimo(numero);
        if (!esPrimo){
            numero++;
        }
    } while(!esPrimo);
    return numero;
}
void presentarTermino (int numerador, int denominador, int signo, int exponente){
    if (signo > 0){
        printf (" + ");
    }else{
        printf (" - ");
    }
    printf("%d! / %d", numerador, denominador);
    if (exponente > 1){
        printf("^%d", exponente);
    }
}
void generarFibo (int *actual, int *anterior){
    int fibo = (int)(*actual + *anterior);
    *anterior = *actual;
    *actual = fibo;
}
void generarSigno (int *contadorDeSigno, int *signo){
    if (*contadorDeSigno > 1){
        *signo = (int)(*signo * (-1));
        *contadorDeSigno = (int)1 ;
    }else{
        *contadorDeSigno = (int)(*contadorDeSigno + 1);
    }
}
double operarTermino (int numerador, int denominador, int signo, int exponente){
    int fact = factorial(numerador);
    int pot = potencia (denominador, exponente);
    double termino = ((double)(fact / pot) * signo);
    return termino;
}