#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the size of two matrixes \n");
    scanf("%d %d",&m,&n);
    int matrix1[m][n],matrix2[m][n],summatrix[m][n];


    printf("Enter the element in the First Matrix \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the value in matrix1[%d][%d]\n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }


    printf("Enter the element in the Second Matrix \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the value in matrix2[%d][%d] \n",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            summatrix[i][j]=matrix1[i][j]+matrix2[i][j];

        }
    }

    //Diaplay the sum guyz


    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",summatrix[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}