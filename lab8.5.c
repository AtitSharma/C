#include<stdio.h>
int Sum_(int);
int main(){
    int num1=5;
    int x=Sum(num1);
    printf("The sum of %d to 1 is %d",num1,x);

    return 0;
}


int Sum_(int num1){
    if (num1<=1){
        return 1;
    }
    else{
        return num1 + Sum_(num1-1);
    }

}