#include<stdio.h>
struct Mstudents{
    int roll;
    int class;
    float height;

};
struct Fstudents{
    int f_roll;
    int f_class;
    float f_height; 
    struct Mstudents ms;
};

int main(){
    struct Fstudents fs;

    fs.ms.roll=101;
    fs.ms.class=10;
    fs.ms.height=5.7;

    printf("The height of male student is %.2f \n",fs.ms.height);
    
    return 0;
}