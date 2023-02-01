#include<stdio.h>

int main(){
    int n;
    int arr[10];
    printf("ENTER A NUMBER \n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]= n*(i+1);
    }
    for (int j=0;j<10;j++){
        printf("%dX%d=%d \n",n,j+1,arr[j]);
    }
    return 0;
}