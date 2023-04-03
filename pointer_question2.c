#include<stdio.h>
void address_printer(int);
int main(){
    int a=100;
    printf("The address of a is %d \n",&a);
    address_printer(a);
    return 0;
}


void address_printer(int a){
    printf("The address of a is %d \n",&a);

}