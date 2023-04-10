#include<stdio.h>

int main(){
    char string[]="Atit Sharma";
    char * ptr;
    ptr=&string;
    printf("%u \n",ptr);
    printf("%c \n",*ptr);
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}