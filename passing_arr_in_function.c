#include<stdio.h>


int sumofArr(int arr[]);
int main(){
    int sum=0;
    int arr[5]={1,2,3,4,5};
    sum=sumofArr(arr);
    printf("The sum is %d \n",sum); 
    return 0;
}

int sumofArr(int arr[]){
    int s=0;
    for (int i=0;i<=5;i++){
        s+=i;
    }
    return s;
}