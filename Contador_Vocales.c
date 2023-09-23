#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int contarVocales(char *cadena);
bool verificarVocal(char caracter);
int contarConsonantes(char *cadena);

int main(){
    system("@cls||clear"); 
    char cadena[100];
    //char *cadena;
    //cadena = malloc(100);
    
    printf("Ingrese la oración que desea verificar: ");
    //scanf("%s", cadena);
    //scanf("%[^\n]", cadena);
    fgets(cadena, sizeof(cadena), stdin);

    //printf("\nUsted ingreso:");
    //puts(cadena);
    //printf("%s\n", cadena);    
    printf ("Nro Vocales en la cadena: %d\n", contarVocales(cadena));
    printf ("Nro Consonantes en la cadena: %d\n", contarConsonantes(cadena));
    

    return 0;
}

bool verificarVocal(char caracter){
    char lower = tolower(caracter);
    bool ok = false;
    if (isalpha(lower)){
        ok = (lower == 'a' || lower == 'e'
            || lower == 'i' || lower == 'o'
            || lower == 'u');        
    }    
    return ok;
}

int contarVocales(char *cadena){
    int longitud = strlen(cadena);    
    int contador = 0;
    int i;
    for ( i = 0; i < longitud; i++){
        bool esVocal = verificarVocal(cadena[i]);
        if (esVocal){
            contador++;
        }
    }
    return contador;
}

int contarConsonantes(char *cadena){
    int longitud = strlen(cadena);    
    int contador = 0;
    int i;
    for ( i = 0; i < longitud; i++){
        bool esLetra = isalpha(cadena[i]);
        if (esLetra){
            bool esVocal = verificarVocal(cadena[i]);
            if (!esVocal){
                contador++;
            }
        }
        
    }
    return contador;
}
