// Write program to take 5 records of cattle (cid, name, age, weight) from user and
// display the average weight of cattles.



#include<stdio.h>
#include <string.h>

typedef struct cattle{
    int cid;
    char name[20];
    int age;
    int weight;

}cat1;


void display(cat1 cat[],int n){
    float average =0;
    for(int i=0;i<n;i++){
        average+=cat[i].weight;

    }
    printf("The average weight of cattles are %.2f \n",average);
    


}


int main(){
    cat1 cat[5]; 
    for(int i=0;i<5;i++){
        printf("Enter cattle id \n");
        scanf("%d",&cat[i].cid);
        printf("Enter cattle name \n");
        scanf("%s",cat[i].name);
        printf("Enter cattle age \n");
        scanf("%d",&cat[i].age);
        printf("Enter cattle weight \n");
        scanf("%d",&cat[i].weight);
    }
    display(cat,5);



    return 0;
}