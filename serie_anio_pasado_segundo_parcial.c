#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int limite, numerador, i ; 
	float suma = 0;
	float potencia = 1 , factorial = 1;
	int j = 1,k = 1;
    system("@cls||clear");
    printf("Ingrese un limite para su serie : ");
    scanf("%i",&limite);
    printf("Ingrese el valor del numerador : ");
    scanf("%i",&numerador);
    printf("\ne ^ %i = 1 ",numerador);
    for (size_t i = 1; i <= limite; i++){
        while(j<=i){//Exponente
			potencia = potencia * numerador;
			j++;
		}
		while(k<=i){ //Factorial
			factorial = factorial * i ;
			k++;
		} 
        printf(" + (%i^%i)/%i! ",numerador,i,i);
        suma = suma + (potencia/factorial);//suma
    }
    printf("\nLa suma es : %.2f",(suma + 1));   
    return 0;
}

/*#include<stdio.h>
#include<stdlib.h>

int main(){
    system ("@cls||clear");
    int limite, numerador;
    float suma, potencia, factorial;
    int i=1, j=1, k=1;
    printf("INGRESE EL LIMITE DE SU SERIE\n");
    scanf("%d", &limite);
    printf("INGRESE EL EXPONENTE DE SU SERIE\n");
    scanf("%d", &numerador);

    printf("e^ %d = 1 ", numerador);
    potencia = 1;
	factorial = 1;
	suma = 0;
    for(i = 1; i <= limite; i++){
        printf ("+ ((%d^%d) / %d!)", numerador, i, i);
        /*for(k = 1; k <= i; k++){
            factorial = factorial * i ;
        }*/
  /*      k =1;
        while(k <= i){
            factorial = factorial * i ;
            k++;
        }

        for(j = 1; j <= i; j++){
            potencia = potencia * numerador;
        }
        
        suma = suma + (potencia / factorial);
    }

    printf ("\nLA SUMA DE LA SERIE ES: %.2f", suma + 1);

    return 0;
}
*/