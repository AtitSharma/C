#include<stdio.h>
double factorial(int num);
int main(){
    int x;
    x=factorial(6);
    printf("%d \n",x);    
    return 0;
}


double factorial(int num){
    if (num<=1){
        return num;
    }
    else{
        return num * factorial(num-1);
    }
}


