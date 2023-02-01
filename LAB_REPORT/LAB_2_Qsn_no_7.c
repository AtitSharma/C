#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);
    if((num&1)==0){
        printf("even \n");
    }
    else{
        printf("odd \n");
    }
    return 0;
}