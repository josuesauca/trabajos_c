#include <stdio.h>


int main()
{
    int filas,columnas;
    int matriz[filas][columnas];
    printf("Matriz Igual  \n");
    printf("Ingrese la dimension de las matrices (Filas,Columnas) : ");   
    scanf("%d %d",&filas,&columnas);
    int i,j;
    for(i ;i<filas;i++){
        for(j ;j<columnas;j++){
            printf("Ingrese la posicion fila [%d][%d] : ",filas,columnas);
            scanf("%i",&matriz[filas][columnas]);
            printf("%d\t",matriz[filas][columnas]);

        }
    }    

     for( i ;i<filas;i++){
        for( j ;j<columnas;j++){
            printf("%d\t",matriz[filas][columnas]);

        }
    }    



    return 0;
}
