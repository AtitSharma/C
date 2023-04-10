#include<stdio.h>
#include <math.h>
int main(){
    float a,b,c,dis,root1,root2,imagi,real;
    printf("Enter the value of a b c \n");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    if (dis>0){
        root1= (-b+sqrt(dis))/2*a;
        root2= (-b-sqrt(dis))/2*a;
        printf("The value of root1 and root2 are %f %f\n",root1,root2 );

    }
    else if (dis==0){
        root1= -b/2*a;
        printf("The value of root is %f \n",root1);

    }
    else{
        imagi= -b/(2*a);
        real= sqrt(-dis)/(2*a);
        printf("The value of real and imaginary part is %f  %f \n",real,imagi);

    }

    return 0;
}