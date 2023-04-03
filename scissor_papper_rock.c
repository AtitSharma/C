
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Computer_Play();
void Human_Play();
void Win_Condition(char,char);
int main() {

    printf("Do you want to play with computer or human \n");
    printf("Enter 1 for playing with computer \n");
    printf("Enter 2 for playing with human \n");
    int user_input_number;
    scanf("%d",&user_input_number);
    if (user_input_number==1){
        Computer_Play();
    }
    else if (user_input_number==2){
        Human_Play();
    }
    else{
        printf("Enter a valid number \n");
    }  
    return 0;
}
void Computer_Play(){
    printf("Enter \n s for Scissor(s) \n p for Papper(p) \n r for Rock (r)\n ");
    char user_choose;
    fgets(user_choose ,1,stdin);
    
    srand(time(0));
    int computer_input = rand() % 3 + 1;
    char computer_choice='r';
    if (computer_input==1){
        computer_choice='s';
    }
    if (computer_choice==2){
       computer_choice='p';
    }
    if(computer_choice==3){
        computer_choice='r';
    }
    // scanf("%c",&user_choose);
    // Win_Condition(computer_choice,user_choose);
    // char x=Win_Condition(computer_choice,user_choose);
}
void Human_Play(){
    printf("Human Play \n");
}
void  Win_Condition(char computer_choice,char user_choose){
        if (computer_choice=='r' && user_choose=='p'){
        printf("!!!!!!!!!    Hurray    !!!!!!   You Win \n");

    }
    else if (computer_choice=='s' && user_choose=='r'){
        printf("!!!!!!!!!    Hurray    !!!!!!   You Win \n");

    }
    else if (computer_choice=='p' && user_choose=='s'){
        printf("!!!!!!!!!    Hurray    !!!!!!   You Win \n");

    }
    else if (computer_choice=='r' && user_choose=='s'){
        printf("!!!!!!!!!    Sad   !!!!!!   You Loose \n");

    }
    else if (computer_choice=='s' && user_choose=='p'){
        printf("!!!!!!!!!    Sad   !!!!!!   You Loose \n");

    }
    else if (computer_choice=='p' && user_choose=='r'){
        printf("!!!!!!!!!    Sad   !!!!!!   You Loose \n");

    }
    else{
        printf("Draw\n");
    }
}


