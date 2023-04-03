#include<stdio.h>

int main(){
    int x=100;
    int *ptr;
    ptr=&x;
    printf("The address of x is %u \n",ptr);
    printf("The address of x is %u \n",&x);
    printf("The value of x is %d \n",*(&x));
    printf("The value of x is %d \n",*ptr);


    return 0;
}