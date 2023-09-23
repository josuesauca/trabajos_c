#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void presentarString(int longitud, char string[]);
void presentarStringHastaCadenaNulo(char *string);


int main(int argc, char const *argv[]){
    system("@cls||clear");

    //char cadena[] = {'H','O','L','A',' ','M','U','N','D','O','\0'};
    //char cadena[] = {"HOLA MUNDO\t!!!"};
    //Api
    char cadena[100];
    scanf("%[^\n]s", cadena);
    printf("\nCon Api de C\n");
    //int longitud = sizeof(cadena)/sizeof(char);
    int longitud = strlen(cadena);
    printf("Longitud de la Cadena : %d\n",longitud);
    printf("1. %s",cadena);
    //printf("\n");
    puts(cadena);
    getchar();

    //presentarString(longitud,cadena);
    presentarString(strlen(cadena),cadena);
    presentarStringHastaCadenaNulo(cadena);

    //char cadena1[30] = {'H','O','L','A',' ','M','U','N','D','O'};
    // char cadena1[30] = {"HOLA MUNDO\t!!!!"};
    char cadena1[300];
    fgets(cadena1, sizeof(cadena1), stdin);

    printf("\nCon Api de C\n");
    longitud = sizeof(cadena1)/sizeof(char);
    //longitud = strlen(cadena1);
    printf("Longitud de la Cadena : %d\n",longitud);
    printf("1. %s",cadena1);
    //printf("\n");
    puts(cadena1);

    // presentarString(longitud,cadena1);
    // presentarStringHastaCadenaNulo(cadena1);
    // free(cadena);
    // free(cadena1);
    printf("\nSin Api de C\n");
    printf("\n");
    puts(cadena);
    puts(cadena1);
    return 0;
}

void presentarString(int longitud, char string[]){
    int i;
    for (i = 0; i < longitud; i++){
        // printf("\n [%i] = %c",i,string[i]);
        printf(" %c ",string[i]);
    }
    printf("\n");
}

void presentarStringHastaCadenaNulo(char *string){
    int i;
    for ( i = 0;string[i] != '\0'; i++){
        // printf("\n [%i] = %c",i,string[i]);
        printf(" %c ",string[i]);
        
    }
    printf("\n");
}


