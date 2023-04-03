#include<stdio.h>

int main(){
    int x=11;
    int y=12;
    int z=14;
    int * ptr1=&x;
    int *ptr2=&y;
    int * ptr3=&z;

    // printf("%d",*ptr1);
    if(*ptr1 > * ptr2 && *ptr1 > *ptr3){
        printf("The greater number is %d",*ptr1);
    }
    else if(*ptr2 > * ptr1 && *ptr2 > *ptr3){
        printf("The greater number is %d",*ptr2);
    }
    else{
        printf("The greter number is %d ",*ptr3);
    }


    

    return 0;
}