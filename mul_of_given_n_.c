
//////**********************Using WhileLoops**************************
// #include<stdio.h>

// int main(){
//     int num;
//     int i=1;
//     printf("Enter a Number to find Multiplications");
//     scanf("%d",&num);
//     while (i<=10){
//         printf("%dx%d=%d \n",num,i,i*num);
//         i++;
//     }
//     return 0;
// }




//*********************************Using For Loop****************************

#include<stdio.h>

int main(){
    int num;
    int i;
    printf("Enter a num");
    scanf("%d",&num);
    for (i=1;i<=10;i++){
        printf("%dx%d=%d \n",num,i,i*num);
    }

    

    return 0;
}