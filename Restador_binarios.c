#include<stdio.h>
#include<stdlib.h>

int * ingresarNumBinario(int longitud, char *nombreId);
void presentarBinario(int longitud, int *array);
int * sumar(int a[], int *b, int longitud);
int longitudArray(int *array);

int main(){
    system("@cls||clear"); 
    int longitud = 5;
    //int a[longitud];
    //int b[longitud];
    //ingresarNumBinario(longitud, a, "sumandoA");
    //ingresarNumBinario(longitud, b, "sumandoB");

    int *a = ingresarNumBinario(longitud, "sumandoA");
    int *b = ingresarNumBinario(longitud, "sumandoB");
    int *rta = sumar(a,b,longitud);
    
    printf("PRESENTANDO ARREGLOS INGRESADOS\n");
    presentarBinario(longitud, a);
    printf("+\n");
    presentarBinario(longitud, b);
    printf("===============\n");
    presentarBinario(longitud+1, rta);
    return 0;
}

int * ingresarNumBinario(int longitud, char *nombreId){
    //static int array[9999];
    int *array = (int *)malloc(longitud * sizeof(int));
    for (int i = 0; i < longitud; i++){
        int ok;
        int bufferIn;
        do{
            printf("Ingrese el valor sobre %s[%d]: ", nombreId, i);
            scanf("%d", &bufferIn);
            ok =  (bufferIn > 1 || bufferIn < 0);
            if (ok == 1){
                printf("Upss!!.. número NO pertence al sistema binario... Intente otra vez!\n");
            }
        }while (ok == 1);
        array[i] = bufferIn;
    }
    return array;
}

int longitudArray(int *array){
    // Memoria ocupada por todo el arreglo[]
    int memoriaTodoArreglo =  sizeof(array);
    // Memoria ocupada por el primer elemento del arreglo
    //int memoriaDelTipoArreglo = sizeof(array[0]);
    int memoriaDelTipoArreglo = sizeof(int);
    printf("memoriaTodoArreglo: %d\n", memoriaTodoArreglo);
    printf("memoriaDelTipoArreglo: %d\n", memoriaDelTipoArreglo);
    return memoriaTodoArreglo / memoriaDelTipoArreglo;
}

int * sumar(int a[], int *b, int longitud){
    int *array = (int *)malloc(longitud+1 * sizeof(int));
    int acarreo =0;
    for (int i = longitud - 1;i >= 0; i--){
        int suma = acarreo + a [i] + b[i];
        switch (suma){
            case 1:
                array [i-1]=1;
                acarreo =0;
                break;
            case 2:
                array[i-1]=0;
                acarreo = 1;
                break;
            case 3:
                array[i-1]=1;
                acarreo = -1;
                break;
            default:
                array[i-1]=0;

        }
    }
    array[0]=acarreo;
    return array;
}

void presentarBinario(int longitud, int *array){
    for (int i = 0; i < longitud; i++){
        //printf("%d", array[i]);        
        printf("%d", *(array+i));        
    }
    printf("\n");
}

/*
void ingresarNumBinario(int longitud, int array[], char *nombreId){
    for (int i = 0; i < longitud; i++){
        printf("Ingrese el valor sobre %s[%d]: ", nombreId, i);
        scanf("%d", &array[i]);
    }
}
*/

