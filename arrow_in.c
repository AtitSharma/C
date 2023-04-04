#include<stdio.h>


struct vector{
    int x;
    int y;

};


int main(){
    struct vector v1,v2,sum;
    struct vector *ptr;

    ptr=&v1;
    ptr->x=100;
    ptr->y=200;
    printf("%d \n",ptr->x);
    printf("%d \n",ptr->y);

    
    return 0;
}