#include<stdio.h>

int main(){
    int arr[10];
    int Sum=0;
    float avg;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++){   
        printf("%d ",arr[i]);
        Sum+=arr[i];
    }   
    avg=Sum/10;
    printf("\n");
    printf("The sum of the arr is %d \n",Sum);
    printf("The avg of the arr is %.2f \n",avg);
    return 0;
}