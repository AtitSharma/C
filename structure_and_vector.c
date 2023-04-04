#include<stdio.h>


struct vector{
    int x;
    int y;


};


int main(){
    struct vector v1,v2;
    v1.x=10;
    v1.y=12;
    printf("The value of v1 are %d %d \n",v1.x,v1.y);



    v2.x=11;
    v2.y=110;
    printf("The value of v2 are %d %d \n",v2.x,v2.y);

    return 0;
}