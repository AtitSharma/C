#include<stdio.h>

struct Organization{
    char org_name[30];
    int members;
    struct Employee{
        int emp_id;
        char name[20];
        int height;
    }emp;
};

int main(){

    struct Organization org;
    printf("Enter orgnization name \n");
    scanf("%s",org.org_name);
    printf("Enter the number of members in the organizations \n");
    scanf("%d",&org.members);
    printf("Enter the emp_id \n");
    scanf("%d",&org.emp.emp_id);
    printf("Enter the emp name  \n");
    scanf("%s",org.emp.name);
    printf("Enter the emp height  \n");
    scanf("%d",&org.emp.height);

    printf("The details ares \n");


    printf("The org name is %s \n",org.org_name);
    printf("The member number  is %d \n",org.members);
    printf("The emp_id is %d \n",org.emp.emp_id);
    printf("The emp name is %s \n",org.emp.name);
    printf("The height  is %d \n",org.emp.height);


    
    return 0;
}