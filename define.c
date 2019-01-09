#include <stdio.h>
#define PHI 3.14159 // #define A B에 대해, 이후 A라 입력된것이 죄다 B로 치환됨. 매크로 이용시 유용. 
#define Sq(x) x*x //()안은 parameter
#define Sum(a, b) for(i=a;i<=b ;i++){output=output+i;}

int main(void){
    int output=0; int a, b, i; 
    Sum(1, 100);
    printf("%d\n", output);

    return 0;
}