#include<stdio.h>

int main(){
    char name[20];
    int sub1,sub2,sub3,sub4,sub5,total;
    float percentage;
    printf("Enter Your Name \n");
    scanf("%s",name);
    printf("Enter your marks of 5 subjects \n");
    printf("Enter your marks in MP \n");
    scanf("%d",&sub1);
    printf("Enter your marks  AC \n");
    scanf("%d",&sub2);
    printf("Enter your marks C \n");
    scanf("%d",&sub3);
    printf("Enter your marks  Eng \n");
    scanf("%d",&sub4);
    printf("Enter your marks  Math \n");
    scanf("%d",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    percentage= total/5;
    printf("%s \t %d \t %f \n",name,total,percentage);
    return 0;
}