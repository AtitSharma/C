#include<stdio.h>

int main(){
    int x=10;
    float y=20;
    char z='C';
    printf("%8d,%8.1f,%8e \n",x,y,z);
    printf("%6d,%6.1f,%6d \n",x,y,z);
    return 0;
}