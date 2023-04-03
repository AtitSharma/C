#include<stdio.h>

int main(){
    int arr[10];
    printf("Enter the numbers in array \n");
    for (int i=0;i<10;i++){
        scanf("%d",(arr+i));
    }

    printf("The elements os the array are in order in \n");
    for (int i=0;i<10;i++){
        printf("%d \t",*(arr+i));
    }
    printf("\n");
    
    for(int i=0;i<10;i++){
        for (int j=i+1 ;j<10;j++){
            if (*(arr+i) >  *(arr+j)){
            int temp= *(arr+i);
            *(arr+i)= *(arr+j);
            *(arr+j) = temp;
            }
        }
    }
    printf("Now the array is \n");
    for (int i=0;i<10;i++){
        printf("%d \t",*(arr+i));
    }
    return 0;
}