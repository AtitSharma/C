#include<stdio.h>

int main(){
    int no_of_std=3;
    int no_of_subjects=5;
    int marks[3][5];
    for(int i=0;i<no_of_std;i++){
        for(int j=0;j<no_of_subjects;j++){
            printf("Enter the marks of std %d of subject %d \n",j+1,i+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<no_of_std;i++){
        for(int j=0;j<no_of_subjects;j++){
            printf("The marks are of std %d at subject %d is %d \n",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}