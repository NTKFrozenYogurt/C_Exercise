#include <stdio.h>

int Factorial(int num);

int main(void){
    int input, result;
    printf("This program compute (input)! Enter a number: ");
    scanf("%d", &input);
    result=Factorial(input);
    if (result==-1) {printf("your input may negative number. please input other number.\n");}
    else printf("%d! is %d\n", input, result);

    return 0;
}

int Factorial(int num){
    if (num==0) {return 1;}
    else if (num<0) {return -1;}
    else {return num*Factorial(num-1);}
}