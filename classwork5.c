#include<stdio.h>
#include<string.h>

int main(){
    char name;
    printf("enter character\n");
    scanf("%c", &name);
    
    if (name=='a' || name=='e' || name=='i' || name=='o' || name=='u'||name=='A'||name=='E'||name=='I'||name=='O'||name=='U')
    {
        printf("vowel\n");
    }
    else{
        printf("consonent\n");
    }
    
    
    return 0;
}   