#include<stdio.h>

int main(){
    int num;
    int i;
    int sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    // while (i<=num){
    //     sum+=i;
    //     i++;
    // }
    for (i=1;i<=num;i++){
        sum+=i;
    }

    
    printf("%d \n",sum);
    return 0;
}