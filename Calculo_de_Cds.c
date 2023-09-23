/*Algoritmo hecho por :Josue Alejandro Sauca Pucha
Primer Ciclo "B"

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    const int GigaBytes = 1024;
    const int MegaBytes = 700;
    float Total_Cds,GigaBytes_Ingresados,Total_GigaBytes;
    system("@cls||clear");
    printf("================Bienvenido=======================\n");
    printf("Ingrese la Cantidad de Memoria en GigaBytes : ");
    scanf("%f",&GigaBytes_Ingresados);  

    Total_GigaBytes = (GigaBytes_Ingresados * GigaBytes);
    Total_Cds = (Total_GigaBytes / MegaBytes);

    printf("\nUsted quiere almacenar %.2f MegaBytes",Total_GigaBytes);
    printf("\nEl Total de Cds a usar es : %.f ",ceil(Total_Cds));
    printf("\n================================================");
    return 0;
}

