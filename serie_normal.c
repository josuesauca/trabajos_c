#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int limite,signo = 1;
    int i;
    system("@cls||clear");
    printf("Ingrese un limite : ");
    scanf("%i",&limite);

    for (size_t i = 1; i <= limite; i++){

        if(i%3==0){
            signo = signo * -1;            
        }else{
            signo = 1;
        }
        
        if(signo>0){
            printf(" + ");
        }else{
            printf(" - ");
        }


  
        
        
    }
    
    
    return 0;
}
