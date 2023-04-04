#include<stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];

};


int main(){
    int a =34;
    char b ='g';
    float d =23.32;
    struct employee e1;
    e1.code=a;
    e1.salary=32.12;
    strcpy(e1.name,"Carry");
    printf("%d \n",e1.code);
    printf("%s \n",e1.name);

    return 0;
}