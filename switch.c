#include<stdio.h>

int main(){
    printf("Enter a numbetr plz \n");
    int num;
    scanf("%d",&num);
    switch(num){
        case 1 :
            printf("The number is 1 \n");
            break;
        case 2:
            printf("The number is 2 \n");
            break;
        default:
            printf("Please input valid number \n");

    }


    return 0;
}