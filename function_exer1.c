#include <stdio.h>

int Addition(int num1, int num2);
void VOIDDDDDDDDDDDD(void);
int Max(int num1, int num2);    int Min(int num1, int num2);    int Abs(int num1);
int CompareAbs(int num1, int num2);
int MaxThreeNum(int num1, int num2, int num3);  int MinThreeNum(int num1, int num2, int num3);
void Fibonacci(int num1);

int main(void){
    int opt, input01, input02, input03, result;
    printf("1.Addition \n2.Calculate Absolute Value \n3.Compare Absolute Value \n4.Fibonacci series \n5.Maximum Number Between 3 Numbers \nother.quit \ninsert a number : ");
    scanf("%d", &opt);

    switch(opt){
        case 1 :
            printf("enter 2 numbers : ");   scanf("%d %d", &input01, &input02);
            result= Addition(input01, input02); printf("result : %d\n", result);
            break; 
        case 2 :
            printf("enter a number : ");    scanf("%d", &input01);
            result=Abs(input01);    printf("result : %d\n", result);
            break; 
        case 3 : 
            printf("enter 2 numbers : ");   scanf("%d %d", &input01, &input02); 
            result= Max(Abs(input01), Abs(input02));
            printf("Maximum of Absolute value : %d\n", result); printf("%d has higher absolute value than other\n", CompareAbs(input01, input02));
            break; 
        case 4 : 
            printf("enter a number : ");    scanf("%d", &input01);
            Fibonacci(input01);
            break; 
        case 5 : 
            printf("enter three numbers : ");    scanf("%d %d %d", &input01, &input02, &input03);
            printf("Max number is %d, Min number is %d\n", MaxThreeNum(input01, input02, input03), MinThreeNum(input01, input02, input03));
            break;
        case 99 : 
            VOIDDDDDDDDDDDD(); 
            break; 
        default : printf("quit\n");
    }

    return 0; 
}

int Addition(int num1, int num2){return num1+num2;}

void VOIDDDDDDDDDDDD(void){
    printf("VOIDDDDDDDDDDDDDDDD\n");
    return ;
}

int Max(int num1, int num2){
    if (num1>=num2) {return num1;}
    else return num2;
}

int Min(int num1, int num2){
    if (num1<=num2) {return num1;}
    else return num2;
}

int Abs(int num1){return (num1>=0) ? num1 : num1*(-1) ;}

int CompareAbs(int num1, int num2){
    if (Abs(num1)>=Abs(num2)) {return num1;}
    else return num2;
}

void Fibonacci(int num1){
    //this program show Fibonacci series, starting 0, until input(num1). (term1, term2, term3, ...term(input))
    int output=0, count1=0, count2=1;
    for (int i=1;i<=num1;i++){
        printf("%d ", output);
        output=count1+count2;
        count2=count1; 
        count1=output;
    }
    printf("\n");
    return ; 
}

int MaxThreeNum(int num1, int num2, int num3){
    //this program return maximum number between three numbers
    if (Max(num1, num2)>=num3) {return Max(num1, num2);}
    else return num3;
}

int MinThreeNum(int num1, int num2, int num3){
    //this program return minimum number between three numbers
    if (Min(num1, num2)<=num3) {return Min(num1, num2);}
    else return num3;
}