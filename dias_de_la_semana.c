/*ingresar un numero por teclado que me permita mostrar los dias de la semana de tal manera que cuando ingrese el uno responda el dia lunes y si ingreso el 7 corresponde el dia domingo
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int dias;
    system("@cls||clear");
    printf("Digite un un numero entre 1  y 7 para mostrar los dias de la semana :");
    scanf("%i",&dias);

    if(dias==1){
        printf("\nHoy es Lunes");
    }else{
        if(dias==2){
            printf("\nHoy en Martes");
        }else{
            if(dias==3){
                printf("\nHoy es Miercoles");
            }else{
                if(dias==4){
                    printf("\nHoy es Jueves");
                }else{
                    if(dias==5){
                        printf("\nHoy es Viernes");
                    }else{
                        if(dias==6){
                            printf("\nHoy en Sabado");
                        }else{
                            if(dias==7){
                                printf("\nHoy es Domingo");
                            }else{
                                printf("No existe tal dia");
                            }
                        }
                    }
                }
            }
        }
    }
    
    





    return 0;
}