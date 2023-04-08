#include<stdio.h>

int main(){
    int n=13;
    int flag=0;
    for(int i=2;i<n;i++){
        if (n%i==0){
            flag++;
        }
    }
    if (flag==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
    return 0;
}