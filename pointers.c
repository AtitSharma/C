#include<stdio.h>

int main(){
    int num=50;
    int *p;
    p=&num;
    printf("%u \n",&num);
    printf("%d \n",p);
    return 0;
}