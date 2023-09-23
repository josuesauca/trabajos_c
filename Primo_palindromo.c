#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

bool primo(long a);


bool primo(long a){
    int cont = 0;
    long i;
    for ( i = 2;i<=sqrt(a);i++){
        if(a%i==0){
            cont = 1; 
            break;
        }

    }
    if(cont !=0 ){
        return false;
    }else{
        return true;
    }

}

int main(){

    long a,b;
    while(&a,&b){
        int casi=0;
        long j;
        for( j=a;j<=b;j++){

            long e;
            if(primo(j)){
                long clon = j;
                e=0;
                while(clon!=0){
                    int r = clon%10;
                    e = e*10+r;
                    clon = clon /10;
                }  if(primo(e)){

                    casi++;
            }

            }
           
           
        }
         printf("%i ",casi);
    }

	getchar();
    return 0 ;

}
