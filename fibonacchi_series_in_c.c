#include<stdio.h>
int fibonacchi(int a);
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The fibonacchi numbe at %d is %d \n",n,fibonacchi(n));
    
    return 0;
}

int fibonacchi(int a){
    if (a<=1){
        return a;

    }
    else{
        return fibonacchi(a-1) + fibonacchi(a-2);
    }

}