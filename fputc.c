#include<stdio.h>

int main(){
    FILE * ptr;
    ptr=fopen("putcdemo.txt","w");
    putc('H',ptr);
    return 0;
}