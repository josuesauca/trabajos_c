#include <stdio.h>

int main(){
	int n,count,i=3,c;
	printf("Ingrese un numero : ");
  	scanf("%d", &n);

  	if (n >= 1) {
    	printf("First %d prime numbers are:\n",n);
    	printf("2\n");
	}
	for (count = 2; count <= n;i++){  	
	    for (c = 2; c <= i - 1; c++){
	      if (i%c == 0){
	      	  break;
	      	
		  }
	      
	    }
	    if (c == i){
	      printf("%d\n", i);
	      count++;
	      
	      
	    }
	//i++;
  }
	
	
	
	return 0;
}
