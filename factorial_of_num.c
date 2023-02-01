#include <stdio.h>
int main(){
    int num;
    int i;
    int factorial;
    printf("Enter a num");
    scanf("%d",&num);
    factorial=1;
    for(i=1;i<=num;i++){
        factorial*=i ;
    }
    printf("%d \n",factorial);
}