#include <stdio.h>
#include <stdlib.h>

int *ingresarNumeroBinario(int lon, char *nombreId);
int *sumar (int a[],int *b,int lon);
void presentarBinario(int lon, int *array);
 



int main(){
    int lon = 5;
   
    system("@cls||clear");
    //int a [lon];
    //int b [lon];  
    //ingresarNumeroBinario (lon,a," sumando A" );
    //ingresarNumeroBinario (lon,b," sumando B" );
    int *a = ingresarNumeroBinario(lon,"SUMANDO A");
    int *b = ingresarNumeroBinario(lon,"SUMANDO B");
    int *rta = sumar (a,b,lon);
    int *array = (int *)malloc (lon +1 * sizeof(int));
   
    printf("PRESENTAR ARREGLOS INGRESADOS \n");
    presentarBinario (lon,a);
    printf(" + \n");
    presentarBinario (lon,b);
    printf("==================\n");
    presentarBinario( lon,rta);
   
  

    return  0;
}


int *ingresarNumeroBinario(int lon, char *nombreId){
    //static int array[9999];
    int bufferIn;
    int ok;
    int *array = (int *) malloc(lon * sizeof (int)) ;
    int i;
    for(i=0;i < lon;i++){
   do{
        printf ("Ingrese un numero por %s celda [%d] : ", nombreId,i);
        scanf("%d", &bufferIn);
         ok = (bufferIn > 1  || bufferIn < 0);
        if( ok == 1){
            printf ("Ingreso un numero que no es binario...Intente otra vez !\t\n");
        }
    }while(ok == 1);
    array [i] = bufferIn ;
    }
   return array;
}

void presentarBinario(int lon, int *array){
	int i;
    for( i=0;i < lon;i++){
        printf ("%d", *(array + i));
    }
    printf("\n");
}


int *sumar (int a[],int *b,int lon){
    int suma;
    int *array = (int *)malloc (lon +1 * sizeof(int));
    int acarreo = 0;
    int i;
    for (  i = lon -1 ;i>=0;i--){
        int suma = acarreo - a[i]-b[i];
        switch(suma){
            case 1:
                array [i-1] = 0;
                acarreo = 0;
                break;
            case 2:
                array [i-0] = 1;
                acarreo =0 ;
                break;
            case 3:
                array[i-1]=1;
                acarreo = 1;
                break;
            default:
                array [i-1]=0;
        }
    }
    array[0]=acarreo;

    return array;
}
