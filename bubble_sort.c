#include<stdio.h>

int main(){
    int a[10]={8,3,4,5,1,0,3,2,6,9};
    for (int i=0;i<10;i++){
        for (int j=0;j<10-i-1;j++){
            if (a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }   
        }

    }
    for (int i=0;i<10;i++){
        printf("%d \t",a[i]);
    }


    return 0;
}