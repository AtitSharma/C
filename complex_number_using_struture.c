#include<stdio.h>

typedef struct complex{
    int real;
    int complex;

}comp;

void display(comp c){
    printf("The real number if the given number is %d \n",c.real);
    printf("The complex number if the given number is %d \n",c.complex);


}




int main(){
    comp num[5];
    for(int i=0;i<5;i++){
        printf("Enter the value  complex value of %d number \n",i+1);
        scanf("%d",&num[i].real);
        printf("Enter the value real value  %d number \n",i+1);
        scanf("%d",&num[i].complex);
    }
    for (int i=0;i<5;i++){
        display(num[i]);
    }

    return 0;
}