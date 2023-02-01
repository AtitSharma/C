#include<stdio.h>

int main(){
    int rev=0;
    int n=9988;
    do
    {
    int r=n%10;
    n=n/10;
    rev=(rev*10)+r;
    } while (n>0);
    printf("%d \n",rev);
    return 0;
}