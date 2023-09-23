#include <stdio.h> 
#include <stdlib.h> 


int main(){

    system("@cls||clear"); 

    float Bebe_Alcohol, Usa_Lentes,
        Tiene_diabetes_o_enfermedad_cardiaca,edad,Poliza_B_Anteojos,
        Tiene_40_anios,Tiene_menos_de_40_anios,Poliza_B_Enfermedades; 
    float Poliza_A = 1200,Poliza_B= 950,Total_Poliza,
        Poliza_para_bebidas,Poliza_por_anteojos,Poliza_por_enfermedades,Poliza_A_Alcohol,Poliza_B_Alcohol,
        Poliza_A_Anteojos,Poliza_A_Enfermedades,poliza_edad; 
    char poliza;
    char Bebe_bebidas_Alcoholicas ;
    char Usa_Anteojos ;
    char Tiene_enfermedades ;

    //Descuentos 
    Bebe_Alcohol = 0.10; 
    Usa_Lentes = 0.05;
    Tiene_diabetes_o_enfermedad_cardiaca = 0.05;
    Tiene_40_anios = 0.20;
    Tiene_menos_de_40_anios = 0.10;
    

    printf("Elija el tipo de poliza: (A) cobertura amplia, o (B) Daños a terceros \n"); 
    scanf("%s",&poliza); 
   switch (poliza)
   {
   case 'a':case 'A':
   
    printf("Tiene por hábito beber alcohol (V o F)?: \n");
    scanf(" %s",&Bebe_bebidas_Alcoholicas);
    fflush(stdin);
    printf("Utiliza lentes (V o F)?:\n");
    scanf("%s",&Usa_Anteojos);
    fflush(stdin);
    printf("Padece alguna enfermedad como: deficiencia cardiaca o diabetes (V o F ) ?: \n");
    scanf("%s",&Tiene_enfermedades);
    fflush(stdin);
    printf("Ingrese la edad de la persona ");
    scanf("%i",&edad);
    
    if(Bebe_bebidas_Alcoholicas == 'V'||Bebe_bebidas_Alcoholicas == 'v' ){
        Poliza_A_Alcohol = Poliza_A * Bebe_Alcohol;
        
    }
        if(Usa_Anteojos == 'V' ||Usa_Anteojos == 'v'){
            Poliza_A_Anteojos = Poliza_A*Usa_Lentes; 
             
        }
            if(Tiene_enfermedades == 'V'||Tiene_enfermedades == 'v' ){
                Poliza_A_Enfermedades = Poliza_A*Tiene_diabetes_o_enfermedad_cardiaca;
                
            }
                if (edad> 40){
                    poliza_edad = edad * Tiene_40_anios;                   
                }else{
                    poliza_edad = edad * Tiene_menos_de_40_anios;       

                }
        Total_Poliza = Poliza_A_Alcohol +Poliza_A_Anteojos+ Poliza_A_Enfermedades+poliza_edad; 
        printf("Su costo total de la poliza será de:  %.2f ",Total_Poliza);         
   
    break;
    case 'b':case 'B':
    printf("Tiene por habito beber alcohol (V o F)?: \n");
    scanf(" %s",&Bebe_bebidas_Alcoholicas);
    fflush(stdin);
    printf("Utiliza lentes (V o F)?:\n");
    scanf("%s",&Usa_Anteojos);
    fflush(stdin);
    printf("Padece alguna enfermedad como: deficiencia cardiaca o diabetes (V o F) ?: \n");
    scanf("%s",&Tiene_enfermedades);
    fflush(stdin);
    printf("Ingrese la edad de la persona ");
    scanf("%i",&edad);
    if(Bebe_bebidas_Alcoholicas == 'V'||Bebe_bebidas_Alcoholicas == 'v'  ){
        Poliza_B_Alcohol = Poliza_B*Bebe_Alcohol;
        getchar (); 
    }
        if(Usa_Anteojos == 'V' ||Usa_Anteojos == 'v'){
            Poliza_B_Anteojos = Poliza_B*Usa_Lentes; 
            printf(" S = ",Poliza_B_Anteojos);
             
        }
            if(Tiene_enfermedades == 'V'|| Tiene_enfermedades == 'v' ){
                Poliza_B_Enfermedades = Poliza_B*Tiene_diabetes_o_enfermedad_cardiaca;
                printf(" S = ",Poliza_B_Enfermedades);
                
            }
                if (edad >= 40){
                    poliza_edad = edad * Tiene_40_anios;    
                    printf(" S = ",poliza_edad);  

                }else{
                    poliza_edad = edad * Tiene_menos_de_40_anios; 
                    printf(" S = ",poliza_edad);   
                      

                }
        Total_Poliza = Poliza_B_Alcohol +Poliza_B_Anteojos+ Poliza_B_Enfermedades+poliza_edad; 
        printf("Su costo total de la poliza sera de:  %.2f ",Total_Poliza);  
		break;       
   	default:
    printf("No existe ningun tipo de poliza de este tipo ");
       break;
   }
    return 0;

}
