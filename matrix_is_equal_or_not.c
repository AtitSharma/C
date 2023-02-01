#include<stdio.h>

int main(){
    int matrix1[3][3], matrix2[3][3],rows_matrix1,rows_matrix2,columns_matrix1,columns_matrix2;
    printf("Enter rows of matrix 1  \n");
    scanf("%d",&rows_matrix1);
    printf("Enter columns of matrix 1 \n");
    scanf("%d",&columns_matrix1);
    printf("Enter rows of matrix 2 \n");
    scanf("%d",&rows_matrix2);
    printf("Enter rows of matrix 2 \n");
    scanf("%d",&columns_matrix2);
    if(rows_matrix1!=rows_matrix2  || columns_matrix1!=columns_matrix2){
        printf("The matrix is Not Equal");
    }
    else{
        int end=0;
        //Initializing matrix1
        for(int i=0;i<rows_matrix1;i++){
            for(int j=0;j<columns_matrix1;j++){
                printf("Enter number in Matrix1 \n");
                scanf("%d",&matrix1[i][j]);


            }
        } 
        //Initializing matrix2
        for(int i=0;i<rows_matrix2;i++){
            for(int j=0;j<columns_matrix2;j++){
                printf("Enter number in Matrix2 \n");
                scanf("%d",&matrix2[i][j]);


            }
        } 
        //Checking for if equal
        for(int i=0;i<rows_matrix1;i++){
            for(int j=0;j<columns_matrix1;j++){
                if (matrix1[i][j]!=matrix2[i][j]){
                    end++;

                }
            }
        }
        if (end!=0){
            printf("Its not equal");
        }
        else{
            printf("Its  equal");
        }
    }
    return 0;
}