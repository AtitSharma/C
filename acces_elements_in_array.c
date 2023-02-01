#include<stdio.h>
void PrintArray(int arr[],int num);

int main(){
    int arr[]={2,3,4,5,6,100,7,7,1,2,3};
    int num=11;
    PrintArray(arr,num);
    return 0;
}


void PrintArray(int arr[],int num){
    for(int i=0;i<num;i++){
        printf("The value  at arr[%d]  is  %d \n",i,arr[i]);
    }
}
