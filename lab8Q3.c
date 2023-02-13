#include<stdio.h>

int main(){
    int fact=1;
    int num=5;
    for (int i=1;i<=num;i++){
        fact*=i;
    }
    printf("The factorial of  %d is %d \n",num,fact);
    return 0;
}