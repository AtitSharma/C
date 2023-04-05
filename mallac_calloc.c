#include<stdio.h>
#include <stdlib.h>

int main(){
    printf("%d \n",sizeof(int));
    printf("%d \n",sizeof(char));
    printf("%d \n",sizeof(float));

    int *ptr;
    ptr= (int *) malloc(6*sizeof(int));
    for (int i=0;i<6;i++){
        printf("Enter a number \n");
        scanf("%d",&ptr[i]);
    }
    for (int i=0;i<6;i++){
        printf("%d \n",ptr[i]);
    }
    return 0;
}