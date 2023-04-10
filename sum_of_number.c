#include<stdio.h>

int main(){
    int num=567;
    int sum=0;

    while(num>0){
        int digit=num%10;
        sum+=digit;
        num=num/10;
    }
    printf("The sum of the number is %d \n",sum);
    return 0;
}