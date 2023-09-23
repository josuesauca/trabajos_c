/*
	S=1+2+3+5+7+11+13+..+N
	@autor: Wilman Chamba Z.
	
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int dividendo,primo,limite,suma;
    short esPrimo;
	char continuar;
    int i;
	do {
		// Limpiar pantalla
        system("@cls||clear");  // UNIX - GNU/LINUX
        //system("cls");  // WINDOWS - DOS
		suma = 0;
		int primo = 2;
		printf("Por favor ingrese Limite de la serie de primos a sumar: \n");
		scanf("%i",&limite);	
		printf ("S = ");
        for (i = 1; i <= limite; i++){
            esPrimo = 1;
            dividendo = 2;
            while ((dividendo < primo) && (esPrimo == 1)){
                if ((primo % dividendo) == 0){
                    esPrimo = 0;
                }
                dividendo++;                           
            }
            if (esPrimo == 1){
                printf("%i + ",primo);
                suma = suma + primo;
                primo++;  
            }else{
                primo++;   
            }
            
        }		
		printf("\n%s%i\n",("S = "),suma);
		printf("(C) para cancelar la ejecución, cualquier tecla para continuar.. Que acción desea realizar?\n");        
        scanf(" %c", &continuar);
	} while (continuar != 'C' && continuar != 'c');
    printf("!!GRACIAS POR USAR NUESTRO PROGRAMA!!!\n");        
    getchar();
    return 0;	
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    
    system("@cls||clear");
    int limite,i,j,k,primo;
    int contador = 0;
    
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
    primo = 2;
    i = 1;
    while(i<=limite){
        
        contador = 1;
        
        for(k=2;(k<primo && contador==1);k++){
            if(primo%k==0){
                contador = 0;
            }
        }
        
        if(contador==1){
            printf("%i\t",primo);
            primo++;
            i++;
        }else{
            primo++;
        }
        
    }
    return 0;
}
*/