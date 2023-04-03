#include<stdio.h>

void swap(int *a,int *b);
int main(){
    int a=4,b=5;
    printf("The value of a,b is %d %d \n",a,b);
    swap(&a,&b);
    printf("The value of a,b is %d %d ",a,b);
    
    return 0;
}
 
 
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a = *b;
    *b =temp;
}