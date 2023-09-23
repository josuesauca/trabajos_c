#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    int limite; 
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
    fflush(stdin);
    int i;
    for(i =1;i<=limite;i+=1){
        printf("%i\t",i);
        if(i%10==0){
            printf("\n");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
