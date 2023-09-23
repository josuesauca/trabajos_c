//Paso por valor 

#include <stdio.h> 

//int pow(int arg, int exp);

int cuenta_Caracteres(char * cadena);

int main(){

    char cadena[] = "Hola mundo! ";
    printf("Longitud de la cadena :  %d\n ",cuenta_Caracteres(cadena));
    /*int res = pow(2,3);
    printf("EL VALOR DE 2 AL CUBO ES : %d",res);*/
    return 0;
}

/*int pow(int arg, int exp){
    int i,res = 1;

    for (i = 0;i<exp;i++){
        res*= arg;
    }
    return res;
}*/

int cuenta_Caracteres(char * cadena){
    int i=0;
    while (cadena [i]!= '\0') {
        i++;
    }
    return i ;
    
}