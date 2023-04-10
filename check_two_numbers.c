#include<stdio.h>

int main(){
    char str1[10],str2[10];
    printf("Enter the first word \n");
    scanf("%s",str1);
    char c;
    printf("Enter the words one by one \n");
    int i=0;
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;       

    }
    str2[i]='\0';

    printf("%s \n",str1);
    printf("%s \n",str2);

    return 0;
}