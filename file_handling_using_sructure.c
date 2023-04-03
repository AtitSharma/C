#include<stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
}st[5],stu[5];

int main(){

    FILE *fp,*fp1;
    int i;
    fp=fopen("student.txt","wb");
    printf("\n Enter the five student information");
    for(i=0;i<5;i++){
        printf("\n Enter student name ");
        scanf("%s",&st[i].name);
        printf("\n Enter roll no of studet ");
        scanf("%d",&st[i].roll);
        printf("\n Enter marks of studet ");
        scanf("%f",&st[i].marks);

    }
    printf("\n In writing this information  to a file _ _ _ In");
    fwrite(&st,sizeof(st),5,fp);
    fclose(fp);



    fp1=fopen("student.txt","rb");
    printf("\n display the information");
    printf("\n Name \t Roll \t Marks \t");

    fread(&stu,sizeof(stu),5,fp1);
    for (i=0;i<5;i++){
        if (stu[i].marks > 50){
            printf("\n %s \t %d \t %.2f",stu[i].name,stu[i].roll,stu[i].marks);
        }
        
    }
    fclose(fp1);

    return 0;
}