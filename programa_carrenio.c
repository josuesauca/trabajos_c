#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define meses 12

float *llenarVentas(float ventas_mensuales[meses], char *doceMeses[]);
float proyeccion(float suma);
void sumarVentas(float ventas_mensuales[meses]);
int mesMayor(float ventas_mensuales[meses]);
int mesMenor(float ventas_mensuales[meses]);
void buscarMayorYMenor(float ventas_mensuales[meses], char *doceMeses[]);
void presentacionPrincipal();

int main(){

    system ("@cls||clear");
    system ("color 9");
    int year;
    float ventas_mensual[meses];
    //float mes1232[meses];
    char  *nombreMes[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre",
    "Octubre","Noviembre","Diciembre"};

    presentacionPrincipal();
    printf("\nIngrese el a%co de el informe a realizar: ", 164);
    scanf("%i", &year);
    printf("\t\n******%i******", year);
    float *mes1232 = llenarVentas(ventas_mensual, nombreMes);

    sumarVentas(mes1232);
    buscarMayorYMenor(mes1232, nombreMes);
    return 0;
}

void presentacionPrincipal(){
    printf("\t********\n");
    printf("\tInforme de ventas anuales\n");
    printf("\n*************\n");
    printf("|Autores: -Juan Diego Carre%co Le%cn|\n",164,162);
    printf("|-Luis Alfredo Narvaez Jimenez    |\n");
    printf("|-Jose Antonio Cartuche Robalino  |\n");
    printf("|-Edy francisco Jimenez Merino    |\n");
    printf("*************\n");
}


float *llenarVentas(float ventas_mensuales[meses], char *doceMeses[]){
    float *llenadoVentas = (float *)malloc(meses*sizeof(float));
    printf("\n\t**VENTAS POR MES**\n");
    int i;
    for (i = 0; i < meses; i++){
        printf("-Mes %s= ", doceMeses[i]);
        scanf("%f",&llenadoVentas[i]);
    }
    return llenadoVentas;
}

void sumarVentas(float ventas_mensuales[meses]){
    int i;
    float auxProyeccion, proyeccion, promedio, suma = 0;
    for (i = 0; i < meses; i++){
        suma = suma + ventas_mensuales[i];
        promedio = suma / meses;
        auxProyeccion = suma * 0.10;
        proyeccion = suma + auxProyeccion;
    }
    printf("\t\t******\n");
    printf("\t||la venta total del a%co es = %.1f $||\n", 164, suma);
    printf("**********************\n");
    printf("El promedio de ventas alcanzado en el a%co es de = %.3f%%\n", 164, promedio);
    printf("Se espera que su proyeccion para el siguiente a%co sea de |%.2f$|", 164, proyeccion);
    printf("\n**********************\n");
}

void buscarMayorYMenor(float ventas_mensuales[meses], char *doceMeses[]){
    char  *mesMay[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre",
    "Octubre","Noviembre","Diciembre"};
    char  *mesMen[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre",
    "Octubre","Noviembre","Diciembre"};
    int temporal;
    
    int mesMa ,mesM ;

    mesMa = mesMayor(ventas_mensuales);

    mesM  = mesMenor(ventas_mensuales); 
    
    printf("\t*VENTA MAYOR Y MENOR*");
    printf("\nEl mes mayor %s", mesMay[mesMa]);
    printf("\nEl mes menor %s",mesMen[mesM]); 

    printf("\nla mejor venta fue de el mes = %.2f$ \n", ventas_mensuales[mesMa]); //para la venta mayor 
    printf("la menor venta fue de el mes = %.2f$ \n", ventas_mensuales[mesM]);  // para la venta menor
    printf("*************\n");
}


int mesMayor(float ventas_mensuales[meses]){
    int mayor = 0,i;
    for (i = 0; i < meses; i++){
        if (ventas_mensuales[i] > ventas_mensuales[mayor]){
            mayor = i;
        }
    }    
    return mayor;
}

int mesMenor(float ventas_mensuales[meses]){
    int menor = 0,i;
    for (i = 0; i < meses; i++){

        if (ventas_mensuales[i] < ventas_mensuales[menor]){
            menor = i;
        }
    }    
    return menor;
} 

/* int buscarPosicionMayorVenta(int limite, float ventas[limite]){
    int posicionMa = 0;
    for (int i = 0; i < limite; i++){
        if (ventas[i] > ventas[posicionMa]){
            posicionMa = i;
        }
    }    
    return posicionMa;
}

int buscarPosicionMenorVenta(int limite, float ventas[limite]){
    int posicionMe = 0;
    for (int j = 0; j < limite; j++){
        if (ventas[j] < ventas[posicionMe]){
            posicionMe = j;
        }
    }    
    return posicionMe;
} */

/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ingresoLimite(int *limite);
float sumadoble(int terminos);
float fibonacci(int terminos);
float sumaSextuple(int terminos);
double sumar(int terminos);
int signo(int i);

void presentacionFinal();
// Funcion Principal 
int main(){
    
    system("color 9");
    int terminos;
    double suma = 0;
    char continuar; 
    do{
        system("cls");
        terminos = ingresoLimite(&terminos);
        suma = sumar(terminos);
        printf("\n************\n");
        printf("S = %lf", suma);
        printf("\nDesea cerrar el programa? Ingrese (X), sino cualquier otra tecla\n");
        scanf(" %c", &continuar);
        presentacionFinal();
    }while (continuar != 'X' && continuar != 'x');

    return 0;
}

int ingresoLimite(int *limite){

    printf("\tSumatorias de fracciones de numeros naturales \n");
    printf("\t************\n");
    printf("Ingrese el numero de terminos : ");
    scanf("%i", limite);
    printf("\nSerie:\n");
    return *limite;

}

void presentacionFinal(){

    printf("\n************\n");
    printf("\n****************************************************\n");
    printf("Autores:\n-Juan Diego Carre%co Le%cn\n",164,162);
    printf("-Luis Alfredo Narvaez Jim%cnez\n",130);
    printf("-Jos%c Antonio Cartuche Robalino\n",130);
    printf("-Edy Francisco Jim%cnez Merino\n",130);
    printf("*****************************************************\n");
    printf("\t**********\n");
    printf("\tGracias...\a\a\a\n");

}
double sumar(int terminos){
    float sumaduplo, fibo, contador = 0, sextuple, duplo;
    double resultado = 0;
    int signoOperacion = 1;
    for(int i=1;i<=terminos;i++){

        (i%3==0)?printf(" - "):printf(" + ");

        sumaduplo = sumadoble (i);
        sextuple = sumaSextuple (i);
        fibo = fibonacci(i);
        printf("(%.0f/%.0f)^%.0f", sumaduplo, sextuple, fibo);
        signoOperacion = signo(i);
        resultado = resultado + (pow(sumaduplo / sextuple, fibo)*signoOperacion);

    }
    return resultado;
}

int signo(int i){

    int sig = 1;
    if(i%3==0){
        return sig*=-1;;
    }else{
       return sig = 1;
    }

}

float sumadoble(int terminos){
    float duplo = -1;
    for (int i = 1; i <= terminos; i++){
       duplo = duplo + 2;
    }
    return duplo;
}

float sumaSextuple(int terminos){
    float sextuple = -3;
    for (int i = 1; i <= terminos; i++){
        sextuple = sextuple + 6;
    }
    return sextuple;
}

float fibonacci(int terminos){
    float a, b, fibo;
        a = 1;
        b = 0;
        fibo = 0;
        for(int i=1; i<= terminos ;i++){
          fibo = a + b;
          a = b;
          b = fibo;
        }
    return fibo;
} */