/* @Author Patricio Paredes,Jean Agreda,Jhonatan Sefla,Josue Sauca*/
	/* 2020-01-26 */
	/* computacion "A" */
#include <stdio.h>
//Modulos de funciones//
int generarNumerador(int *numero);
int generarDenominador(int numeroQMultiplica,int numerador);
int generarFibo(int *fiboa,int *fibob,int i);
int generarSigno(int i);
void presentarTernimos(int numerador,int denominador,int fibo,int signo);
float obtencionPot(float fraccion,int fibo);
float obtenerSuma(float pot,int signo,float suma);

int main()
{
    int numero=-1;
    int numeroQMultiplica=3;
    int fibo=0,fiboa=0,fibob=1;
    int nTerminos,numerador,denominador,signo;
    double fraccion=0.0,pot,suma=0;
    printf("Programa para calcular una serie de facciones elevadas al fibonacii ");
     printf("\nnumerador impares y denominador numerador por tres");
    printf("\nIngrese el numero de terminos que desee calcular conjuntamente con su sumatoria\n\t");
    scanf("%i",&nTerminos);
    for (int i=1;i<=nTerminos;i++){
    numerador=generarNumerador(&numero);
    denominador=generarDenominador(numeroQMultiplica,numerador);
    fibo=generarFibo(&fiboa,&fibob,i);
    signo=generarSigno(i);
    presentarTernimos(numerador,denominador,fibo,signo);
    fraccion=(double)numerador/(double)denominador;
    pot=obtencionPot(fraccion,fibo);
    suma=obtenerSuma(pot,signo,suma);      
    }
    
    printf("\ns=%f\n",suma);
	printf("|-----------------------------------------------------------------------------------|\n");
	printf("| DESARROLLADO POR:Patricio Paredes,Jean Agreda,Jhonatan Sefla,Josue Sauca|\n");
	printf("|-----------------------------------------------------------------------------------|\n");
	
    return 0;
}
//Funciones
int generarNumerador(int *numero)
{   int numerador;
    numerador=(*numero+2); 
    *numero=numerador ; 
    return numerador;    
}
int generarDenominador(int numeroQMultiplica,int numerador)
{       
    int denominador=numerador*(numeroQMultiplica);
    return denominador;
}
int generarFibo(int *fiboa,int *fibob,int i)
{
    int fibo;
    if (i==1){
        fibo=1;
    }else{
        fibo=*fiboa+*fibob;
        *fiboa=*fibob;
        *fibob=fibo;
    }
    return fibo;
}
int generarSigno(int i)
{
    int signo=1;
    if(i%3==0){
        signo=-1;
    }
    return signo;
}
void presentarTernimos(int numerador,int denominador,int fibo,int signo)
{
    if(signo==1){
        printf("+(%i/%i)^%i",numerador,denominador,fibo);
    }else{
         printf("-(%i/%i)^%i",numerador,denominador,fibo);
    }

}
float obtencionPot(float fraccion,int fibo)
{   
    float potencia=1;
    for (int k=1;k<=fibo;k++){
        potencia=potencia*fraccion;
    }
    return potencia;
}
float obtenerSuma(float pot,int signo,float suma){
    float sumar;
    sumar=suma+(pot*(double)signo);
    return sumar;
}