#include<stdio.h>
int main(){
    int a[3][2];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("Enter data for ");
            scanf("%d \n",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d \t",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;
    
}
