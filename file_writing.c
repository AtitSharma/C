#include<stdio.h>

int main(){
    FILE *ptr;
    int number=45;
    ptr=fopen("generated.txt","w");
    fprintf(ptr,"The number is %d",number);
    fprintf(ptr,"The number is %d",number);


    return 0;
}