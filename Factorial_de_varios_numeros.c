#include <stdio.h> 
#include <stdlib.h> 



int calcular_factorial( double i,double Total,double Limite,double Suma_Total); 
void Presentacion(); 



int main(){   
    char  continuar; 
    do{
        system("@cls||clear"); 
        Presentacion();
        double Total,Limite,Entrada,i,Suma_Total;
        double Suma_Factorial;
        printf("Ingrese un limite : ");
        scanf("%lf",&Limite);
        printf("S = "); 
        i = 1;
        Total = 1;
            while(i<=Limite){
                Total = calcular_factorial(i,Total,Limite,Suma_Total);
                break; 
            }
        
    printf ("\nPresione (F) para cancelar la ejecucion del programa, o cualquier otra tecla para continuar\n");
    getchar();
    scanf("%c",&continuar);
    }while(continuar != 'f' && continuar != 'F');
    return 0; 
}

int calcular_factorial( double i,double Total,double Limite,double Suma_Total){
    i = 1;
    Total = 1;  
    while(i<= Limite){
        Total = Total * i;
        printf(" + %.2lf",Total); 
        Suma_Total = Total + Suma_Total; 
        i++; 
    }
    printf("\nLa suma es : %.2lf ",Suma_Total); 
    return Total; 
}

void Presentacion(){
    printf("\n|----------------------------------------------------|");
    printf("\n| Esta algoritmo fue hecho por :Josue Sauca          | "); 
    printf("\n|----------------------------------------------------|\n");
}


