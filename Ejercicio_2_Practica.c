
//S = 2! /1 + 3! /1^2 – 5! / 2^3 – 7! / 3^4 + 11! / 5^5 + 13! /8^6 – 17! / 13^7 - …..


//ALGORITMO REALIZADO POR : JOSUE SAUCA, JUAN CASTILLO , DAVID PALACIOS, ELENA OCHOA
//PRIMER CICLO "B"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void IngresarSerie(int *limite);
double Suma(int limite);
double FactorialPrimo(int numPrimo);
float NumPrimo(int primo);
float generarPrimo(int numero);
int VerificarPrimo(int primo);

int main(int argc, char const *argv[]){

    int limite;
    double SumaTotal ;
    char continuar;
    system("@cls||clear");

    do{

        system("@cls||clear");
        IngresarSerie(&limite);
        printf("\nS = ");
        SumaTotal = Suma(limite);
        printf("\nS = %.2lf\n",SumaTotal);
        printf("\nPulse (S) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&continuar);

    } while (continuar != 's' && continuar != 'S');

    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : JOSUE SAUCA, JUAN CASTILLO , DAVID PALACIOS, ELENA OCHOA");
    printf("\nPRIMER CICLO PARALELO B");
    return 0;
}

void IngresarSerie(int *limite){
    printf("Ingrese un Limite : ");
    scanf("%i",limite);
}

double Suma(int limite){

    int primo = 2;
    bool ValidarPrimo;
    double SumaTo = 0;
    double factorial;
    int fibo = 0 , a  = 1 ,b = 0;
    int signo = 1,contador = 1;

    for (int i = 1; i <= limite; i++){

        if(signo>0){
            printf(" + ");
        }else{
            printf(" - ");
        }
        
        primo = generarPrimo(primo);
        factorial = FactorialPrimo(primo);

        fibo = a + b;
        a = b;
        b = fibo;

        printf(" %i!/%i^%i ",primo,fibo,i);

        SumaTo = SumaTo +((factorial)/pow(fibo,i)*signo);
        primo++;
        contador++;

        if(contador>2){
            signo = signo*(-1);
            contador = 1;
        }

    }
    return SumaTo;
}

double FactorialPrimo(int numPrimo){

    double FactoPrimo = 1;
    for (int i = 1; i <= numPrimo; i++){
        FactoPrimo = FactoPrimo * i;
    }
    return FactoPrimo;
}

int VerificarPrimo(int numero){

    bool esPrimo = true;
    for (int j = 2;(j< numero && esPrimo); j++){
        if (numero%j == 0){
            esPrimo = false;
        }  
    }
    return esPrimo;
}

float generarPrimo(int numero){

    bool esPrimo;
    do{
        esPrimo = VerificarPrimo(numero);
        if (esPrimo!=true){
            numero++;
        }
    }while(!esPrimo);
       
    return numero;
}