#include<stdio.h>

int main(){
    int sum=0;
    int x=3;
    int n=3;
    int mul;
    for (int i=1; i<=n;i++){
        mul=1;
        for (int j=1;j<=i;j++){
            mul=mul*x;
        }
        sum= sum + mul ;     
    }
    printf("%d \n",sum);

    return 0;
}