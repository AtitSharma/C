#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even \n");
    
    }
    else{
        printf("Odd \n");
    }
    return 0;
}