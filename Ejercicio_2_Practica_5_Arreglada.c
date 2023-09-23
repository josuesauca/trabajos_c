//S = +(1 / 3)^1 + (3 / 9)^1 – (5 / 15)^2 + (7 / 21)^3 + (9 / 27)^5 - (11 / 33)^8 + (13 / 39)^13 + …

//ALGORITMO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE
//PARALELO "B"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


void IngresarSerie(int *limite);
double SumaTerminos(int limite);
int serieFibo (int limite);
float numeradorIncremento(float *numerador);
float denominadorIncremento(float *denominador);
int signo(int i,int sig);
void PresentarSerie(float numerador,float denominador,int fibo,int signo);
void MensajeSalida();

int main(int argc, char const *argv[]){

    int limite;
    char continuar;
    double Suma;

    do{
        
        system("@cls||clear");
        IngresarSerie(&limite);
        Suma = SumaTerminos(limite);
        printf("\nS = %lf",Suma);
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&continuar);

    } while (continuar != 'c' && continuar != 'C');
    MensajeSalida();
 
    return 0;
}

void IngresarSerie(int *limite){
    printf("Ingrese en limite : ");
    scanf("%i",limite);
}

double SumaTerminos(int limite){  

    float numerador,denominador;
    int fibo,i; 
    double Suma = 0;
    int sig = 1;
    numerador = 1;
    denominador = 3;

    for (i = 1; i <= limite; i++){

        sig  = signo(i,sig);            
        fibo = serieFibo(i);
        PresentarSerie(numerador,denominador,fibo,sig);
        Suma = Suma + (pow((numerador/denominador),fibo)*sig); 
        numerador = numeradorIncremento(&numerador);
        denominador = denominadorIncremento(&denominador); 

    }
    return Suma;
}

int serieFibo (int limite){
    int i = 1;

    int fibo = 1 ,a=1 ,b=0; 

    while(i<=limite){
        fibo = a+ b;   
        a = b;
        b = fibo;
        i++;
    }
    return fibo;

}

float numeradorIncremento(float *numerador){
    float num = *numerador + 2;
    return num;
}

float denominadorIncremento(float *denominador){
    float den = *denominador + 6;
    return den;
}

int signo(int i,int sig){

    bool verificar = (i%3==0);
    if(verificar){
        return (sig*=-1);
    }else{
        return (sig=1);
    }    
}

void PresentarSerie(float numerador,float denominador,int fibo,int signo){ 
    if (signo>0){
        printf(" + ");
    }else{
        printf(" - ");
    }
    printf(" (%.f/%.f)^%i ",numerador,denominador,fibo);
}

void MensajeSalida(){
    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");
    
}
