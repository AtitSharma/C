#include<stdio.h>
#include<string.h>
int main(){
    char new_str[100];
    char str1[]="MORGANCOLLEGE";
    char str2[]="c programming";
    printf("%lu \n",strlen(str1));
    //strcpy(str2,str);
    // strcat(new_str ,str1);
    // strcat(new_str ,str2);
    // printf("%s \n",str1);
    // printf("%s \n",new_str);
    // char a=strcat(str,str2)
    // strrev(str1);
    strlwr(str1);
    printf("%s",str1);
    return 0;
}

