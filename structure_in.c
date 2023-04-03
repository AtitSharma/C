#include<stdio.h>
struct student{
    char name[10];
    int roll;
    int marks;
    };
void display(struct student);



int main(){
    struct student st;
    printf("Enter your name");
    scanf("%s",&st.name);
    printf("Enter your roll");
    scanf("%d",&st.roll);
    printf("Enter your marks");
    scanf("%d",&st.marks);
    display(st);
    return 0;
}
void display(struct student stu ){
    printf("Studet name \t Student roll \t Student Marks \t \n");
    printf("%s \t \t",stu.name);
    printf("%d \t\t",stu.roll);
    printf("%d \t \t \n",stu.marks);


}

