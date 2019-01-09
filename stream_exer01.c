#include <stdio.h>

void FnBasic(void);

int main(void){
    FnBasic();

    return 0;
}

void FnBasic(void){
    int ch1, ch2;

    ch1=getchar();
    //getchar는 stdin(표준 입력 스트림, 즉 키보드 입력)으로부터 '하나'의 문자를 입력받아 ch1에 저장하는 함수. 
    ch2=fgetc(stdin);
    //fgetc는 stdin 등 문자를 입력받을 스트림을 지정해, 그 스트림으로부터 입력받은 '하나'의 문자를 ch2에 저장하는 함수. 

    putchar(ch1);
    //putchar는 ch1을 받아 stdout(표준 출력 스트림, 즉 터미널 창)에 출력하는 함수. 이 함수의 반환형이 int임에 유의
    fputc(ch2, stdout);
    //fputc는 ch2를 받아 stdout 등 문자를 출력할 곳을 지정해 출력하는 함수. 이 함수를 이용해 외부 file등에 입력한 값들을 저장할 수 있음.  

    //입력, 출력하는 문자에 /n (enter)가 포함됨에 유의! 프로그램 실행시 q (enter)를 입력하면 ch1에는 q가, ch2에는 /n이 저장되어, putchar(ch1)에서 q가, fput(ch2, stdout)에서 /n이 출력됨!
}

