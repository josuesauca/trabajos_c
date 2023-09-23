
/* void IngresoNotas(char *etiqueta,float arreglo[], int longitud);
void PresentarNotas(char *ParaleloA, char *ParaleloB ,int longitud,float arreglo[longitud]);
float CalcularPromedio(int longitud, float arreglo[longitud]);
float SumarNotas(int longitud, float arreglo[longitud]); */
//void PresentarNotas(char *ParaleloA, char *ParaleloB ,int alumnosA,float NotasA[alumnosA],int alumnosB,float NotasB[alumnosB]);
//float PromedioMayor(float *PrimerPromedio,float *SegundoPromedio);

//Algoritmo hecho por Josue Sauca 
#include <stdio.h>
#include <stdlib.h>


void IngresoNotas(char *paralelo,int longitud, float array[longitud]);
float *ingresarNorasReturnArray(char *etiqueta, int longitud);
void PresentarNotas(char *paralelo ,int longitud,float arreglo[longitud]);
float CalcularPromedio(int longitud, float arreglo[longitud]);
float SumarNotas(int longitud, float arreglo[longitud]);
void PromedioMayor(char *ParaleloA,char *ParaleloB,float *PrimerPromedio,float *SegundoPromedio);
void Nota_Menor_Mayor(char *Paralelo,int longitud, float arreglo[longitud]);
float AlumnosSobrePromedio(char *Paralelo, int longitud , float arreglo[longitud],float *Promedio);
float AlumnosBajoPromedio(char *Paralelo, int longitud , float arreglo[longitud],float *Promedio);



void presentarNotas(char *paralelo, int longitud, float arreglo[longitud]);


int main(int argc, char const *argv[]){

    system("@cls||clear");
    int alumnosA,alumnosB;    
    float PromedioA,PromedioB;
    float AlumnosPromedioBajo, AlumnosPromedioAlto;
    printf("Ingrese la cantidad de Alumnos del Paralelo 'A' : ");
    scanf("%i",&alumnosA);
    printf("Ingrese la cantidad de Alumnos del Paralelo 'B' : ");
    scanf("%i",&alumnosB);
    system("@cls||clear");

    float NotasA[alumnosA],NotasB[alumnosB];

    float *notasA = ingresarNorasReturnArray("PRIMERO 'A'",alumnosA);
    
    IngresoNotas("PRIMERO 'A'",alumnosA,notasA);
    IngresoNotas("PRIMERO 'B'",alumnosB,NotasB); 


    //Retirnando un arreglo de una funcion
    //freee (notasA);

    PromedioA = CalcularPromedio(alumnosA,notasA);
    PromedioB = CalcularPromedio(alumnosB,NotasB);

    PromedioMayor("PRIMERO 'A'","PRIMERO 'B'",&PromedioA,&PromedioB);

    //system("@cls||clear");
    //presentarNotas("PRIMERO 'A'",alumnosA,notasA);

    PresentarNotas("PRIMERO 'A'",alumnosA,notasA);
    printf("\nEL PROMEDIO DEL PARALELO 'A' ES : %.2f",PromedioA);
    Nota_Menor_Mayor("PRIMERO 'A'",alumnosA,notasA);
    printf("\nLA CANTIDAD DE ALUMNOS BAJO EL PROMEDIO SON %.f",AlumnosPromedioBajo = AlumnosBajoPromedio("PRIMERO 'A'",alumnosA,notasA,&PromedioA));
    printf("\nLA CANTIDAD DE ALUMNOS SOBRE EL PROMEDIO SON %.f",AlumnosPromedioAlto = AlumnosSobrePromedio("PRIMERO 'A'",alumnosA,notasA,&PromedioA));
 
    printf("\n");
    printf("\n--------------------------------------------------------"); 
    printf("\n--------------------------------------------------------\n"); 

    PresentarNotas("PRIMERO 'B'",alumnosB,NotasB); 
    printf("\nEL PROMEDIO DEL PARALELO 'B' ES : %.2f",PromedioB);
    Nota_Menor_Mayor("PRIMERO 'B'",alumnosB,NotasB);
    printf("\nLA CANTIDAD DE ALUMNOS BAJO EL PROMEDIO SON %.f", AlumnosPromedioBajo = AlumnosBajoPromedio("PRIMERO 'B'",alumnosB,NotasB,&PromedioB));
    printf("\nLA CANTIDAD DE ALUMNOS SOBRE EL PROMEDIO SON %.f", AlumnosPromedioAlto = AlumnosSobrePromedio("PRIMERO 'B'",alumnosB,NotasB,&PromedioB));

    return 0;
    
}


void presentarNotas(char *paralelo, int longitud, float arreglo[longitud]){

    presentarNotas(paralelo,longitud,arreglo);
    float AlumnosPromedioAlto,AlumnosPromedioBajo;
    float promedio = CalcularPromedio(longitud,arreglo);
    printf("\nEL PROMEDIO DEL PARALELO 'A' ES : %.2f",promedio);
    Nota_Menor_Mayor(paralelo,longitud,arreglo);
    printf("\nLA CANTIDAD DE ALUMNOS BAJO EL PROMEDIO SON %.f",AlumnosPromedioBajo = AlumnosBajoPromedio(paralelo,longitud,arreglo,&promedio));
    printf("\nLA CANTIDAD DE ALUMNOS SOBRE EL PROMEDIO SON %.f",AlumnosPromedioAlto = AlumnosSobrePromedio(paralelo,longitud,arreglo,&promedio));

}
void IngresoNotas(char *paralelo,int longitud, float array[longitud]){
    int i;
    printf("\n\nIngreso de Notas %s \n",paralelo);
    for (i = 0; i < longitud; i++){
        printf("Ingrese la nota de la lista con el Nro %i : ",i+1);
        do{
            scanf("%f",&array[i]);
            if(array[i] < 0 || array[i] > 10){
                //!arreglo[i] >= 0 && arreglo[i] <= 10
                printf("\nEl rango de notas esta fuera del limite (0---10) : ");
            }
        }while(array[i] < 0 || array[i] > 10);
    }
    printf("Gracias por Ingresar las Notas");
}
 
void PresentarNotas(char *paralelo ,int longitud,float arreglo[longitud]){
    int i;
    printf("\nListado de Notas de %s",paralelo);
    printf("\n----------------------------------------------");
    for ( i = 0; i < longitud; i++){
        printf("\nEstudiante [%i] : %.2f",i+1,arreglo[i]);
    }
    printf("\n----------------------------------------------");
} 

float SumarNotas(int longitud, float arreglo[longitud]){
    float Suma = 0;
    int i;
    for ( i = 0; i < longitud; i++){        
        Suma += arreglo[i];
    }
    return Suma;
}

float CalcularPromedio(int longitud, float arreglo[longitud]){
    float suma = SumarNotas(longitud,arreglo);
    return (suma/(float)longitud);
}

void PromedioMayor(char *ParaleloA,char *ParaleloB,float *PrimerPromedio,float *SegundoPromedio){

    printf("\n--------------------------------------------------------"); 
    if (*PrimerPromedio>*SegundoPromedio){
        printf("\nEL PARALELO %s ES EL MAS ALTO, CON UN PROMEDIO DE %.2f",ParaleloA,*PrimerPromedio); 
        printf("\n--------------------------------------------------------");    
    }else{
        printf("\nEL PARALELO %s ES EL MAS ALTO, CON UN PROMEDIO DE  %.2f",ParaleloB,*SegundoPromedio);
        printf("\n--------------------------------------------------------"); 
    }
   
}

void Nota_Menor_Mayor(char *Paralelo,int longitud, float arreglo[longitud]){
    int i;
    float Menor = 0;
    float Mayor = 0;
    for (i = 0; i < longitud; i++){
        if (i==0){
            Menor = arreglo[i];
            Mayor = arreglo[i];
        }else{
            if (arreglo[i]>= Mayor){
                Mayor = arreglo[i];
            }   
            if(arreglo[i]<= Menor){
                Menor = arreglo[i];
            }
        }
    }
    printf("\n--------------------------------------------------------"); 
    printf("\nLA NOTA MAYOR DEL PARALELO %s ES : %.2f",Paralelo,Mayor);
    printf("\n--------------------------------------------------------"); 
    printf("\nLA NOTA MENOR DEL PARALELO %s ES : %.2f",Paralelo,Menor);
}

float AlumnosSobrePromedio(char *Paralelo, int longitud , float arreglo[longitud],float *Promedio){
    float contador = 0;
    int i;
    printf("\n--------------------------------------------------------"); 
    for (i = 0; i < longitud; i++){        
        if (arreglo[i]>*Promedio){ 
            printf("\nEL ALUMNO [%i] DEL PARALELO %s TIENE UNA NOTA DE %.2f ",i+1,Paralelo,arreglo[i]);
            contador++;
        }   
    }
    printf("\n--------------------------------------------------------"); 
    return contador;
}

float AlumnosBajoPromedio(char *Paralelo, int longitud , float arreglo[longitud],float *Promedio){
    float contador = 0;
    int i;
    printf("\n--------------------------------------------------------"); 
    for (i = 0; i < longitud; i++){        
        if (arreglo[i]<*Promedio){
            printf("\nEL ALUMNO [%i] DEL PARALELO %s TIENE UNA NOTA DE %.2f ",i+1,Paralelo,arreglo[i]); 
            contador++;
        }   
    }
    printf("\n--------------------------------------------------------"); 
    return contador;
}

float *ingresarNorasReturnArray(char *etiqueta, int longitud){
    //float *array;//Declarar un puntero --> trabajar con caracteristicas arreglo
    //Reservar dinamicamente el espacio de memoria del arreglo
    //Longitud me otorga el numero de elemenentos del arreglo
    int tamanioDeMemoria = longitud * sizeof(float);
    float *array =  (float *)malloc(longitud*sizeof(float));
    int i;
    printf("\n\nIngreso de Notas %s \n",etiqueta);
    for (i = 0; i < longitud; i++){
        printf("Ingrese la nota de la lista con el Nro %i : ",i+1);
        do{
            scanf("%f",&array[i]);
            if(array[i] < 0 || array[i] > 10){
                //!arreglo[i] >= 0 && arreglo[i] <= 10
                printf("\nEl rango de notas esta fuera del limite (0---10) : ");
            }
        }while(array[i] < 0 || array[i] > 10);
    }
    printf("Gracias por Ingresar las Notas");
    return array;
    //free(array);

} 

/* float PromedioMayor(float *PrimerPromedio,float *SegundoPromedio){
    float Nota1  = *PrimerPromedio; 
    float Nota2 = *SegundoPromedio;

    if (Nota1>Nota2){
        return *PrimerPromedio;
    }else{
        return *SegundoPromedio;
    }
} */



/* 
void IngresoNotas(char *etiqueta,float arreglo[], int longitud){
    int i;
    printf("\nIngreso de Notas %s \n",etiqueta);
    for (i = 0; i < longitud; i++){
        printf("Ingrese la nota de la lsita con el Nro %i : ",i+1);
        do{
            scanf("%f",&arreglo[i]);
            if(arreglo[i] < 0 || arreglo[i] > 10){
                //!arreglo[i] >= 0 && arreglo[i] <= 10
                printf("\nEl rango de notas esta fuera del limite (0---10) : ");
            }
        }while(arreglo[i] < 0 || arreglo[i] > 10);
    }
    printf("\nGracias por Ingresar las Notas");
}
 */
 
/*

    ingresar otro paralelo y sacar el promedio y mostrar cual tiene mejor nota

*/
 /*
void PresentarNotas(char *etiqueta ,int longitud,float arreglo[longitud]){
    int i;
    printf("\nListado de Notas %s",etiqueta);
    printf("\n----------------------------------------------");
    for ( i = 0; i < longitud; i++){
        printf("\nEstudiante [%i] : %.2f",i+1,arreglo[i]);
    }
}


/*void PresentarNotas(char *ParaleloA, char *ParaleloB ,int alumnosA,float NotasA[alumnosA],int alumnosB,float NotasB[alumnosB]){
    int i,j;
    printf("\nListado de Notas de %s y %s",ParaleloA,ParaleloB);
    printf("\n----------------------------------------------");
    for (i = 0,j=0;  i < alumnosA ||  j<alumnosB; i++,j++){
        printf("\nEstudiante [%i] : %.2f || Estudiante [%i] : %.2f  ",i+1,NotasA[i],j+1,NotasB[j]);
    }
} 
float SumarNotas(int longitud, float arreglo[longitud]){
    float Suma = 0;
    int i;
    for ( i = 0; i < longitud; i++){        
        Suma = Suma + arreglo[i];
        //Suma += arreglo[i];
    }
    return Suma;
}

float CalcularPromedio(int longitud, float arreglo[longitud]){
    float suma = SumarNotas(longitud,arreglo);
    return (suma/(float)longitud);
}

*/
    /* const int NMR_ESTUDIANTES = 5;

    float notas[NMR_ESTUDIANTES];
    int i ;
    IngresoNotas("PRIMERO 'A'",notas, NMR_ESTUDIANTES);
    IngresoNotas("PRIMERO 'B'",notas, NMR_ESTUDIANTES);


    /* PresentarNotas("PRIMERO 'A'",NMR_ESTUDIANTES,notas);
    PresentarNotas("PRIMERO 'B'",NMR_ESTUDIANTES,notas);  
    PresentarNotas("PRIMERO 'A'","PRIMERO 'B'",NMR_ESTUDIANTES,notas);
    printf("\n----------------------------------------------");
    float promedio = CalcularPromedio(NMR_ESTUDIANTES,notas);
    printf("\n----------------------------------------------");
    printf("\nPromedio %.2f",promedio); */




    /*


    #include <stdio.h>
#include <stdlib.h>

void ingresarNotas (char *etiqueta, int longitud, float arreglo[]);
void presentarNotas(int longitud, float arreglo[longitud]);
float sumarNotas (int longitud, float arreglo[longitud]);
float sumarNotas (int longitud, float arreglo[longitud]);
float calcularPromedio (int longitud, float arreglo[longitud]);

int main(int argc, char const *argv[]){

    system ("@cls||clear");
    const int Nro_Estudiantes = 5;
    float notasA[Nro_Estudiantes];
    float notasB[Nro_Estudiantes];
    ingresarNotas("PARALELO\'A\'",Nro_Estudiantes, notasA);
    ingresarNotas("PARALELO\'B\'",Nro_Estudiantes, notasB);
    presentarNotas (Nro_Estudiantes, notasA);
    presentarNotas (Nro_Estudiantes, notasB);
    float promedio = calcularPromedio(Nro_Estudiantes, notasB);
    printf ("PROMEDIO:\t\t%.2f\n",promedio);
    return 0;
}

void ingresarNotas (char *etiqueta, int longitud, float arreglo[]){
    printf ("Ingreso de Notas %s: \n", etiqueta);
    for (int i = 0; i < longitud; i++){
        do{
            printf ("\nIngrese la Nota del estudiante Nro %d: ", i + 1);
            scanf ("%f", &arreglo[i]);
            if (arreglo[i] < 0 || arreglo[i] > 10){
                printf ("\nEl reango de notas esta fuera de limite(0..10)");
            }
        }while(arreglo[i] < 0 || arreglo[i] > 10);
    }
    printf ("\nGracias por ingresar las notas :D\n");
}

void presentarNotas(int longitud, float arreglo[longitud]){
    printf ("\nLISTADO DE NOTAS\n");
    printf ("__________\n\n");
    printf ("Estudiante\t\tNota\n");
    printf ("__________\n\n");
    for (int i = 0; i < longitud; i++){
        printf ("\nEstudiante Nro [%d]: \t%.2f", i+1, arreglo[i]);
    }
    printf ("\n__________\n\n");
}

float sumarNotas (int longitud, float arreglo[longitud]){
    float suma = 0.0;
    for (int i = 0; i < longitud; i++){
        suma = suma + arreglo[i];
    }
    return suma;
}

float calcularPromedio (int longitud, float arreglo[longitud]){
    float suma = sumarNotas(longitud, arreglo);
    return suma / (float)longitud; 
}

*/