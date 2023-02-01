#include<stdio.h>
#include<string.h>

int main(){
    char str[]="college";
    int len=strlen(str);
    char reverse[len];
    int j=0;
    for (int i=strlen(str)-1;i>=0;i--){
        reverse[j]=str[i];
        j++;
    }
    printf("%s \n",reverse);

    
    return 0;
}