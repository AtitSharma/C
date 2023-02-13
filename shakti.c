#include<stdio.h>

int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    printf("%u \n",&ptr);
    printf("%d \n",*ptr);
    return 0;

}