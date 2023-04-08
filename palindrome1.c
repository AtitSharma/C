#include<stdio.h>

int main(){
    int num=1221;
    int rev=0;

    while(num>0){
        int digit=num%10;
        rev =rev*10+digit;
        num =num/10;
    }
    printf("%d \n",rev);

    return 0;
}