#include<stdio.h>
void ReverseArray(int *arr,int n);
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    ReverseArray(arr,7);
    for(int j=0;j<7;j++){
        printf("The value of arr[%d] is after %d \n",j,arr[j]);
    }
    
    return 0;
}


void ReverseArray(int *arr,int n){
    int temp;
    for (int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}