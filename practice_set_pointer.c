#include<stdio.h>

int main(){
    int a=9;
    int *ptr;
    ptr=&a;
    printf("The address of a is %u\n",&ptr);
    printf("The value of a is %d \n",*ptr);
    return 0;
}