#include <stdio.h>

//사실은 이 위치에서 int num1=0이 선언되는 꼴이다. 

void Func01(void){
    static int num1=0; //static을 썼기 때문에, num1이라는 변수는 이 함수 내에서만 접근 가능하다. 
    int num2=0;
    num1++, num2++;
    printf("static : %d, local : %d", num1, num2);
}

int main(void){
    //static : local variable(지역변수)를 global variable(전역변수)로 만들 때 쓰이는 명령어
    int i; 
    for (i=0;i<3;i++)
        Func01();
    return 0;
}