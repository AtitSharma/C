#include<stdio.h>

int main(){
    int i=34;
    int *j=&i;
    int **double_p=&j;
    // printf("%u \n ",j);
    // printf("%u \n ",&i);
    // printf("%d \n ",*j);
    // printf("The value if j is %d ",*(&j));
    printf("The address of i is %u \n",&i);
    printf("The value of i is %d \n",*j);
    printf("The address of i is %u \n",*(&j));
    printf("The address of j is %u \n",&double_p);
    // printf("The address of j is %u \n",**double_p);

    return 0;
}