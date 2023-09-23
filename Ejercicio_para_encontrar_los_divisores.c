#include <stdio.h>
#include <stdlib.h>


int verificar_divisores(int i,int num,int cont);
void verificar_divisores_1(int i,int num);




int verificar_divisores(int i,int num,int cont){
	
    for( i = 1;i<=num;i++){

        if(num%i==0){

            /*printf("\nSus divisores son : %i ",i);
            cont++;*/

        }
    }
    
    //printf("\nTiene %i divisores",cont);
    return cont;

}

int main(){

    int num,cont;
    int verificar; 
    printf("Ingrese su numero : ");
    scanf("%i",&num);
	int i;
    for( i = 1;i<=num;i++){
        /*verificar = verificar_divisores(i,num,cont); 
        break;*/
        verificar_divisores_1( i, num); 
        cont++;
        break;
    }
    printf("\nTiene %i divisores",cont);
    return 0; 
}


void verificar_divisores_1(int i,int num){

    for( i = 1;i<=num;i++){

        if(num%i==0){

            printf("\nSus divisores son : %i ",i);
           
        }
    }
}
