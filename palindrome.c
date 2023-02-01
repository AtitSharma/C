#include<stdio.h>
int main(){
    
    int num=100;
    int org;
    int rem,rev;
    for (int i=1;i<=num;i++){
        rev=0;
        org=i;
        int m=i;
        while (org>0){
            rem=org%10;
            rev=(rev*10)+rem;
            org=org/10;
        }
        if (rev==m){
            printf("%d ",rev);
        }


    
}
return 0;
}
