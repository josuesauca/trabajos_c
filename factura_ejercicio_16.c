#include <stdio.h>
#include <stdlib.h>

int main(){
	float Subtotal_Neto,Descuento = 0.05,Total_Descuento,Total_Neto=0,Iva = 0.14 ,Ice= 0.05,Total_a_pagar;
	printf("Ingrese el Subtotal Neto de su Compra : ");
	scanf("%f",&Subtotal_Neto);
	system("@cls||clear");
	Total_Descuento = Descuento * Subtotal_Neto; 
	
	Total_Neto = Subtotal_Neto-Total_Descuento;
	Iva = (Iva*Total_Neto);
	Ice = (Ice*Iva);	
	Total_a_pagar = Total_Neto +Iva+Ice;
	
	printf("\n\nSubtotal neto ==> \t%.2f ",Subtotal_Neto);
	printf("\nDescuento (5%%) ==> \t%.2f ",Total_Descuento);
	printf("\n\t\t\t-----------");
	printf("\nTotal neto ==> \t\t%.2f ",Total_Neto);
	printf("\nIVA (14%%) ==> \t\t%.2f ",Iva);
	printf("\nICE (5%%) ==> \t\t%.2f ",Ice);
	printf("\n\t\t\t-----------");
	printf("\nTotal a Pagar ==> \t%.2f ",Total_a_pagar);
	getch();
	
	return 0;
}
