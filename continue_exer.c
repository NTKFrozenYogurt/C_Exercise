#include <stdio.h>

int Add_1_to_n(void);
int EvenNumMultiple(void);
int ABplusBAeq99(void);

int main(void){
    //break; // break를 포함하는 loop문의 작동을 stop
    //continue; // continue 이후 부분을 스킵하고, 다시 loop

    int opt;
    printf("1.addtion 1 to n \n2.EvenNumMultiplicationTable \n3.AB+BA=99 \nother input.quit \ninsert a number : ");
    scanf("%d", &opt);

    if (opt==1) {Add_1_to_n();}
    if (opt==2) {EvenNumMultiple();}
    if (opt==3) {ABplusBAeq99();}

    return 0;
}

int Add_1_to_n(void){
    int input, counter=0, result=0, bugcounter=0;;
    printf("enter a number to addition. this program will calculate sum of 1 to input\n");
    scanf("%d", &input);

    while(1){
        counter++;
        result=result+counter;
        if (counter==input) {break;}
        else if (counter>input) {bugcounter=1; break;} //counter가 input보다 높게 되는 버그가 일어났을 때 쓰려는 코드
    }
    
    if (bugcounter==0) {printf("sum of 1 to n is %d\n", result);}
    else {printf("sorry, a problem has occured. please try again.\n");}
    return 0;
}

int EvenNumMultiple(void){
    int input=0, input_modified, count1=0, count2, result;
    printf("this Program show multiplication table of even numbers. \nenter number which become a limit of table : ");
    do {
        scanf("%d", &input);
        if (input<=0) {printf("please input number upper than 0 : ");}
    } while (input<=0);

    input_modified = (input%2==0) ? input : input-1 ;  

    while (1){
        count1=count1+2; count2=2;
        for (count2=2; count1>=count2; count2=count2+2){
            result=count1*count2;
            printf("%d*%d=%d\t", count1, count2, result);
        }
        printf("\n");
        if (count1>=input_modified) {break;}
    }
    
    return 0;
}

int ABplusBAeq99(void){
    int Anum=1, Bnum, result;
    for (Bnum=1;Anum<=9;Bnum++){
        if (Bnum>=10) {Bnum=1; Anum++;}
        result=Anum+Bnum;
        if (result!=9) {continue;}
        printf("(%d, %d) ", Anum, Bnum);
    }
    printf("\n");

    return 0;
}