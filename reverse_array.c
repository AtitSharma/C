#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[100];
    for(int i=4;i>=0;i-- ){
        arr2[i]=arr[i];
    }
    for (int i=0;i<4;i++){
        printf("%d \n",arr2[i]);
    }
    return 0;
}