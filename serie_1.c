/* 1+3+5+7
    +11+15+19+23
    +25+27+29+31
 */


#include <stdio.h> 


int main(){

    int limite,i = 1 ; 
    int numInicio = 1 ;
    int sumador2 = 2,sumador4 = 4 ,resultado,a,b ;
    int contador = 0,contador_2 = 1,consigno =0;
    printf("Ingrese un limite para su serie : ");
    scanf("%i",&limite);
    printf("Ingrese un numero: ");
    scanf("%i",&a);
    printf("Ingrese otro numero : ");
    scanf("%i",&b);
    resultado = a/b;
    printf(" S=  %i",resultado);
    
   

    while (i <= limite ){
       /// numInicio = numInicio + 2;
        if( contador < 4  ){

            if ( i == 1){
                printf("\t + %i",contador_2);
                contador ++;
                consigno ++;
            }else{
                contador_2 += sumador2;
                printf(" + %i",contador_2);
                contador ++;
                consigno++;
                
            }       
        }else{
            contador_2 += sumador4;
            printf("- %i  ",contador_2);
            consigno++;


        }

        i++;
    }
    
    return 0; 

}

/*int main(){
    int limite; 
    char matriz[10][10]; 

    
    printf("Ingrese un limite para la matriz : ");
    scanf("%i",&limite); 

    for ( int i = 0;i<limite ;i++){
        for(int j= 0; j<limite;j++){
             matriz [i] [j] = '*' ;  
             printf(" %s  ",matriz[i][j]); 
          //  printf(" %i",limite[i][j]);

        }
    }
    
     for ( int i = 0;i<limite ;i++){


        for(int j= 0; j<limite;j++){

              printf("%s",matriz[i][j]);  
          //  printf(" %i",limite[i][j]);

        }
         printf(" \n"); 
    }
    
    
    
    return 0;


}*/
