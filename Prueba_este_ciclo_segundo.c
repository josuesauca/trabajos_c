#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void IngresarNumeradoDenominador(int *numerador,int *denominador);
int mcm(int numerador, int denominador);
void FraccionMixtaPre(bool *FraccionMixta,int numerador,int denominador);

int main(int argc, char const *argv[]){
    int numerador, denominador, menor,i;
    char VolverCiclo;
    bool FraccionMixta;
    do{ 

        system("@cls||clear");
        IngresarNumeradoDenominador(&numerador, &denominador);

        for (i = 2; i <= (menor = mcm(numerador, denominador)); i++){
            while(numerador%i==0 && denominador%i==0){
                numerador=numerador/i;
                denominador=denominador/i;
            }
        } 

        FraccionMixta = (numerador>=denominador);

        if (FraccionMixta){
            FraccionMixtaPre(&FraccionMixta,numerador,denominador);
        }
        
        printf("\nFraccion Simplificada:");
        printf("\n  %i\n-----\n  %i", numerador,denominador);
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&VolverCiclo); 
    } while(VolverCiclo != 'c' && VolverCiclo != 'C');
    return 0;
}

void IngresarNumeradoDenominador(int *numerador,int *denominador){
    printf("Ingrese el Numerador: ");
    scanf("%i", numerador);
    printf("Ingrese el Denominador : ");
    scanf("%i", denominador);
}

int mcm(int numerador, int denominador){
    int auxiliar,mcd,resto,temporal,minimo;

    if(numerador<denominador){	
		temporal=numerador;
		numerador=denominador;
		denominador=temporal;
	}
    
    mcd = numerador;
    auxiliar = denominador;
    while(auxiliar!=0){
		resto= mcd % auxiliar;
		mcd=auxiliar;
		auxiliar=resto;
	}
	return (minimo  = (numerador*denominador)/mcd);
    
}

void FraccionMixtaPre(bool *FraccionMixta,int numerador,int denominador){
    int Division, Resto;
    printf("\nFraccion Mixta ");
    if (FraccionMixta){
        Division = numerador/denominador;
        Resto = numerador % denominador;
        printf("\n    %i\n",Resto);
        printf("%i ----\n",Division);
        printf("    %i\n",denominador);   
    }    
}