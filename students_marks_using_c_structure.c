#include<stdio.h>

typedef struct student{
    int roll;
    char name[20];
    char address[25];
    int marks;

}std;

void display(std stud1[]);

int main(){
    std stud1[5];
    for (int i=0;i<5;i++){
        printf("Enter the roll of student %d  \n",i+1);
        scanf("%d",&stud1[i].roll);
        printf("Enter the name of student %d \n",i+1);
        scanf("%s",stud1[i].name);
        printf("Enter the address of student %d \n",i+1);
        scanf("%s",stud1[i].address);  
        printf("Enter the marks of student %d \n",i+1);
        scanf("%d",&stud1[i].marks);  

    }

    display(stud1);


    return 0;
}

void display(std stud1[]){
    for(int i=0;i<5;i++){
        if (stud1[i].marks > 250){
            printf("The name is %s \n The roll number is %d \n The marks is %d \n The address is %s \n",
            stud1[i].name,stud1[i].roll,stud1[i].marks,stud1[i].address);
        }

    }
}