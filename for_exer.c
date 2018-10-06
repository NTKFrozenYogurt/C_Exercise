#include <stdio.h>
 
int summation(void);
int avgcal(void);

int main(void){
    // for(initial;condition;change){}
    summation();
    avgcal();
    return 0;
}

int summation(void){
    int input, sum=0, counter;
    printf("input a integer : ");   scanf("%d", &input);
    for (counter=0;counter<=input;counter++){
        sum=sum+counter;
    }
    printf("sum of numbers 1 to %d is %d\n", input, sum);
    return 0;
}

int avgcal(void){
    double input=0, sum, result; int counter=0;
    printf("input a real nums, 0 to quit\n");
    for ( ;input!=0;){
        counter++;
        scanf("%lf", &input);
        sum=sum+input;
    }
    result=sum/(counter-1); printf("avg of inputs, 0 is not averaged: %f\n", result);
    return 0;
}