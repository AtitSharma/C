#include<stdio.h>
#include<math.h>

int main(){
    float dis,a,b,c,root1,root2,real,imagi;
    printf("Enter the varialble a,b,c \n");
    
    scanf("%f%f%f",&a,&b,&c);
    dis= b*b - 4*a*c;
    if(dis>0){
        root1= (-b - sqrt(dis))/2*a;
        root2=(-b + sqrt(dis))/2*a;
        printf("The value of root 1 is %f and value of root2 %f \n",root1,root2);
    }

    else if (dis==0){
       root1= -b/2*a;
       printf("The value of root is %f \n",root1);
    }
    else
    {
        real= -b/(2*a);
        imagi= sqrt(-dis)/(2*a);
        printf("The real part is %f and imagiary part is %f \n",real,imagi);

    }


    return 0;
}