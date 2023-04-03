#include<stdio.h>
void display(int *arr ,int row,int colume);
int main(){
    int row=3;
    int colume=4;
    int arr[row][colume];
    for(int i=0;i<row;i++){
        for(int j=0;j<colume;j++){
            printf("Enter values in arr");
            scanf("%d",&arr[i][j]);
        }
    }
    display(arr,row,colume);
    return 0;
}

void display(int *arr,int row,int colume){
    for (int i=0;i<row;i++){
        for (int j=0;j<colume;j++){
            printf("%d ",*(arr));
            arr++;
        }
        printf("\n");
    }
}