#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int matris[10] = {1,2,3,4,5,6,7,8,9,0};
    int i,j = 10,mitad,m,d;
    i = 1;
    j = m;
    d = 5;


    while (i<=j){
        mitad = i+j / 2;
        if (matris[i] == d){
            return matris;
        }

        if(i[matris]<d){
            i = matris+1;
        }else{
            j = mitad -1;
        }
        
    }
    return m+1;
        

    printf("%i",mitad);
    
    return 0;
}
