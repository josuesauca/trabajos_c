#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x;
int limite;
float potencia;
float factoreal=1;


void Ingresarvalores(void){
  printf("ingrese la base del exponente: ");
  scanf("%i",&x);
  printf("Ingrese el limite: ");
  scanf("%i",&limite);
}

void numerador(int limite,  float div[]){
  printf("e^%i= 1 ",x);
  for(int i=1;i<=limite;i++){
    potencia=pow(x,i);
    printf("+ %i^%i",x,i);
      //printf(" %.0f ",potencia);
      //num[i]=potencia;
      factoreal*=i;
   // printf(" %.0f \n",factoreal);
   printf("/%i! ",i);
    div[i]=potencia/factoreal;
    //dem[i]=factoreal;
  }

}

void resultado(int limite, float div[]){
  float resultado=1;
for(int i=1;i<=limite;i++){
  resultado=resultado+div[i];
  }
  printf("\nEs igual a: %.2f",resultado);
}



int main(){

Ingresarvalores();
printf("\n");
float div[limite];
printf("\n");
numerador(limite,div);
resultado(limite, div);

  return 0;
}