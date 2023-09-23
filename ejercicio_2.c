#include <stdio.h> 
#include <stdlib.h>

void verificarnumero(int num_1,int num_2);


void verificarnumero(int num_1,int num_2){
    if(num_1>num_2){
        printf("EL numero %i es el mayor ",num_1);

    }else{
         printf("EL numero %i es el mayor ",num_2);
    }
}

int main(){
    int num_1,num_2;
    printf("Ingrese su primer numero : ");
    scanf("%i",&num_1);
    printf("Ingrese su segundo numero : ");
    scanf("%i",&num_2);

    /*if(num_1>num_2){
        printf("EL numero %i es el mayor ",num_1);

    }else{
         printf("EL numero %i es el mayor ",num_2);

    }*/
    verificarnumero(num_1,num_2);

    return 0; 
}
