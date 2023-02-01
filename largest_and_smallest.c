#include<stdio.h>

int main(){
    int arr[10];
    int largest,smallest;
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    //For largest
    largest=arr[0];
    for (int i=0;i<10;i++){
        if (largest > arr[i]){
            largest=arr[i];
        }
    }
    // smallest
    smallest=arr[0];
    for (int i=0;i<10;i++){
        if (smallest < arr[i]){
            smallest=arr[i];
        }
    }


    printf("The largets %d \n",largest);
    printf("The smallest is %d \n",smallest);
    return 0;
}