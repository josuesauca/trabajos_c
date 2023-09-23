#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    system("@cls||clear");
    char opcion;
    int matriz[100][100];
    int matriz_aux[100][100];
    int suma = 0,auxiliar_2[100];
    int filas,columnas,i,j,auxiliar,k;
    float mayor_3 = 0;
    do{
        system("@cls||clear");
        printf("1. Definir el tamanio y cargar elementos de la matriz");
        printf("\n2. Obtener la suma total de los elementos de la matriz");
        printf("\n3. Ordenar Ascendente los elementos de la matriz");
        printf("\n4. Ordenar Descendentemente los elementos de la matriz");
        printf("\n5. Indicar el numero mayor de la matriz");
        printf("\n6. Ver resultado de operación");
        printf("\n7. Salir\n");
        printf("\nOpcion: ");
        scanf(" %c",&opcion);
        switch (opcion) {
            case '1' :
            printf("\n");
                printf("Ingrese el numero de filas : ");
                scanf("%i",&filas);
                printf("Ingrese el numero de columnas : ");
                scanf("%i",&columnas);
                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        printf("Ingrese la posicion [%i][%i]: ",i,j);
                        scanf("%i",&matriz[i][j]);
                    }                    
                }
                printf("\n");
                system("pause");
            break;


            case '2':
            printf("\n");
                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        printf("%i\t",matriz[i][j]);
                    }  
                    printf("\n");                  
                }
                printf("\n\n");
                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        suma = suma + matriz[i][j];
                    }                    
                }
                printf("\nLa suma es : %i\n",suma);
                system("pause");
            break;

            case '3':
            printf("\n");
            int f1,c1;
            int aux;
            int caux;
            

                printf("Matriz Normal\n\n");
                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        printf("%i\t",matriz[i][j]);
                    }  
                    printf("\n");                  
                }
                
                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        matriz_aux[i][j] = matriz[i][j];
                    }                  
                }




                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){

                        for (size_t f1 = i; f1< filas; f1++){

                            caux = 0;

                            if (i == f1) {
                                caux = j+1;                            
                            }
                            
                            for (size_t c1 = j; c1 < columnas; c1++){
                                
                                if (matriz[i][j] > matriz[f1][c1]){

                                    aux = matriz[f1][c1];
                                    matriz[f1][c1] = matriz[i][j];
                                    matriz[i][j] = aux;

                                }                   
                            }                                                   
                        }
                    }                                     
                }


                printf("\n\nMatriz Ordenada Ascendentemente\n\n");

                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        printf("%i\t",matriz[i][j]);
                    }  
                    printf("\n");                  
                }


                printf("\n");
                system("pause");
            break;

            case '4':

            printf("Matriz Normal\n\n");
            int matriz_4[100][100];
            int m,n,mayor;
            int f_1,c_1;
            int aux_1;
            int caux_1;

                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        printf("%i\t",matriz_aux[i][j]);
                    }  
                    printf("\n");                  
                }
                printf("\n\nMatriz Ordenada Descendentemente\n\n");
                for (size_t i = 0; i <filas ; i++){
                    for (size_t j = 0; j <columnas ; j++){
                        for (size_t m = 0; m < filas; m++){

                            for (size_t n = 0; n < columnas; n++) {
                                
                                if (matriz_aux[i][j]> matriz[m][n]){

                                    mayor = matriz_aux[i][j];
                                    matriz_aux[i][j] = matriz_aux[m][n];
                                    matriz_aux[m][n] = mayor;
                                        
                                }
                                
                            }                                                     
                        }                    
                    }  
                                    
                }       

                 for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){

                        for (size_t f1_1 = i; f1_1< filas; f1_1++){

                            caux_1 = 0;

                            if (i == f1_1) {
                                caux_1 = j+1;                            
                            }
                            
                            for (size_t c1_1 = j; c1_1 < columnas; c1_1++){
                                
                                if (matriz_aux[i][j] < matriz_aux[f1_1][c1_1]){

                                    aux = matriz_aux[f1_1][c1_1];
                                    matriz_aux[f1_1][c1_1] = matriz_aux[i][j];
                                    matriz_aux[i][j] = aux;

                                }                   
                            }                                                   
                        }
                    }                                     
                }

                for (size_t i = 0; i < filas; i++){
                    for (size_t j = 0; j < columnas; j++){
                        printf("%i\t",matriz_aux[i][j]);
                    }  
                    printf("\n");                  
                }




                system("pause");
            break;

            case '5':
            

                for (int i = 0; i < filas; i++){
                    for (int j = 0; j < columnas; j++){
                        printf("%i\t",matriz[i][j]);
                    }  
                    printf("\n");                  
                }

                for (int i = 0; i < filas; i++){
                    for (int j = 0; j < columnas; j++){
                        if(matriz[i][j]> mayor_3){
                            mayor_3 = matriz[i][j];
                        }
                    }  
                                    
                }
                printf("\nEl numero mayor es %.f\n",mayor_3);


                system("pause");
            break;

            case '6':

                system("pause");
            break;

            case '7':
                printf("Gracias Por Usar el Programa \nVuelva Pronto !!");
                printf("\n");
            break;

        }
            



        
    } while (opcion != '7');
    
    
    return 0;
}
