//S = +(1 / 3)^1 + (3 / 9)^1 – (5 / 15)^2 + (7 / 21)^3 + (9 / 27)^5 - (11 / 33)^8 + (13 / 39)^13 + …

//ALGORITMO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE
//PARALELO "B"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>



void IngresarSerie(int *limite);
long double SumaTerminos(int limite);
void PresentarSerie(float numerador,float denominador,int fibo,int signo);
void MensajeSalida();

int main(int argc, char const *argv[]){

    int limite;
    char continuar;
    double Suma;
    system("@cls||clear");

    do{
        
        system("@cls||clear");
        IngresarSerie(&limite);
        Suma = SumaTerminos(limite);
        printf("\nS = %lf",(Suma));
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&continuar);

    } while (continuar != 'c' && continuar != 'C');
    MensajeSalida();
 
    return 0;
}


void IngresarSerie(int *limite){//Ingresar el Numero de Terminos
    printf("Ingres en limite : ");
    scanf("%i",limite);
}

long double SumaTerminos(int limite){  

    float numerador;
    float denominador;
    int fibo ,a ,b ,i; 
    long double Suma = 0;
    int signo = 1;
    bool verificar;

    numerador = 1;
    denominador = 3;
    fibo = 1;
    a = 1;
    b = 0;

    for (i = 1; i <= limite; i++){

        verificar = (i%3==0);
        (verificar)?(signo*=-1):(signo=1);   //Verificar el Signo      
        fibo = a+ b;                        //Serie Fibonacci
        PresentarSerie(numerador,denominador,fibo,signo);
        Suma = Suma + (pow((numerador/denominador),fibo)*signo); //Hacer los calculos respectivos
        a = b;
        b = fibo;
        numerador+=2;//Aumentar el numerador
        denominador+=6;//Aumentar el denominador

    }

    return Suma;
}

void PresentarSerie(float numerador,float denominador,int fibo,int signo){ //Funcion para Presentar la Serie

    (signo>0)?printf(" + "):printf(" - ");
    printf(" (%.f/%.f)^%i ",numerador,denominador,fibo);

}

void MensajeSalida(){

    printf("\nGRACIAS POR USAR NUESTRO PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO POR : MELISSA TUZA, JOSUE SAUCA , ELENA OCHOA, GERARDO QUIZPHE");
    printf("\nPRIMER CICLO PARALELO B");
    
}
