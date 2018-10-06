#include <stdio.h>

int ChooseProgram(void);
int Calculation(void);
int Prtmultiple3or4(void);
int CalAbs(void);
int Grade(void);

int main(void){
    // if(condition) {command;}
    // else if (condition) {command;} // not essential
    // else {command;} //also not essential
    ChooseProgram();

    // (condition) ? trueoutput : falseoutput ; 같은 것도 있음. 
    return 0;
}

int ChooseProgram(void){
    int opt;
    printf("insert number \n1.calculation \n2.print 3 or 4 s multiple \n3.Calculate Abs \n4.Grade \nother.quit\n");
    scanf("%d", &opt);
    
    if (opt==1) {Calculation();}
    if (opt==2) {Prtmultiple3or4();}
    if (opt==3) {CalAbs();}
    if (opt==4) {Grade();}

    return 0;
}

int Calculation(void){
    int opt; double num1, num2, result=0;
    printf("insert number \n1.addition \n2.subtraction \n3.multiplication \n4.division \n5.difference \nother : quit\n");
    scanf("%d", &opt);
    printf("insert two numbers\n");
    scanf("%lf %lf", &num1, &num2);

    if (opt==1) {result=num1+num2;}
    else if (opt==2) {result=num1-num2;}
    else if (opt==3) {result=num1*num2;}
    else if (opt==4) {result=num1/num2;}
    else if (opt==5) {result= (num1>num2) ? num1-num2 : num2-num1 ;}
    else {;}

    printf("result : %f\n", result);
    return 0;
}

int Prtmultiple3or4(void){
    int i;

    for (i=1;i<=100;i++){
        if (i%3==0||i%4==0) {printf("%d ", i);}
    }
    printf("\n");

    return 0;
}

int CalAbs(void){
    double input, output;
    printf("insert number : ");
    scanf("%lf", &input);

    output = (input>=0) ? input : input*(-1) ;
    printf("abs of %f is %f\n", input, output);

    return 0;
}

int Grade(void){
    double score; 
    printf("insert your test score : ");
    scanf("%lf", &score);
    
    if (score<=100 && score>=95) {printf("your grade is A+\n");}
    else if (score>=90 && score<95) {printf("your grade is A\n");}
    else if (score>=70 && score<90) {printf("your grade is B+\n");}
    else if (score>=60 && score<70) {printf("your grade is B\n");}
    else if (score>=55 && score<60) {printf("your grade is C+\n");}
    else if (score>=50 && score<55) {printf("your grade is C\n");}
    else if (score>=42 && score<50) {printf("your grade is D\n");}
    else if (score>=0 && score<42) {printf("your grade is F\n");}
    else {printf("wrong score insert. try again\n");}

    return 0;
}