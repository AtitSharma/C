#include<stdio.h>
void ten_times(int *tentimes,int *num);

int main(){
    int num=20;
    int tentimes;
    ten_times(&tentimes,&num);
    printf("The tentimes of a number %d is %d \n",num,tentimes);
    return 0;
}
void ten_times(int *tentimes,int *num){
    *tentimes=(*num) * 10;
}