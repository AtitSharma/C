#include<stdio.h>

int main(){
    int rev=0;
    int n=9988;
    while (n>0){
        int r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    printf("%d",rev);
    return 0;
}