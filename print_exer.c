#include <stdio.h>

int main(void){
    /*  printf 함수의 작동 과정은 다음과 같다. 
        - 문자열(예시로 String)을 RAM 어딘가에 저장한다. 이때 NULL(\0)이 문자열 맨 끝에 저장된다. 
        - 큰따옴표로 묶인 문자열 "String"에 대해서, 큰따옴표는 일종의 함수이다. 이는 String의 맨 첫 글자 S의 메모리 주소를 반환하는 함수로 작용한다.
        - printf 함수는 큰따옴표 함수로부터 메모리주소를 받아, 그 메모리주소부터 NULL까지의 문자를 출력한다. */
    printf("print함수에서 큰 따옴표 \"를 나타내려면 \\\"과 같이 표기한다.\n");
    printf("\\a : 경고음. \a\t"); //mac에서는 경고음이 안 나는 것 같다. 
    printf("\\t : tab\n");
    int num01;
    scanf("%d", &num01);
    printf("input num : %d(10), %X(16)\n", num01, num01); // /X는 16진법 숫자표기. 
    double dnum01=0.00178;  printf("f: %f, e: %e, g: %g\n", dnum01, dnum01, dnum01); // f: 0.001780, e: 1.780000e-03 g는 적당선에서 f표기와 e표기를 혼용
    printf("%s\n", "one of the string");
    //%(+-정수)f로 (+-정수)만큼 탭을 띄워서 print 가능.
    return 0;
}