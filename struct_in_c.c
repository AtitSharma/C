#include<stdio.h>


struct student{
    int student_id;
    char student_name[100];
    int marks_1;
    int marks_2;
    int marks_3;
    int total;
}st[3];

int main(){
    // struct student st;
    for (int i=0;i<3;i++){
        printf("Enter the student id  of student[%d]\n",i);
        scanf("%d",&st[i].student_id);
        printf("Enter the student name student[%d]\n",i);
        scanf("%s",& st[i].student_name);
        printf(" Enter the marks of maths student[%d]\n",i);
        scanf("%d",&st[i].marks_1);
        printf(" Enter the marks of science student[%d]\n",i);
        scanf("%d",&st[i].marks_2);
        printf(" Enter the marks of computer student[%d]\n",i);
        scanf("%d",&st[i].marks_3);
        st[i].total = st[i].marks_1 + st[i].marks_2 + st[i].marks_3;

    }
    printf("Dispaly student information \n");
    printf("Name \t Student_ID \t  marks1 \t marks2 \t marks 3 \t \n");
    for(int i=0;i<3;i++){
        printf("%s \t %d \t %d \t %d \t  %d \t" \n,st[i].student_name,st[i].student_id,st[i].marks_1,st[i].marks_3);
    }




    

    return 0;
}