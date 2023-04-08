// create file

#include<stdio.h>

int main(){
    FILE * fptr;
    //Create and write a file
    fptr=fopen("Filehandling.txt","w");
    fprintf(fptr,"I am writing first time in file \n");
    fclose(fptr);

    //append file
    fptr=fopen("Filehandling.txt","a");
    fprintf(fptr,"I appended more files is this file \n");

    fclose(fptr);

    //Read file
    fptr=fopen("Filehandling.txt","r");
    char MyString[100];
    fgets(MyString,100,fptr);
    // printf("%s",MyString);
    fclose(fptr);

    // print multiple lines
    fptr=fopen("Filehandling.txt","r");
    while(fgets(MyString,100,fptr)){
        printf("%s",MyString);
    }
    fclose(fptr);

    return 0;
}
