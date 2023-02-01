#include<stdio.h>
int naturalnum(int num);

int main(){
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);    
    printf("The sum of first %d  natural number is  %d \n",num,naturalnum(num));
    return 0;
}

int naturalnum(int num){
    if (num <=1){
        return num;

    }
    else{
        return num + naturalnum(num-1);
    }

}