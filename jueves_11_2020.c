#include <stdio.h>
#include <conio.h>


int main(){
	
	float metros;
	
	printf("Ingrese el valor en metros : ");
	scanf("%f",&metros);
	
	printf("Km : %.3f",metros/1000);
	printf("\nHm : %.2f",metros/100);
	printf("\nDm : %.1f",metros/10);
	printf("\nM : %.0f",(metros));
	printf("\nDc : %.0f",(metros*10));
	printf("\nCm : %.0f",(metros*100));
	system("@cls||clear");
	printf("\nMm : %.0f",(metros*1000));
		
	return 0;
}
