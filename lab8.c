#include<stdio.h>
float Avg(int,int);
int main(){
    int num1=5;
    int num2=10;
    float x=Avg(num1,num2);
    printf("The average is %f",x); 
    return 0;
}
float Avg(int num1,int num2){
    int sum=0;
    int count=0;
    for (int i=num1;i<=num2;i++){
        if (i%2==0){
            sum+=i;
            count+=1;
        }
    }
    float avg=sum/count;
    return avg;
}

