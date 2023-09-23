#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include <stdbool.h> 

int verificar_Vocales  (char palabra [], int longitud);
int verificar_Consonantes (char palabra [], int longitud);
int contar_vocales(char *cadena);
bool verificar_vocales_mas (char cadena);

int main (){
    int vocales;
    int consonantes;
    
    char palabra [60];
    printf ("ingrese la palabra a evaluar:\n");
    fgets  (palabra, sizeof (palabra),stdin);
    int longitud = strlen (palabra);
    vocales = verificar_Vocales (palabra,longitud);
    consonantes=verificar_Consonantes (palabra,longitud);
    printf ("el numero de vocales es: %d ==> ",vocales );
    puts (palabra);
    printf ("el numero de consonantes es: %d ===>",consonantes);
    puts (palabra);
    return 0;


}

int verificar_Vocales  (char palabra [], int longitud){
    int vocales =0;
    int i;
    for (i =0; i < longitud;i++){
        if (palabra [i] == 'a' || palabra [i] == 'i' || palabra [i] == 'e' || palabra [i] == 'o' || palabra [i] == 'u' ){
            vocales ++;
        }
    }
    return vocales;
}

int verificar_Consonantes (char palabra [], int longitud){
    int consonantes =0;
    int vocales=0;
    int i;
    for (i =0; i < longitud -1;i++){
        if (palabra [i] == 'a' || palabra [i] == 'i' || palabra [i] == 'e' || palabra [i] == 'o' || palabra [i] == 'u' ){
            vocales++;
        }
        else {
            consonantes++;
        }
    }
    return consonantes;
}
int contar_vocales(char *cadena){
int longitud = strlen(cadena);
int contador = 0; 
int i;
    for (i = 0;i <longitud ; i ++){
        char lower = tolower (cadena[i]);
        /* if (lower == 'a'||lower == 'e'||lower == 'i'||lower == 'o'||lower == 'u'){
          contador ++;
        } */
        
        lower == 'a'||lower == 'e'||lower == 'i'||lower == 'o'||lower == 'u';{
        contador ++;
        
    }
    return contar_vocales;
}

bool verificar_vocales_mas (char cadena){
    char lower = tolower (cadena);
    bool ok = false;
    if (isalpha(lower)){
        ok = (lower == 'a' || lower == 'e'||lower == 'i' || lower == 'o'||lower == 'u');
    }
    return ok;
    return verificar_Vocales;
}
