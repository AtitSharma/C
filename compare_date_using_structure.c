#include<stdio.h>

typedef struct date{
    int year;
    int month;
    int day;

}date;


void display(date d){
    printf("The year is %d the month is %d and day is %d \n",d.year,d.month,d.day);
}

int main(){
    date d1={2020,9,1};
    date d2={2022,11,7};
    display(d1);
    display(d2);
    
    return 0;
}