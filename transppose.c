#include<stdio.h>
int main(){
    int m[3][3],trans[3][3],rows,columns;
    printf("Enter rows and columns");

    //Initializing Matrix
    scanf("%d %d",&rows,&columns);
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("Enter the number");
            scanf("%d",&m[i][j]);

        }
    }
    
    //Printing Matrix
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d \t",m[i][j]);
            

        }
        printf("\n");
    }
    //Transposing
    for (int i=0;i<rows;i++){
        for (int j=0;j<columns;j++){
            trans[i][j]=m[j][i];
        }
    }

    printf("The matrix after reversed is \n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d \t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}