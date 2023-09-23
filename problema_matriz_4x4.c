#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int matriz[4][4];
    int i,j;
    system("@cls||clear");
    for (i = 0; i < 4;i++){
        for ( j = 0; j < 4; j++) {
            bool ok;
            do{               
                ok = false; 
                if(matriz[0][0]){
                    matriz[0][0] = 0;
                }else{                
                    if(matriz[i][j] == matriz[3][3]){
                        matriz[3][3] = 0;
                    }else{
                        printf("Digite la posicion [%i][%i] : ",i,j);
                        scanf("%i",&matriz[i][j]);                        
                    }
                }
                ok = (matriz[i][j]>1||matriz[i][j]<0);
                if(ok){
                    printf("Por Favor Ingrese Valores Correctos..Intente otra vez\n");
                }
            }while(ok);
        }        
    }
    
    //system("@cls||clear");
    printf("\n\n");
    for (i = 0; i < 4;i++){
        for ( j = 0; j < 4; j++) {
            printf("%i\t",matriz[i][j]);
        } 
        printf("\n");       
    }
    return 0;
}
