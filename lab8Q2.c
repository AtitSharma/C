#include<stdio.h>
double factorial(int);
int main(){
    int num=5;
    int fact=factorial(num);
    printf("The factiorial of %d is %d \n",num,fact); 
    return 0;
}

double factorial(int num){
    if(num<=1){
            return 1;
        }   
    return  num * factorial(num-1);
}