#include<stdio.h>

int main(){
    int n=100;
    for(int i=2;i<n;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag++;
            }            
        }
        if(flag==0){
            printf("%d \n",i);
        }
    }

    return 0;
}