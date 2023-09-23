#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int IngresarLimite();
double SumaTotal(int limite);

int main(int argc, char const *argv[]){

    int ingreso;
    double Suma;
    char continuar;
    system("@cls||clear");
    do{

        system("@cls||clear");

        ingreso = IngresarLimite();
        Suma = SumaTotal (ingreso);
        printf("\n%.2lf",Suma);
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&continuar);

    }  while (continuar != 'c' && continuar != 'C');
        
    return 0;
}


int IngresarLimite(){
    int limite;
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
    return limite;
}


double SumaTotal(int limite){
    int i = 1;
    double SumaTo = 0;
    int signo = 1;
    int contador = 1;
    int conta =1 ,k=1;

    do {
           
        (signo>0)?printf(" + "):printf(" - ");

        if(k<conta){
            k++;
        }else{
            signo *=-1;
            conta++;
            k=1;
        }
               
        printf(" %i^2 ",i);
        SumaTo = SumaTo + (pow(i,2)*signo);
        contador++; 
        i++;
    } while (i<=limite);
    
    return SumaTo;

}
