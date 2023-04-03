#include<stdio.h>


int count(int * arr,int size);


int main(){
    int arr[10]={1,-9,-10,8,7,-6,5,4,3,-2};
    int x=count(arr,10);
    printf("%d \n",x);

    return 0;
}

int count(int *arr,int size){
    int total=0;
    for (int i=0;i<size;i++){
        if(arr[i]>=0){
            total+=1;
        }
    }
    return total;
}