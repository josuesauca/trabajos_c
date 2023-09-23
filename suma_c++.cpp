#include <iostream.h>
#include <iomanip.h>
#include <string.h>

int Check(char *x) // chequea la entredad de un numero binario
{ // las cifras solamente son 0 y 1
for(int i = 0;x[i];i++)
if(x[i] != '0' && x[i] != '1')
return 0;
return 1;
} // CHECK

void GetBiNum(char *x,char name) // entrada de un numero binario
{
do
{
cout << "get " << name << " : ";
cin >> x;
}
while(!Check(x));
} // GET BI NUM

void Sum(char *a,char *b,char *c)
{
int ia = strlen(a)-1,
ib = strlen(b)-1,
ic,carry = 0,sum;
if(ia > ib)
ic = ia+1;
else
ic = ib+1;
c[ic+1] = 0;
while(ia >= 0 && ib >= 0)
{
sum = a[ia--] + b[ib--] + carry - 2*'0';
if(sum > 1)
{
carry = 1;
sum -= 2;
}
else
carry = 0;
c[ic--] = sum + '0';
}
while(ia >= 0)
{
sum = a[ia--] + carry - '0';
if(sum > 1)
{
carry = 1;
sum -= 2;
}
else
carry = 0;
c[ic--] = sum + '0';
}
while(ib >= 0)
{
sum = b[ib--] + carry - '0';
if(sum > 1)
{
carry = 1;
sum -= 2;
}
else
carry = 0;
c[ic--] = sum + '0';
}
c[ic--] = carry + '0';
} // SUM

void main()
{
char a[80],b[80],c[80];
GetBiNum(a,'a');
GetBiNum(b,'b');
Sum(a,b,c);
cout << "a + b = " << c << endl << endl;
cout << "end of program - good bye ! ! !" << endl;
} // MAIN
