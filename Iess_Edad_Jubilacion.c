//Algoritmo hecho por: Jhonatana Sefla,Josue Sauca,Juan Castillo, Nathaly Bravo 
//Primer Ciclo "B"
#include <stdio.h>
#include <stdlib.h>
int main(){
    int Edad,Anio_Trabajo;
    system("@cls||clear");
    printf("Algoritmo Realizado por: Josue Sauca");
    printf("\n\n=============================Bienvenido============================");
    printf("\nPrograma para determinar el tipo de jubilaci%cn de una Persona\n",162);//Impresion ó codio ASCII
    printf("\n==============Bienvenido==================\n");
    printf("Ingrese la Edad del Usuario: \t\t  ");
    scanf("%i",&Edad);
    printf("Ingrese los A%cos que Trabajo del Usuario: ",164);//Impresion ñ codio ASCII
    scanf("%i",&Anio_Trabajo);
    printf("\n");
    if((Edad>=60)&&(Anio_Trabajo<25)){
        printf("\nUsted se va a Jubilar por Edad\n");
    }else{
        if ((Edad<60)&&(Anio_Trabajo>=25)){
            printf("\nUsted se va a Jubilar por Antig%cedad  Joven",129);//Impresion ü codio ASCII
        }else{
            if ((Edad>=60)&&(Anio_Trabajo>=25)){
                printf("\nUsted se va a Jubilar por Antig%cedad  Adulta\n",129);//Impresion ü codio ASCII
            }else{
                printf("No cumple con la Edad ni los A%cos de Trabajo Suficientes para Jubilarse\n",164);//Impresion ñ codio ASCII
            }   
        }   
    }
    return 0;
}