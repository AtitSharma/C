#include<stdio.h>
int changer(int a);
int main(){
    int x;
    int a;
    printf("Enter a number and get another number \n");
    scanf("%d",&a);
    printf("The previous value you gave was %d \n",a);


    x=changer(a); 
    printf("Now the number is %d \n",x);


    
    return 0;
}


int changer(int a){
    return 99;
}


