#include<stdio.h>
void  tentimes(int *num);
int main(){
    int num=100;
    printf("The value of number is %d \n",num);
    tentimes(&num);
    printf("The value of number is %d \n",num);

    return 0;
}

void   tentimes(int *num){

    *num = (*num)*10;

}
    