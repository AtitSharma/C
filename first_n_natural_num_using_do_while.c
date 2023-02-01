#include<stdio.h>

int main(){
    int a,num=1;
    printf("Enter a number");
    scanf("%d",&a);
    do{
        printf("%d \n",num);
        num++;
    
    }while(num<=a);


    return 0;
}