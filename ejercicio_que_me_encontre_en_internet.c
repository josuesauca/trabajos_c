#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int i,j = 1,contador = 0;
    system("@cls||clear");
    for (i = 0; i <= 9; i++){

        printf("\n%i_%i",i,j);   

        contador++;

        if(contador==2){
            j++;
            contador = 0;
        }
        
    }    
    return 0;
}
