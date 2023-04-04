#include<stdio.h>



struct employee{
    int code;
    float salary;
    char name[20];

};



int main(){
    struct employee atit={100,32.22,"Atit"};
    printf("%d \n",atit.code);
    printf("%.2f \n",atit.salary);
    printf("%s \n",atit.name);
    
    return 0;
}