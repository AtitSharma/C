#include<stdio.h>

int main(){
    int i =34;
    int *j =&i;
    printf(" The Value of i is %d \n",i);
    printf(" The Value of j is %d \n",*j);
    printf(" The address of i is %u \n",&i);
    printf(" The address of j is %u \n",&j);
    return 0;
}
