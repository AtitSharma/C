#include<stdio.h>
int main(){
    int PrimeNum,n=20;
    for (int i=2;i<n;i++){
        PrimeNum=0;
        for (int j=2;j<i;j++){
            if (i%j==0)
                PrimeNum++;
                
        } 
        if(PrimeNum==0)
            printf("%d \n",i);                
    }
    return 0;
}
