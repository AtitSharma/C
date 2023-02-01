#include<stdio.h>
#include<string.h>

int main(){
    char st[]="PooJadeVi";
    for (int i=0;i<strlen(st);i++){
        if (st[i]>=97 && st[i]<=123){
            st[i]=st[i]-32;
        }
    }
    printf("%s \n",st);
    return 0;
}