#include<stdio.h>

int main(){
    int num;
    int prime=1;
    printf("Enter a number");
    scanf("%d",&num);

    if (num>=2){
        for(int i=2;i<num;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
    if (prime==1){
        printf("Prime");
    
    }
    else{
        printf("Not prime");
    }

    }
    return 0;
}