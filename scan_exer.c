#include <stdio.h>

int main(void){
    // scanf를 이용해 정수를 넣을 때, %d, %o, %x를 사용해 넣을 시 어떻게 들어가는지 알아보자. 
    int num01=0, num02=0, num03=0;
    printf("input 3 num, (10), (8), (16)");
    scanf("%d %o %x", &num01, &num02, &num03); //scanf에 여러개의 변수 투입시 ',' 입력하지 말 것!
    printf("d: %d, o: %d, x: %d\n", num01, num02, num03);
    double dnum01, res01; float fnum01;
    printf("input two real num");
    scanf("%lf %f", &dnum01, &fnum01); //double scanf시 %lf를 사용함에 주의, float scanf시 %f를 사용함에 주의
    res01=dnum01+fnum01;
    printf("%lf + %f is %lf\n", dnum01, fnum01, res01);
    return 0;
}