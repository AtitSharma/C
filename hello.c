#include<stdio.h>

int main(){

    int table[10];
    int num=5;
    for(int i=1;i<10;i++){
        table[i]=num*(i+1);
    }
    for(int i=1;i<10;i++){
        printf("%d \n",table[i]);
    }

    return 0;
}