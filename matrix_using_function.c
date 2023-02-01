#include<stdio.h>
void display(int num[][2]);
int main(){
    int num[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&num[i][j]);
        }
    }
    display(num);
    return 0;
}


void display(int num[][2]){
    for (int i=0;i<2;i++){
        printf("\n");
        for (int j =0;j<2;j++){
            printf("%d \t",num[i][j]);
        }
    }



}