//ALGORITMO REALIZADO POR : JOSUE SAUCA 
//PARALELO "B"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void IngresoNumero(int *numero);
float DivisoresPropiosSuma(int numero);
void NumPerfec_Abundan_Defici(float Suma,int numero);
void MensajeSalida();


int main(int argc, char const *argv[]){

    int i, numero;
    float SumaTotal;
    char VolverCiclo;

    do{

        system("@cls||clear");
        printf("\t\t\tBIENVENIDO!!!!!\n");
        printf("PROGRAMA PARA DETERMINAR SI UN NUMERO ES PERFECTO, ABUNDANTE, DEFICIENTE\n");
        IngresoNumero(&numero);
        SumaTotal = DivisoresPropiosSuma(numero);      
        printf("\nPulse (C) para terminar el programa, o pulse cualquier tecla para continuar : ");
        scanf(" %c",&VolverCiclo);

    }while (VolverCiclo != 'c' && VolverCiclo != 'C');
    MensajeSalida();
    return 0;
}

void IngresoNumero(int *numero){
    printf("\nINGRESE UN NUMERO : ");
    scanf("%i",numero);
}

float DivisoresPropiosSuma(int numero){
    int i;
    bool VerificarDivisores;
    float Suma = 0;

    for (i = 1; i <= numero; i++){
        VerificarDivisores = (numero%i==0);
        if (VerificarDivisores){
            if (numero != i){                
                printf(" %i ",i);
                Suma = Suma + i;
            }else{
                NumPerfec_Abundan_Defici(Suma,numero);
            }
        }            
    }
    return Suma;
}


void NumPerfec_Abundan_Defici(float Suma,int numero){

    if (Suma == numero){
        printf("\n %i , Es un numero perfecto",numero);
    }
    if (Suma<numero){
        printf("\n %i ,Es un numero deficiente",numero);       
    }    
    if (Suma > numero){
        printf("\n %i , Es un numero abundante",numero);        
    }
}

void MensajeSalida(){
    printf("\nGRACIAS POR USAR EL PROGRAMA\nVUELVA PRONTO!!!");
    printf("\nALGORITMO REALIZADO POR : JOSUE SAUCA");
    printf("\nPRIMER CICLO PARALELO B");
}





