#include <stdio.h>
#include <stdlib.h>

int main(){
    float Trabajos_Clase,Trabajos_Extraclase,Promedio_Trabajos_Clase_Extraclase,Lecciones,Participacion_Clase,Promedio_Lecciones_Participaciones,Aprendizaje_Autonomo,Promedio_Examenes,Promedio_Total ;
	char Estado_Alumno;
    system("@cls||clear");
    printf("Ingrese la nota de Trabajos en Clase : ");
    scanf("%f",&Trabajos_Clase);
    printf("Ingrese la nota de Trabajos en Extraclase : ");
    scanf("%f",&Trabajos_Extraclase);
    printf("Ingrese la nota de Lecciones : ");
    scanf("%f",&Lecciones);
    printf("Ingrese la nota de Participación en Clase: ");
    scanf("%f",&Participacion_Clase);
    printf("Ingrese la nota de Trabajos Autonomoe : ");
    scanf("%f",&Aprendizaje_Autonomo);
    printf("Ingrese la nota de Promedio de Evaluaciones : ");
    scanf("%f",&Promedio_Examenes);

    Trabajos_Clase = (Trabajos_Clase /10)/2;
	Trabajos_Extraclase = (Trabajos_Extraclase/10)/2;
	Promedio_Trabajos_Clase_Extraclase = Trabajos_Clase + Trabajos_Extraclase;
	
	
	Lecciones = (Lecciones/10)/2;
	Participacion_Clase = (Participacion_Clase/10)/2;
	Promedio_Lecciones_Participaciones = Lecciones + Participacion_Clase;
	
	
	Aprendizaje_Autonomo = Aprendizaje_Autonomo /10;
	
	
	Promedio_Examenes = (Promedio_Examenes*7)/10;
	
	
	Promedio_Total = Promedio_Trabajos_Clase_Extraclase + Promedio_Lecciones_Participaciones + Aprendizaje_Autonomo + Promedio_Examenes;
	
    if(Promedio_Total >= 7){
        Estado_Alumno ='A';
    }else{
        if(Promedio_Total >= 2.40 && Promedio_Total<=6.99){
        Estado_Alumno = 'B';
        }else{
            if(Promedio_Total >= 0.0 && Promedio_Total <= 2.39){
            Estado_Alumno = 'C';
            }
        }
    }

    printf("\n\n\n==========================================================================");
    printf("\n==========================================================================");
    printf("\n|Su promedio de Trabajos en Clase es : %.3f",Trabajos_Clase);
    printf("\n|Su promedio de Trabajos en Extraclase es : %.3f",Trabajos_Extraclase);
    printf("\n==========================================================================");
    printf("\n|Su promedio de Trabajos en Clase y Extraclase es : %.3f",Promedio_Trabajos_Clase_Extraclase);
    printf("\n==========================================================================");
    printf("\n|Su promedio de Lecciones es :%.3f",Lecciones);
    printf("\n|Su promedio de Participacion en Clase es : %.3f",Participacion_Clase);
    printf("\n==========================================================================");
    printf("\n|Su promedio de Lecciones y Participación en Clase es : %.3f",Promedio_Lecciones_Participaciones);
    printf("\n==========================================================================");
    printf("\n|Su promedio de Aprendizaje Autónomo es : %.3f",Lecciones);
    printf("\n==========================================================================");
    printf("\n|Su promedio de los Examenes es : %.3f",Promedio_Examenes);
    printf("\n==========================================================================");
    printf("\n==========================================================================");
    printf("\n|Su promedio Total es : %.3f",Promedio_Total);
    
    switch (Estado_Alumno){

    case 'A':
        printf("\n==========================================================================");
        printf("\n|Usted esta Aprobado");
        printf("\n==========================================================================");        
        break;
    case 'B':
        printf("\n==========================================================================");
        printf("\n|Usted esta en Suspenso");
        printf("\n=========================================================================="); 
        break;
    case 'C':
        printf("\n==========================================================================");
        printf("\n|Usted esta Reprobado");
        printf("\n=========================================================================="); 
        break;    
    
    }
   
    return 0;
}
