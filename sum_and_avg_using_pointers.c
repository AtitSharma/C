#include<stdio.h>
void sum_n_avg(int a,int b,int *sum,float *avg);
int main(){
    int a,b,sum;
    float avg;
    a=3;
    b=6;
    sum_n_avg(a,b,&sum,&avg);
    printf("The sum of a and b is %d \n",sum);
    printf("The avg of a and b is %f \n",avg);

    return 0;
}
void sum_n_avg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)*sum/2;
}
