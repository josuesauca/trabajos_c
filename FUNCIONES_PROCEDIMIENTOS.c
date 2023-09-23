#include <stdio.h>
#include <stdlib.h>

void suma(int x,int y);

int main(int argc, char const *argv[]){
    int x = 10;
    int y = 20;
    suma(x,y); 
    return 0;
}


void suma(int x,int y){
        int z;    
        z = x+y;
        printf("\n%i + %i = %i\n",x,y,z);
}















/*

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBERS 10



int compare(const void *_a, const void *_b) {
 
        int *a, *b;
        
        a = (int *) _a;
        b = (int *) _b;
        
        return (*a - *b);
}

int main () {

        int numbers[MAX_NUMBERS];
        int i, size = 0;
        system("@cls||clear");
        while( (scanf("%d",&numbers[size]) != EOF) && (size < MAX_NUMBERS) ){
                size ++;
        }

        for (i = 0; i < size; i ++) {
                printf("%d ", numbers[i]);
        }
        printf ("\n");
        
        qsort(numbers, size, sizeof(int), &compare);
        
        printf ("size:%d\n", size);
        for (i = 0; i < size; i ++) {
                printf("%d ", numbers[i]);
        }*/
       
        /* Check if numbers is actually sorted */
        /*
        for (i = 0; i < size-1; i ++) {
                if (numbers[i] > numbers[i+1]) {
                        printf("Failed !!!!!");
                        break;
                }
        }     
       
        return 0;
}*/