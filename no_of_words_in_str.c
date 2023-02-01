#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];
    gets(sentence);
    int numbers=0;
    for (int i=0;i<=strlen(sentence);i++){
        if (sentence[i]==32){
            numbers++;
        }
    }
    printf("%d",numbers);
    return 0;
}