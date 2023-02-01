#include<stdio.h>
void display(char[]);
int main(){
    char string[]="Hello World";
    display(string);
    return 0;
}


void display(char string[]){
    int i=0;
    int count=0;
    while(string[i]!='\0'){
        count+=1;
        i+=1;
    }
    printf("The len is %d \n",count);

}