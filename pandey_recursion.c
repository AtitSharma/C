#include<stdio.h>
int Fibo(int num);
int main(){
    int num=5;
    int x=Fibo(num );
    printf("%d \n",x);
    return 0;
}

int Fibo(int num){
    if(num==1){
        return 1;
    }
    return num * Fibo(num-1);

}