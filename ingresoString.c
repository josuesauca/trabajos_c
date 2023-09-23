//Ingresar los nombres y apelldios de una persona de teclado
/*
1 Obtener la longitud de los elementos de cada cadena 
2. Determinar si las dos cadenas son iguales
3. Unir las Dos cadenas 

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char nombres[100] ,  apellidos[100];
    system("@cls||clear");
    printf("Ingrese los Nombres de la Persona : ");
    //fgets(nombres,sizeof(nombres),stdin);
    scanf("%[^\n]s", nombres);
    //strtok(nombres,"\n");
    printf("Ingrese los Apellidos de la Persona : ");
    fflush(stdin);
    //fgets(apellidos,sizeof(apellidos),stdin);
    scanf("%[^\n]s", apellidos);
    
    printf("\n----> La longitd de la cadena ingresada es : %ld",(int)strlen(nombres));    
    printf("\n----> La longitd de la cadena ingresada es : %ld",strlen(apellidos));

    bool verificar = strcmp(nombres,apellidos);
    char concatenar[200];
    
    if(strcasecmp(/* strupr */(nombres),/* strupr */(apellidos))==0){
        printf("\nSus Nombres y Apellidos son Iguales\n ");
    }else{
        printf("\nSus Nombres y Apellidos no son Iguales\n ");
    } 


    // strcasecmp();
    printf("\nNombres y Apellidos\n");
    char *fullName = strcat(nombres,apellidos);
    //puts(fullName);
    printf("\nNombres y apellidos : %s\n",fullName);
    /* puts(nombres);
    puts(apellidos); */

    return 0;
}
