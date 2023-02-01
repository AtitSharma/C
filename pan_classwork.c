#include<stdio.h>

int main(){
    int sum=0,a;
    float avg;
    printf("Enter number of marks \n");\
    scanf("%d",&a);
    int marks[a];
    for (int i=0;i<a;i++){
        scanf("%d",&marks[i]);
        sum+=marks[i];

    }
    for (int i=0;i<a;i++){
        if (marks[i] >=50){
            printf("The marks above 50 are %d \n",marks[i]);
            
        }
    }
    avg=sum/a;
    printf("The average of the marks is %f \n",avg);



    return 0;
}