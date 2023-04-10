#include<stdio.h>
#include<math.h>

int main(){
    int num=371;
    int num2=num;
    int num3=num;
    int power=0;
    int armstrong=0;
    while (num>0){
        int digit=num%10;
        num=num/10;
        power+=1;
    }
    while(num2>0){
        int digit2=num2%10;
        armstrong+= pow(digit2,power);
        num2=num2/10;

    }
    printf("%d \n",num3);
    printf("%d \n",armstrong);
    if(num3==armstrong){
        printf("Yes \n");
    }
    else{
        printf("No \n");
    }
    


    return 0;
}