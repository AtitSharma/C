#include<stdio.h>


void avg_sum(int num1,int num2,int *sum,float *avg);

int main(){
    int num1=10,num2=20;
    // int avg=avg_sum(&num1,&num2);
    // int sum=(*(&num1))+(*(&num2));
    int sum=0;
    float avg;
    avg_sum(num1,num2,&sum,&avg);
    printf("The sum of the numbers is %d \n",sum);
    printf("The average of numbers is %.2f \n",avg);
    return 0;
}


void avg_sum(int num1,int num2,int *sum,float *avg){
    *sum= num1 + num2;
    *avg = (*sum)/2;

}