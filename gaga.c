#include<stdio.h>

int main(){
    int table[10];
    int num=5;
    for(int i=0;i<11;i++){
        table[i]=num*i;
    }
    for(int i=0;i<11;i++){
        printf("%d",table[i]);
    }


    return 0;
}