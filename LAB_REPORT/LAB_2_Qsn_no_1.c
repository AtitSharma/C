#include<stdio.h>

int main(){
    int a=35;
    int b=25;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is now %d \n",a);
    printf("The value of b is now %d \n",b);

    return 0;
}