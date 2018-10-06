#include <stdio.h>

void Example1(void);
void Example2(void);
void Meaning_of_Const(void);

int main(void){
    int num; char opt;
    printf("Execute example1? (Y/N) : ");   scanf("%c", &opt);
    if (opt=='Y'||opt=='y') {Example1();}    opt='\0';
    printf("Execute example2? (Y/N) : ");   scanf("%c", &opt);
    if (opt=='Y'||opt=='y') {Example2();}   opt='\0';
    printf("Show meaning of const? (Y/N) : ");   scanf("%c", &opt);
    if (opt=='Y'||opt=='y') {Meaning_of_Const();}   opt='\0';

    return 0;
}

void Example1(void){
    int num=20;     printf("int num=20;\n");
    const int* ptr=&num;    printf("const int* ptr=&num;\n");
    //pointer에 이렇게 const 선언을 하는것은 pointer를 이용해 값을 변경할 수 없도록 하는 것이다.
    /* *ptr=30; */  printf("*ptr=30; -> complie error\n");
    //pointer를 이용해 pointer가 가리키는 변수의 값의 변경 시도. 컴파일 에러
    num=40;         printf("num=%d; //complie success. \n", num);
    //pointer를 이용하지 않고 그냥 변수의 값의 변경 시도. 성공. 
}

void Example2(void){
    int num1=17, num2=25;   printf("int num1=17, num2=25;\n");
    int* const ptr=&num1;   printf("int* const ptr=&num1");
    //pointer에 이렇게 const선언을 하는것은 pointer가 가리키는 변수의 주소를 변경할 수 없도록 하는 것 이다. 
    /* ptr=&num2; */        printf("ptr=&num2 -> complie error\n");
    //pointer가 가리키는 주소의 변경 시도. 컴파일 에러
    *ptr= 40;               printf("*ptr= 40", *ptr);
    //pointer가 가리키는 값의 변경 시도. 문제 없음. 
}

void Meaning_of_Const(void){
    printf("const는 프로그램의 안정성을 높이기 위해 활용됩니다.\n");
    printf("프로그램 작성시 const를 사용함으로서 수정되어서는 안되는 상수 등의 값이 변경되는 것을 막을 수 있습니다.\n");
    printf("일반적으로 const를 사용하지 않아 발생하는 문제는 프로그래머의 실수로 인해 발생하기에, 정말 변경되어서는 안되는 상수하면 프로그램의 안정성 밎 실수 예방차원에서 const를 사용하는것이 권장됩니다.\n");
}