#include <stdio.h>
#include <stdlib.h>

Calculo Presentar_Area(int b, int h, int area);

void calcular_el_area_de_un_triangulo(int b, int h, int area);

	typedef struct area_triangulo{
		int b;
		int h;
		int area;
	}Calculo;

Calculo Presentar_Area(int b, int h, int area){
	Calculo Inicializar;
	area = (b*h)/2; 
	printf("El area del triangulo es: %i",area); 


}



void calcular_el_area_de_un_triangulo(int b, int h, int area){

	area = (b*h)/2; 
	printf("El area del triangulo es: %i",area); 

}




int main(){
	system("@cls||clear");
	int b,h,area;
	int Ingresar_Area;
	printf("Ingrese la base del triangulo : "); 
	scanf("%i",&b);
	printf("Ingrese la altura del triangulo : "); 
	scanf("%i",&h);
	/*calcular_el_area_de_un_triangulo(b,h,area);*/
	Ingresar_Area = Presentar_Area(b,h,area);
			
	return 0; 	
	
	
}
	
