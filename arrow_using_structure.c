#include<stdio.h>

struct student{

    char name[100];
    int id;
    float marks;
};

int main(){
    struct student *stptr,st;
    stptr=&st;

    printf("Enter the name of student \n");
    scanf("%s",&(stptr)->name);
    printf("Enter the ID of student \n");
    scanf("%d",&(stptr)->id);
    printf("Enter the marks of student \n");
    scanf("%f",&(stptr)->marks);
    
    printf("\n name of student is %s",(stptr)->name);
    printf("\n name of student is %d",(stptr)->id);
    printf("\n name of student is %.2f",(stptr)->marks);

    
    return 0;
}