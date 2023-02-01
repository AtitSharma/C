#include<stdio.h>
void findNextAddress(int i);
int main(){
    int i;
    printf("The address of i is %u \n",&i);
    findNextAddress(i);

    return 0;
}

void findNextAddress(int i){
    printf("The address of i is %u \n",&i);
}