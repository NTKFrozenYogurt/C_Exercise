#include <stdio.h>

int main(void){
    double rad, vol;
    printf("enter radius of sphere : ");
    scanf("%lf", &rad); //scanf 사용시 & 붙이기!

    vol = rad*rad*rad*3.141593*4/3;
    printf("volume of sphere is %f\n", vol);
    return 0;
}