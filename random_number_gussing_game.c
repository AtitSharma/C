#include<stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int number;
    int guessed_num;
    int i=0;
    srand(time(0));
    number=rand()%100 +1;   
    while (i<=10){
        printf("Guess a number \n");
        scanf("%d",&guessed_num);
        if (guessed_num< number){
            printf("Guess larger number again \n");
        }
        else if (guessed_num > number){
            printf("Guess smaller number again \n");
        }
        else if (guessed_num == number){
            printf("Correct guess in %d guesses \n",i);
            break;

        }
        i++;

    }
    if (i>10){
        printf("Sorry you could'nt make it");
    }


    return 0;
}