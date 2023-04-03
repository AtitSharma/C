#include<stdio.h>

struct employee{
    char empName[50];
    int age;
    float salary;

}emp,emp1;





int main(){
    FILE *fp,*fp1;
    fp=fopen("employee.txt","wb");
    printf("\n enter employee name");
    scanf("%s",&emp.empName);
    printf("\n enter the age of employee");
    scanf("%d",&emp.age);
    printf("\n enter the salary of employee");
    scanf("%f",&emp.salary);
    
    
    return 0;
}