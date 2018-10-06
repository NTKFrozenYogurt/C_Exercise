#include <stdio.h>

int main(void){
    //do~while은 loop문을 최소 1회 실행되어야 할 때 사용함. 
    int count=0, sum=0; 
    do {
        sum=count+sum;
        count=count+2;
    } while(count<=100);
    printf("sum is %d\n", sum);
    return 0;
}
