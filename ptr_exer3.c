#include <stdio.h>

int PointerString(void);
int PointerArrayBasic(void);
int PtrArray_String(void);

int main(void){
    PointerString();
    PointerArrayBasic();
    PtrArray_String();

    return 0;
}

int PointerString(void){
    char str_1[]="the String";      //Array str_1은 문자열의 맨 첫 글자 t를 가리키는 pointer.
    char* pstr_2="String expressed by pointer";   //Pointer pstr_2는 문자열의 맨 첫 글자 S를 가리키는 pointer. 그러나 이 포인터는 이후에 다른 위치를 가리킬 수 있음.
    printf("str_1 : %s \t pstr_2 : %s \n", str_1, pstr_2);

    pstr_2="Another String";        //이제 pstr_2는 문자열의 맨 첫 글자 A를 가리키게 됨. 
    printf("pstr_2 After : %s \n", pstr_2);

    str_1[0]='T';
    //pstr_2[0]='X'; //실행시 Bus error: 10, pointer로 선언된 문자열은 상수와 같이 변경할 수 없음. (일부 compiler는 이를 혀용한다고 한다.)
    /*  pointer로 문자열을 선언하는 것은 다음과 같은 과정을 거친다. 
        - 일단 RAM 어딘가에 문자열을 저장한다. 
        - 문자열을 저장한 후, 문자열의 맨 첫 단어의 주소를 포인터에 저장한다. */
    printf("str_1 After : %s \n", str_1);

    return 0;
}

int PointerArrayBasic(void){
    // Pointer Array : 내용물이 메모리 주소인 Array. int* Arr[]; 식으로 선언함. 
    int num1=11, num2=23, num3=35;
    int* Arr_1[]={&num1, &num2, &num3};
    //이러한 pointer array는 일종의 double pointer라 할 수 있다. Arr_1은 (num1을 가리키는) pointer를 가리키기 때문. 자세한건 dbptr_exer1.c 참조

    printf("*Arr_1[0] : %d\t*Arr_1[1] : %d\t*Arr_1[2] : %d\n", *Arr_1[0], *Arr_1[1], *Arr_1[2]);
    return 0;
}

int PtrArray_String(void){
    // char* Array[]={...}; 로 Array의 요소에 문자열을 집어넣는듯이 활용할 수 있음. 
    char* StrArr_1[]={"Include", "Initiation", "Imac"}; //""가 문자열의 첫 글자의 주소를 반환하는 함수임을 기억할 것
    printf("StrArr[0] : %s\tStrArr[1] : %s\tStrArr[2] : %s\n", StrArr_1[0], StrArr_1[1], StrArr_1[2]);
    //서식문자 %s는 문자열(Array)의 주소를 받아, 그 문자열을 죄다 출력하니 *를 붙이지 않음. 
    return 0;
}