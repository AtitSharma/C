#include<stdio.h>
#include<string.h>

struct employee{

    int salary;
    int age;
    char name[20];

};
void display(struct employee e1){

    printf("The salary of employee is %d \n",e1.salary);
    printf("The age of employee is %d \n",e1.age);
    printf("The name of employee is %s \n",e1.name);

}

int main(){

    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->salary=10;
    ptr->age=30;
    strcpy(ptr->name,"Atit");
    display(e1);
    return 0;
}