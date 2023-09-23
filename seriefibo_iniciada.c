 #include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,z,cont;

  x=0;
  y=1;
 
  printf("0\n1\n",z);
 
  for (cont=1;cont<=20;cont=cont+1)
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  }
 
  system("PAUSE");     
  return 0;
}


//Esta va desde 0
/*
 #include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
  if (n>2)
    return fibonacci(n-1) + fibonacci(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}

int main(void)
{
    int num;

    for (num=0; num<=20; num++)
    {
      printf("%d\n", fibonacci(num));
    }
 
  system("PAUSE");     
  return 0;
}*/


//Esta va desde 1
/*int fibonacci (int n)
{
switch (n) {
case 2:
return 1;
case 1:
return 1;
case 0:
return 0;
default:
return fibonacci(n - 1) + fibonacci(n - 2);
}
}

int main (void)
{
int num;

for (num = 1;num <= 20; num++) {
printf("%d\n", fibonacci(num));
}

system("PAUSE");
return 0;
}*/