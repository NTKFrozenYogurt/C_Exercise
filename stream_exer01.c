#include <stdio.h>

void FnBasic(void);
void Whyint(void);
void Fn2(void);
void Fn3(void);

int main(void){
    /*  stream : 한 방향으로 흘러가는 데이터의 흐름. 즉, 데이터의 입력 및 출력이 스트림을 통해 일어남. 
        */
    FnBasic();
    //Whyint();
    Fn2();  printf("\n");
    Fn3();

    return 0;
}

void FnBasic(void){
    int ch1, ch2;

    ch1=getchar();
    //getchar는 stdin(표준 입력 스트림, 즉 키보드 입력)으로부터 '하나'의 문자를 입력받아 ch1에 저장하는 함수. ch1이 int이기 때문에 입력한 문자가 숫자형태로 저장됨에 유의.
    ch2=fgetc(stdin);
    //fgetc는 stdin 등 문자를 입력받을 스트림을 지정해, 그 스트림으로부터 입력받은 '하나'의 문자를 ch2에 저장하는 함수. ch2도 int이기 때문에 입력한 문자가 숫자형태로 저장됨에 유의.

    putchar(ch1);
    //putchar는 ch1을 받아 stdout(표준 출력 스트림, 즉 터미널 창)에 출력하는 함수. 이 함수의 반환형이 int임에 유의. 즉, 저장된 int값을 char형으로 출력
    fputc(ch2, stdout);
    //fputc는 ch2를 받아 stdout 등 문자를 출력할 곳을 지정해 출력하는 함수. 이 함수를 이용해 외부 file등에 입력한 값들을 저장할 수 있음.  

    //입력, 출력하는 문자에 /n (enter)가 포함됨에 유의! 프로그램 실행시 q (enter)를 입력하면 ch1에는 q가, ch2에는 /n이 저장되어, putchar(ch1)에서 q가, fput(ch2, stdout)에서 /n이 출력됨!
}

void Whyint(void){
    /*  위 FnBasic 함수에서 분명 1개의 '문자'가 저장된 ch1, ch2가 왜 int형 변수인지, 그리고 getchar, putchar, fgetc, fputc 함수의 반환형이 왜 int인지 EOF를 통해 알아보자. 
        참고로, putchar와 fputc의 ch1, ch2쪽 입력형도 int이다.  */
    //EOF : end of file의 약자로, C complier에서는 EOF가 -1의 상수값을 가지는 int형으로 정의되어있음. 따라서 위 네 함수의 입력/반환형이 int인 것임. 

    int ch;
    
    while(1){
        ch=getchar();
        if (ch==EOF) {break;}
        putchar(ch);
    }
}

void Fn2(void){
    char * str ="One String";   //str이라는 이름의 char형 array의 선언. (array와 pointer가 사실상 같은 것임을 상기)  
    
    puts(str);                  //puts 함수는 str이라는 문자'열'(char형 array)을 받아 표준 출력 스트림에 \n과 같이 출력하는 함수. str 출력 후 \n이 추가적으로 출력됨에 유의.   
    puts("one more String");    //"one more String"이라는 char형 array를 받아 표준 출력 스트림에 \n과 같이 출력.

    fputs(str, stdout);         //fputs 함수는 str이라는 문자열(char형 array)를 받아 stdout이라는 문자를 출력할 곳을 지정해 출력하는 함수. 여기서는 \n이 추가적으로 출력되지 않음에 유의. 
    fputs("one more String", stdout);
}

void Fn3(void){
    //gets라는 함수도 있으나, 안정성 문제로 인해 fgets를 추천. 
    char str[7];    int i;

    for (i=0; i<3; i++){
        fgets(str, sizeof(str), stdin);
        printf("Read %d : %s \n", i+1, str);
    }
}
