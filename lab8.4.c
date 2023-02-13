#include<stdio.h>
void Prime(int,int);
int main(){
    int num1=1;
    int num2=100;
    Prime(num1,num2);
    return 0;
}


void Prime(int num1,int num2){  
    for (int i=num1;i<=num2;i++){
        int count =0;
        for (int j=1;j<i;j++){
            if(i%j==0){
                count++;
            }
       }
        if(count==1){
            printf("%d \n",i);
        }


    }
}