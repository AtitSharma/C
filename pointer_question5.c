#include<stdio.h>

int main(){
    int *ptr;
    int **ptr2;
    int i=100;
    ptr=&i;
    ptr2=&ptr;
    printf("The value is %d",**ptr2);
    return 0;
}