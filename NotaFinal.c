#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    float TC, LP, AA, PE, Acreditacion;
     
     printf("=================================BIENVENIDOS==============================\n");
     printf("ACREDITACION Y ESTADO FINAL DEL CURSO A PARTIR DE ACREDITACIONES PARCIALES\n");
     printf("==========================================================================\n");
     printf("Ingrese su nota en Trabajos en Clase entre 0 y 1 \n");
     scanf("%f",&TC);
    /*printf("Ingrese su nota en Lecciones y Participaciones\n");
     scanf("%f",&LP);
     printf("Ingrese su nota en Aprendizaje Autonomo\n");
     scanf("%f",&AA);
     printf("Ingrese su nota en Promedio de Evaluaciones\n");
     scanf("%f",&PE);*/
     
     
	if(TC >1 ){		
		printf("El numero que usted a digitado es mayor que 0 y 1");
		printf("\nPor favor digite nuevamente una nota correcta :");
		scanf("%f",&TC);	
		printf("Su nota de trabajos es : %f ",TC);	
    }else{
    	printf("Su nota de trabajos es : %f ",TC);    	
    	
	} /*Acreditacion=TC+LP+AA+PE;
     printf("\nSu acreditacion final es: %.2f",Acreditacion);
	*/


	
	/*
     if(Acreditacion>=0.00 && Acreditacion<=2.39){
         printf("\nUsted esta REPROBADO");
     }
     if(Acreditacion>=2.40 && Acreditacion<=6.99){
         printf("\nUsted esta EN SUSPENSO");
     }
     if(Acreditacion>=7.00 && Acreditacion<=10){
         printf("\nUsted esta APROBADO");
     } else {
         printf("Su nota es incorrecta de acuerdo a la rubrica indicada");
     }*/
     
     
 	return 0;
}
