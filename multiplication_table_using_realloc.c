#include<stdio.h>
#include<stdlib.h>

int main(){
    int * ptr;
    ptr=(int *)malloc(10*sizeof(int));

    for(int i=1;i<11;i++){
        ptr[i]=7*i;
    }
    for(int i=1;i<11;i++){
        printf("%d X %d = %d \n",7,i,ptr[i]);
    }
    ptr=realloc(ptr,15*sizeof(int));
    for(int i=1;i<16;i++){
        ptr[i]=7*i;
    }
    for(int i=1;i<16;i++){
        printf("%d X %d = %d \n",7,i,ptr[i]);
    }
    free(ptr);
    return 0;
}