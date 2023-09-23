//S = (2/2)! + (4/3)! + (6/5)! + (8/7)! – (1/11)! - (3/13)! – (5/17)! – (7/19)! – (9/23)! + (2/29)! + (4/31)! + …

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int PresentarSerie(int *limite);
bool verificarPrimo (int numero);
double generarNumeroPrimo (int numero);
double factorial( double division);
double Suma(int limite);



int main(int argc, char const *argv[]){
    
    system("@cls||clear");
    int limite;
    int serie = PresentarSerie(&limite);
    double SumaTotal;
    SumaTotal = Suma(limite);
    printf("\nS = %.3lf",SumaTotal);   
    return 0;
}

int PresentarSerie(int *limite){
    printf("Ingrese un limite : ");
    scanf("%i",limite);
    return (*limite);
}


double Suma(int limite){

    int i;
    int signo=1,limitesi=4,contador=1;
    double primo = 2;
    double numerador = 2, SumaT = 0, division;

    for (i = 1; i <=limite; i++){

        primo = generarNumeroPrimo(primo);

        if (signo>0){
            printf(" + ");        
        }else{
            printf(" - ");            
        }
        
        printf(" (%.lf/%.lf)! ",numerador,primo);
        division = (numerador/primo);
        //SumaT = SumaT + (division*sqrt(3.1416)*signo);     
        //SumaT = SumaT + (pow((1+1/(division)),(1+division))*signo);     
        SumaT = SumaT + (pow(division,division-0.75)*signo);     
       //SumaT = SumaT + (exp((division)/(1+division))*signo);   

       //SumaT = SumaT + 3.1416/sin(3.1416*division)* signo;

        if(contador<limitesi){
            contador++;
            numerador+=2;
        } else{
            if (signo>0){
                numerador = 1;        
            }else{
                numerador = 2;          
            }
            signo*=-1;
            limitesi++;
            contador=1;            
        }
        primo++;
    }
    return (SumaT);
}

double factorial( double division){
    double fac=1;
    for (int  i = 1; i <= division; i++){
        fac = fac *i;        
    }
    return fac;
}

double generarNumeroPrimo(int numero){
    bool esPrimo;
    do{
        esPrimo = verificarPrimo(numero);
        if (!esPrimo){
            numero++;
        }
    } while(!esPrimo);
    return numero;
}

bool verificarPrimo(int numero){
    int cont = 2;
    bool esPrimo = true;
    int j;
    for(j = 2; (j < numero && esPrimo); j++) {
        esPrimo = !(numero%j==0);        
    }
    return esPrimo;
}