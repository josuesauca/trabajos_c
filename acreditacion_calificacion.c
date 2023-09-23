#include <stdio.h>
#include <stdlib.h>

int main(){
    float Trabajos_Clase,Trabajos_Extraclase,Promedio_Trabajos_Clase_Extraclase;
    float Lecciones,Participacion_Clase,Promedio_Lecciones_Participaciones;
    float Aprendizaje_Autonomo,Promedio_Examenes,Promedio_Total ;    
    system("@cls||clear");
    printf("Ingrese la nota de Trabajos en Clase entre 1 y 10 :\t\t");
    scanf("%f",&Trabajos_Clase);
    printf("Ingrese la nota de Trabajos en Extraclase entre 1 y 10 :\t");
    scanf("%f",&Trabajos_Extraclase);
    printf("Ingrese la nota de Lecciones entre 1 y 10 :\t\t\t");
    scanf("%f",&Lecciones);
    printf("Ingrese la nota de Participaci%cn en Clase entre 1 y 10 :\t",162);
    scanf("%f",&Participacion_Clase);
    printf("Ingrese la nota de Trabajos Aut%cnomo entre 1 y 10 :\t\t",162);
    scanf("%f",&Aprendizaje_Autonomo);
    printf("Ingrese la nota de Promedio de Evaluaciones entre 1 y 10 :\t");
    scanf("%f",&Promedio_Examenes);

    Trabajos_Clase = (Trabajos_Clase /10);
	Trabajos_Extraclase = (Trabajos_Extraclase/10);
	Promedio_Trabajos_Clase_Extraclase = Trabajos_Clase + Trabajos_Extraclase;
	
	
	Lecciones = (Lecciones/10);
	Participacion_Clase = (Participacion_Clase/10);
	Promedio_Lecciones_Participaciones = Lecciones + Participacion_Clase;
	
	
	Aprendizaje_Autonomo = (Aprendizaje_Autonomo*2) /10;
	
	
	Promedio_Examenes = (Promedio_Examenes*4)/10;
	
	
	Promedio_Total = Promedio_Trabajos_Clase_Extraclase + Promedio_Lecciones_Participaciones + Aprendizaje_Autonomo + Promedio_Examenes;
	
    
    system("@cls||clear");
    printf("\n==========================================================================");
    printf("\nSu promedio de Trabajos en Clase es : \t\t\t%.2f",Trabajos_Clase);
    printf("\nSu promedio de Trabajos en Extraclase es : \t\t%.2f",Trabajos_Extraclase);
    printf("\n==========================================================================");
    printf("\nSu promedio de Trabajos en Clase y Extraclase es : \t%.2f",Promedio_Trabajos_Clase_Extraclase);
    printf("\n==========================================================================");
    printf("\nSu promedio de Lecciones es : \t\t\t\t%.2f",Lecciones);
    printf("\nSu promedio de Participacion en Clase es : \t\t%.2f",Participacion_Clase);
    printf("\n==========================================================================");
    printf("\nSu promedio de Lecciones y Participaci%cn en Clase es : \t%.2f",162,Promedio_Lecciones_Participaciones);
    printf("\n==========================================================================");
    printf("\nSu promedio de Aprendizaje Aut%cnomo es : \t\t%.2f",162,Aprendizaje_Autonomo);
    printf("\n==========================================================================");
    printf("\nSu promedio de los Examenes es : \t\t\t%.2f",Promedio_Examenes);
    printf("\n==========================================================================");
    printf("\nSu promedio Total es : \t\t\t\t\t%.2f",Promedio_Total);
    printf("\n==========================================================================");
    printf("\nESTADO ACTUAL : ");
    if(Promedio_Total >= 7){
        printf("USTED ESTA APROBADO");
    }else{
        if(Promedio_Total >= 2.40 && Promedio_Total<=6.99){
            printf("USTED ESTA EN SUSPENSO");
        }else{
            if(Promedio_Total >= 0.0 && Promedio_Total <= 2.39){
                printf("USTED ENTA REPROBADO");
            }
        }
    }
  
   
    return 0;
}
