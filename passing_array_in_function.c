#include<stdio.h>

void PrintArray(int *ptr,int size);
int main(){
    int marks[]={1,2,3,4,5},size=5;
    PrintArray(marks,size);
    return 0;
}

 
void PrintArray(int *ptr,int size){

    for(int i=0;i<size;i++){
        printf("The elements is the array at %d is %d \n",i+1,*(ptr+i));
        // ptr++;
    }

}