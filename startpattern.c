#include<stdio.h>
void pattern1(){
    for(int i=1;i<10;i++){
        for (int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern2(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10-i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3(){
    for(int i=1;i<7;i++){
        for(int j=1;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}
void pattern4(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");

        }
        printf("\n");
    }
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    pattern3();
    return 0;
}