#include <stdio.h>
#include <stdlib.h>

int main(){
    int limite,Total;
    int i,j;
	system("@cls||clear");
    printf("Ingrese un limite : ");
    scanf("%i",&limite);
/*
    for( i = 0;i<=limite;i++){
        for( j= 0;j<=limite;j++){
            if(i==0){       	            	
            	if(j==0){
            		printf("X\t");
				}else{
					printf("%i\t",j);					
				}					
			}else{
				if(j==0){
					printf("%i\t",i);					
				}else{
					Total = i*j;
					printf("%i\t",Total);
				}				
			}            	
        }
        printf("\n");
    } */
	i = 0;
	j = 0;

	while(i<=limite){
		j=0;
		while(j<=limite){
			if (i==0){
				(j==0)?printf("X\t"):printf("%i\t",j);			
			}else{
				(j==0)?printf("%i\t",i):printf("%i\t",Total = i*j);
			}
			j++;
		}
		printf("\n");
		i++;
	} 
    return 0;
}

