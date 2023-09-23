#include <stdio.h>
#include <stdlib.h>

void generarTermino(int *limite);
float sumar(int limite);
int numerador(int numero);
int denominador(int numero);
int exponente(int numero);
float sacar_exponente(float numerador,float denominador,int exponente);

int main(int argc, char const *argv[]){

	system("@cls||clear");	
    char volver_ciclo;
    float suma;
    int limite;

    do{

	    system("@cls||clear");	
        generarTermino(&limite);
        suma = sumar(limite);
        printf("\nS = %.4f",suma);
        printf("\nPulse (C) para terminar el programa, o Cualquier tecla para continuar : ");
        scanf(" %c",&volver_ciclo);
        
    } while (volver_ciclo != 'c' && volver_ciclo != 'C');
    
    return 0;
}


void generarTermino(int *limite){
    printf("Ingrese un Limite : ");
    scanf("%i",limite);
}

float sumar(int limite){

    int numer;
    int denomi;
    int expone;
    float suma = 0;
    float resultado_divi_num_entre_denominador;
    for (size_t i = 1; i <= limite; i++){     

        numer = numerador(i);
        denomi = denominador(i);
        expone = exponente(i);
        printf(" + (%i/%i)^%i ",numer,denomi,expone);
        resultado_divi_num_entre_denominador = sacar_exponente(numer,denomi,expone);
        suma = suma + resultado_divi_num_entre_denominador;
    }
    return suma;

}

int numerador(int numero){
    int nume = 1;
    for (size_t i = 1; i < numero; i++){        
        nume+=2;
    }  
    return nume;
}

int denominador(int numero){
    int denomi = 3;
    for (size_t i = 1; i < numero; i++){
        denomi +=6;
    }
    return denomi;    
}

int exponente(int numero){
    int expo=1;
    for (size_t i = 1; i < numero; i++){
        expo++;
    }
    return expo;
}

float sacar_exponente(float numerador,float denominador,int exponente){
    float resultado = 1;
    for (size_t i = 1; i <= exponente; i++){
        resultado = resultado * (numerador/denominador);
    }    
    return resultado;
}


/*float numerador=1,denominador=3,i=1;
	float suma = 0;
	int signo = 1,limite;
	int k = 1,contador = 1,exponente;
	printf("Ingrese un limite : ");
	scanf("%i",&limite);
	exponente = 1;
	printf("\nS = ");

	do{
		
		printf(" + (%.f/%.f)^%i ",numerador,denominador,exponente);
		suma = suma + (pow((numerador/denominador),exponente)*signo);
		denominador+=6;
		numerador+=2;
		contador++;				
		exponente++;
		i++;

	}while(i<=limite);
	
	printf("\n\nS = %.4f",suma);	*/
