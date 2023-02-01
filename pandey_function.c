#include<stdio.h>
void Ram();
int Addition(int num1,int num2);
int main(){
    int num1=1;
    int  num2=2;
    Ram();
    int x=Addition(num1,num2);
    printf("%d \n",x);
    return 0;
}

void Ram(){
    printf("The name is Ram \n");
}
int Addition(int num1,int num2){
    return num1+num2;
}

