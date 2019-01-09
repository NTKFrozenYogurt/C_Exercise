#include <stdio.h>

int main(void){
    printf("size of char : %d\n", sizeof(char));
    printf("size of int : %d\n", sizeof(int));
    printf("size of long : %d\n", sizeof(long));
    printf("size of long long : %d\n", sizeof(long long));
    printf("size of long long int : %d\n", sizeof(long long int));
    printf("size of float : %d\n", sizeof(float));
    printf("size of double : %d\n", sizeof(double));
    return 0;
}
//sizeof의 결과물이 long이 8이 나와버림을 참조= clang에서 long long, long long int 쓸 이유 없음. 
//sizeof을 통해 나오는 함수값이 unsigned long이라 함.