#include<stdio.h>
#include <math.h>

int main(){
    int num=12;
    int prime=0;
    if (num ==0 || num== 1){
        prime+=1;
    }
    for (int i=2;i<=num/2;i++){
        if(num%i ==0){
            prime=1;
            break;
        }
    }
    if (prime==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }





    
    return 0;
}