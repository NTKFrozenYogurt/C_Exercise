#include <stdio.h>

int ProgramSelection(void);
int exercise(void);

int main(void){
    /*
    switch(input){
        case input_1 : {command; break;} //break를 걸지 않으면 default문이 실행됨. 
        case input_2 : case input_3 : {command; break;} //input이 input_2든 input_3이든 같은 command가 실행됨. 
        default : {command;}
    } 
    */
    ProgramSelection();

    return 0;
}

int ProgramSelection(void){
    int opt;
    printf("1.just exercise \nother input.quit \ninsert a number : ");
    scanf("%d", &opt);

    if (opt==1) {exercise();}

    return 0;
}

int exercise(void){
    int input, input_mod;
    printf("input a number : ");
    scanf("%d", &input); input_mod=input/10;

    switch(input_mod){
        case 0 : printf("Your input must be upper than 0 below than 10\n"); break;
        case 1 : printf("Your input must be upper than 9 below than 20\n"); break;
        case 2 : printf("Your input must be upper than 19 below than 30\n"); break;
        default : printf("I can't analyze about your input");
    }

    return 0;
}