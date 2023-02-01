#include<stdio.h>

int main(){
    int HCF,LCF,num1,num2,smaller;
    printf("Enter First Number : \n");
    scanf("%d",&num1);
    printf("Enter Second Number : \n");
    scanf("%d",&num2);  
    if (num1<num2){
        smaller=num1;
    }
    else{
        smaller=num2;
    }
    for(int i=2;i<=smaller;i++){
        if (num1%i==0 && num2%i==0){
            HCF=i;
            
        }
    }
    for(int i=2;i<=smaller;i++){
        if (num1%i==0 && num2%i==0){
            LCF=i;
            break;
            
        }
    }
    printf("The LCF is %d \n",LCF);
    printf("The HCF is %d \n",HCF);


    return 0;