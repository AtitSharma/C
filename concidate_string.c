#include<stdio.h>
#include <string.h>

int main(){
    char a[]="Ram";
    char b[]="Shyam";

    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    int j = 0;
    while(b[j]!='\0'){
        a[i]= b[j];
        i++;
        j++;
    }
    a[i]='\0';
    puts(a);

    // printf("%s",a);
    return 0;
}