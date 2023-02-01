#include<stdio.h>
void display(char[]);
int main(){
    char string[]="Hello World";
    display(string);
    return 0;
}


void display(char string[]){
    printf("%s \n",string);
}