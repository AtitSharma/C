#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter a number");
    scanf("%d",&n);


    ptr=(int *) calloc(n,sizeof(n));
    for(int i=0;i<n;i++){
        printf("Enter elements in the calloc \n");
        scanf("%d",&ptr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d \n",ptr[i]);
    }

    return 0;
}