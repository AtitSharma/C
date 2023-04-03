#include<stdio.h>


int sum(int ,int);

int main(){
    int a=4,b=5;
    printf("The value of a and b is %d %d \n",a,b);
    printf("The sum of a+b is %d \n" ,sum(a,b));
    printf("The value of a and b is %d %d \n",a,b);
    return 0;
}




int sum(int a,int b){
    int c=a+b;
    a=100;
    b=200;
    return c;
}
