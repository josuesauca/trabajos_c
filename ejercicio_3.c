#include <stdio.h>
#include <stdlib.h>

int verificar_numero(int num_1,int num_2,int num_3);


int verificar_numero(int num_1,int num_2,int num_3){

    if (num_1>num_2 && num_1>num_3){
        printf("El numero %i es el mayor ",num_1);
    }else{
        if (num_2>num_1 && num_2>num_3){
            printf("El numero %i es el mayor ",num_2);
        }else{
            if(num_3>num_1 && num_3>num_2){
                printf("El numero %i es el mayor ",num_3);
            }
        }
    }
    if(num_1== num_2 && num_1 == num_3&&num_2 == num_1 && num_2 == num_3 &&num_3 == num_2 && num_1 == num_3){
        printf("Estos numero son iguales " ); 
    }
}



int main(){
    int num_1,num_2,num_3;
    int verificar_num;
    printf("Ingrese su primer numero : ");
    scanf("%i",&num_1);
    printf("Ingrese su segundo numero : ");
    scanf("%i",&num_2);
    printf("Ingrese su tercer numero : ");
    scanf("%i",&num_3);
    verificar_num = verificar_numero( num_1, num_2,num_3);
   /* if (num_1>num_2 && num_1>num_3){
        printf("El numero %i es el mayor ",num_1);
    }else{
        if (num_2>num_1 && num_2>num_3){
            printf("El numero %i es el mayor ",num_2);
        }else{           
            if(num_3>num_1 && num_3>num_2){
                printf("El numero %i es el mayor ",num_3);
            }
        }
    }

    if(num_1== num_2 && num_1 == num_3&&num_2 == num_1 && num_2 == num_3 &&num_3 == num_2 && num_1 == num_3){
        printf("Estos numero son iguales " ); 
    }*/

    return 0; 
}