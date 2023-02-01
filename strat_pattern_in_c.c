#include<stdio.h>
void starpattern(int num);
int main(){
    int num;
    scanf("%d",&num);
    starpattern(num);
    return 0;
}
void starpattern(int num){
    for (int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}