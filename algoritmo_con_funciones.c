#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,numero2,residuo;
    int c;
    char a[100],b[100];
    int *i;

    printf("INGRESE SU PRIMER NUMERO BINARIO ");
    scanf("%s",&numero);
    printf("INGRESE SU SEGUNDO NUMERO BINARIO ");
    scanf("%s",&numero2);
    for(int i =numero;i>=0;i--){
        if(a[i]+b[i]+c=0){
        }
        residuo[i]=0;
        c=0;
    }
    if(a[i]+b[i]+c=1){
        residuo[i]=1;
        c=0;
    }
    if(a[i]+b[i]+c=2){
        residuo[i]=0;
        c=1;
    }
    if(a[i]+b[i]+c=3){
        residuo[i]=1;
        c=1;
    }


    printf(" %i ",c);


    return 0;
}