#include <stdio.h>
#include <stdlib.h>

int main(){
    int Edad,Anio_Trabajo;
    system("@cls||clear");
    printf("Ingrese la Edad del Usario : ");
    scanf("%i",&Edad);
    printf("Ingrese la Anios que Trabajo : ");
    scanf("%i",&Anio_Trabajo);

    if((Edad>=60)&&(Anio_Trabajo<25)){
        printf("\nUsted se Jubila por Edad");
    }else{
        if((Edad<60)&&(Anio_Trabajo>=25)){
            printf("\nUsted de Jubila por Antiguedad Joven");
        }else{
            if((Edad>=60)&&(Anio_Trabajo>=25)){
                printf("\nUsted se Jubila por Antiguedad Adulta");
            }
        }
    }
    return 0;
}