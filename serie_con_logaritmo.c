#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double Factorial(int a);

int main(int argc,char const *argv[]){
    double x,y,z,n=5,Potencia = 2,a=1,c=3,f=4, PrimerTotal=0, SegundoTotal=0,TercerTotal=0; 
    int limite,i;
    system("@cls||clear");
    printf("Digite un limite : "); 
    scanf("%i",&limite);
    printf("Digite un valor de x : "); 
    scanf("%lf",&x);   
    printf("Digite un valor de y : ");
    scanf("%lf",&y);
    printf("Digite un valor de z : ");
    scanf("%lf",&z);
    printf("f(n,x,y,z) = ");
 
    for(i=0;i<limite;i++){
        if(i==0){
            printf(" - %.lf^%.lf+log3(%.lf)+%.lf ",x,y,z,a);
            PrimerTotal  = (pow(x,y) + log(z)/log(3) +1) *(-1);            
        }else{        
            if (i%2==0){         
                printf(" - %.lf^(%.lf+%.lf)+log3(%.lf^%.lf)+%.lf!/%.lf! ",x,y,Potencia,z,f,c,n);              
                TercerTotal = TercerTotal +(( pow(x,y+Potencia) + log( pow(z,f))/log(3) + Factorial(c) )/Factorial(n)*(-1));                 
            }else{                              
                printf(" + %.lf^(%.lf+%.lf)-log3(%.lf^%.lf)+%.lf!/%.lf! ",x,y,Potencia,z,f,c,n);                    
                SegundoTotal = SegundoTotal +(pow(x,y+Potencia) + (log(pow(z,f))/log(3))*(-1) + Factorial(c)) / Factorial(n);
            }
            f+=3;
            c+=2;
            Potencia+=2;
            n+=4;
        }
    }
    PrimerTotal = PrimerTotal + SegundoTotal + TercerTotal;
    printf("\n S =  %.6f",PrimerTotal);
    return 0;
}

long double Factorial(int a){
    int i;
    long double TotalFactorial = 1;
    for(i=1;i<=a;i++){
        TotalFactorial = TotalFactorial*i;
    }
    return TotalFactorial;
}
