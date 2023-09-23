/*

a[0] = "Cadena 1";
a[1] = "Cadena 2";
a[2] = "Cadena 3";

|------------------------------------------------|
| c | a | d | e | n | a |   | 1 |  ---> String   |   --> a[0] 
|------------------------------------------------|   --> a[1]
| c | a | d | e | n | a |   | 2 |  ---> String   |  



*/
#define _STDIO_EXT_H  

#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>
#include <string.h>
#include <time.h>
#include <ctype.h>



int ingresarLimite();
void ingresarFrase(int longitud, char **arrayString);
void presentarFrase(int longitud, char **arrayString);
int sortearFraseGanadora(int longitud);
void publicarResultado(char **arrayString,int indiceGanador);
int contarVocales(char *oracion,int limite);
int contarConsonantesDeOracion(char *oracion,int limite);
void contarVocales_1(int limite,char **arrayString);


int main(int argc, char const *argv[]){

    // char frases[char frases[]]; -->  NO se puede
    system("@cls||clear");
    int limite;

    limite = ingresarLimite();
    
    char *frases[limite];
    
    printf("\nIngrese las frases que ud conozca\n");
    fflush(stdin);
    ingresarFrase(limite,frases);
    printf("\nFrases ingresadas\n");
    presentarFrase(limite,frases);
    int indiceGanador = sortearFraseGanadora(limite);
    printf("Segundo puesto\n");
    publicarResultado(frases,indiceGanador);

    indiceGanador = sortearFraseGanadora(limite);
    printf("Primer puesto\n");
    publicarResultado(frases,indiceGanador);
    contarVocales_1(limite,frases);

    // strtok(frases," ");


    return 0;
}

int ingresarLimite(){
    //char clearBuffer;
    int limite;
    printf("Cuantas Frases desea Ingresar : ");
    scanf("%i",&limite);
    //scanf("%c",&clearBuffer);
    //__fpurge(stdin);
    return limite;

}
void ingresarFrase(int longitud, char **arrayString){
    int i;
    for(i=0;i<longitud;i++){
        printf("Ingrese frase de posicion [%i] : ",i+1);
        arrayString[i] =(char *)malloc(100);
        fgets(arrayString[i],100,stdin);
    }
}

void presentarFrase(int longitud, char **arrayString){
    int i;
    for(i=0;i<longitud;i++){
        printf("Arreglo de posicion [%i] : ",i+1);
        puts(arrayString[i]);
    }
}


int sortearFraseGanadora(int longitud){
    srand(time(NULL));
    return rand()%longitud;
}

void publicarResultado(char **arrayString,int indiceGanador){
    printf("LA FRASE GANADORA ES [%i]",indiceGanador+1);
    printf("%s\n",arrayString[indiceGanador]);

}


int esVocal(char c){
    int ok =0;
    if (c=='a' || c=='A'){
        ok = 1;
    }
    if (c=='e' || c=='E'){
        ok = 1;
    }
     if (c=='i' || c=='I'){
        ok = 1;
    }
     if (c=='o' || c=='O'){
        ok = 1;
    }
     if (c=='u' || c=='U'){
        ok = 1;
    }
    return ok;
}

int contarVocales(char *oracion,int limite){

    int i;
    int contador  = 0;

    for (i = 0; i < limite; i++){
        if ((esVocal(oracion[i]))){
            contador++;
        }
    }

    return contador;    

}


int contarConsonantesDeOracion(char *oracion,int limite){

    int i;
    int contador  = 0;

    for (i = 0; i < limite; i++){
        if ( (isalpha(oracion[i])) &&  (!esVocal(oracion[i]))){
            contador++;
        }
    }
    
    return contador;    

}


void contarVocales_1(int limite,char **arrayString){
    int i;
    printf("VOCALES EXISTENTES ");
    for (i = 0; i < limite; i++){
        int contador = 0;
        printf("Frase de [%i] : %s",i+1,arrayString[i]);
        contador = contarConsonantesDeOracion(arrayString[i],strlen(arrayString[i]));
        printf("La frase tiene %d vocales",contador);

    }
    
}



/*


#include <string.h>
#include <stdio.h>

int main () {
    
    char str[80] = {"hola como estas"};
    char *token,*juntar;
    int i,j;
    
    token = strtok(str, " ");
    strcpy(juntar, str);
    j = strlen(juntar);
    
    while(token != NULL){
        
        printf(" %s\n", token);
        strcat(juntar,token);
        token = strtok(NULL, " ");
        
    }
    
    i = strlen(juntar);
    printf("%i\n",i-j);
   
    return 0;
}




*/