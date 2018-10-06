#include <stdio.h>

int main(void){
    int int01, int02; double res01, res02;
    int01=3; int02=5;
    res01= int02/int01;
    printf("result : %f\n", res01); //결과가 1.666...이 아닌 1이 나옴을 볼 수 있다. 
    res02= (double)int02/int01;
    printf("result : %f\n", res02); //결과가 1.666667이 나옴을 볼 수 있다. 
    return 0;
}