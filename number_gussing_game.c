#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int user_choose;
    srand(time(0));
    int computer_input = rand() % 100;
    int chance =0;
    while (chance<=5){
        printf("Enter a number");
        scanf("%d",&user_choose);
        if (user_choose==computer_input){
            printf("You choosed correct number that is %d in %d attempts \n",computer_input,chance);
            break;
        }
        else if (user_choose >computer_input){
            printf("Choose the lesser number \n");
            chance+=1;
        }
        else{
            printf("Choose the greater number \n");
            chance+=1;
        }
        if (chance+1 >5){
        printf("You didnt make it in 5 chance,The correct answer is %d \n",computer_input);
        break;
    }
    }

    return 0;
}