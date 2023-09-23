
#include <stdio.h>
#include <stdlib.h>


void Verificar_Primo();

typedef struct Num_Primo {
    int  n, d;
    int es_primo;

}Primo;


void Verificar_Primo(){
Primo verificar_Primo;
    Primo Datos;
    int  primos_por_mostrar;
    system("@cls||clear");
    printf("Cuantos primos desea mostrar: ");
    scanf("%d",&primos_por_mostrar);

    Datos.n = 2;
    while (primos_por_mostrar > 0) {

        /* determinar si n es primo */
        Datos.es_primo = 1;
        for (Datos.d = 2; Datos.d <Datos.n; ++Datos.d) {
            if ( Datos.n % Datos.d == 0) {
                Datos.es_primo = 0;
                //break;
            }
        }

        /* mostrar el numero
         * y actualizar el contador */
        if (Datos.es_primo==1) {
            printf("%d ", Datos.n);
            primos_por_mostrar--;
            Datos.n++;
        }else{
            Datos.n++;
        }
        //primos_por_mostrar--;
        //Datos.n++;
    }

    printf("\n");
    
}



int main(){

    Verificar_Primo();

    return 0; 
    

}
