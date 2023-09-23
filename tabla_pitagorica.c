


#include <stdio.h>
#include <stdlib.h>

int main(){
    char continuar;
    int numeroTabla, producto;
    do {
        // Limpiar pantalla
        system("clear");  // UNIX - GNU/LINUX
        //system("cls");  // WINDOWS - DOS
        printf("************ TABLA DE MULTIPLICAR PITAGÓRICA ****************\n");
        printf("Hasta que tabla desea mostrar? ");    
        scanf("%d", &numeroTabla);
        printf("************ TABLA DE MULTIPLICAR PITAGÓRICA HASTA %d****************\n", numeroTabla);
    	int i,j;
        for (i=0; i <= numeroTabla; i++){
            for ( j=0; j <= numeroTabla; j++){
                if (i == 0){
                    if (j == 0){
                        printf("X\t");
                    } else {
                        printf("%d\t", j);
                    }               
                } else {
                    if (j == 0){
                        printf("%d\t", i);
                    } else {
                        producto = i * j;  
                        printf("%d\t", producto);
                    }                    
                }            
            }
            printf("\n");
        }
        printf("(C) para cancelar la ejecución, cualquier tecla para continuar.. Que acción desea realizar?\n");        
        scanf(" %c", &continuar);
        //printf("Tecleo usted %c para continuar? ", continuar);
        //putchar(continuar);
        
        
    } while (continuar != 'C' && continuar != 'c');
    printf("!!GRACIAS POR USAR NUESTRO PROGRAMA!!!\n");        
    getchar();
    return 0;
}
