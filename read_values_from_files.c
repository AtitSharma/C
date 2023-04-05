#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("getcdemo.txt","r");
    // char c =fgetc(ptr);
    printf("%c",fgetc(ptr));
    return 0;
}