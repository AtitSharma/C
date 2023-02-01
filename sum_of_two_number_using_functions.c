#include<stdio.h>
int Sum(int a,int b);
int main(){
    int c;
    c=Sum(2,5);
    printf("The Sum Of TWO Number IS %d \n",c);
    return 0;
}
int Sum(int a,int b){
    return a+b;
}
