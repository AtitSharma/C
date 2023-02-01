#include<stdio.h>

int main(){
int a=2;
int b=3;
int c;
a=(b++)+(++b)+a;
printf("%d \n",a);
printf("%d \n",b);
b=(a++)+(b--)+a;
printf("%d \n",b);
c=(c++) * b;
printf("%d \n",c);
return 0;
}