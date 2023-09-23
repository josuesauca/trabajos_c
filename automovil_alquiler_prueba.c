//Algorimto Realizado por :Josue Alejandro Sauca Pucha
//Primer Ciclo Paralelo "B"
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("@cls||clear");
    int monto_fijo,kilometros_recorridos,monto_adicional;
    monto_fijo = 300;
	monto_adicional = 1225;
	float total_pagar,valor_iva = 0,subtotal_pagar;

    printf ("====================================Bienvenido============================\n");
	printf ("Programa para determinar el Cobro Total por el Alquiler de un Automovil\n");
	printf ("===========================================================================\n");
    printf("Ingrese los Kilometros Recorridos : ");+
    scanf("%i",&kilometros_recorridos);
    if (kilometros_recorridos<=300) {
		subtotal_pagar = monto_fijo; 
		valor_iva = subtotal_pagar *0.12 ;
    }else{
		if ((kilometros_recorridos>300)&&(kilometros_recorridos<=1000)) {
			subtotal_pagar = monto_fijo + ((kilometros_recorridos-300)*1.75); 
			valor_iva = subtotal_pagar *0.12;
        }else{
			if (kilometros_recorridos>1000) {
				subtotal_pagar = monto_fijo + monto_adicional+ ((kilometros_recorridos-1000)*2); 
				valor_iva = subtotal_pagar *0.12;
            }
        }
	}
    //system("@cls||clear");
    total_pagar = subtotal_pagar + valor_iva;
    printf ("===========================================================================");
	printf ("\nLos Kilometros Recorridos son : \t%i",kilometros_recorridos);
	printf ("\nEl subtotal a pagar es : \t\t$ %.2f ",subtotal_pagar);
	printf ("\nEl valor del Iva 12%% es : \t\t$ %.2f ",valor_iva);
	printf ("\nEl total a Pagar es : \t\t\t$ %.2f ",total_pagar);	
	printf ("\n===========================================================================");
	printf ("\nAlgorimto Realizado por :Josue Alejandro Sauca Pucha");
	printf ("\nPrimer Ciclo Paralelo B");
	printf ("\n===========================================================================");
    return 0;
}