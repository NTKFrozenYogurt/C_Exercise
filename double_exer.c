#include <stdio.h>

int main(void){
    int i; 
    float res = 0.0 ;

    for (i=0; i<100; i++) {res=res+0.1;}
    printf("%f\n", res);
    return 0;
}

//부동소숫점 에러 관련