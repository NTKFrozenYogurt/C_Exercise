#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);  //입력된 값을 메모리 어딘가에 저장한 후, 큰따옴표 연산자를 통해 그 값의 주소를 받아온 다음, 이를 %d (int형 정수)로 받아들여 &num(변수 num의 주소)에 저장한다. 
    printf("num : %d\n", num);

    char str[100];
    scanf("%s", str);   //str은 배열인 동시에, 그 자체가 주소이니 &를 붙이지 않는다. 
    printf("string : %s\n", str);

    return 0;
}