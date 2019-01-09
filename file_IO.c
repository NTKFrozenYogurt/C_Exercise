#include <stdio.h>
#include <stdlib.h>
FILE *result;

void print(FILE *fp);

int main(void){
    result = fopen("uBoat.txt", "a");
    print(result);  //stdout은 terminal window에 적용되는 표준 출력
    fclose(result);

    return 0;
}

void print(FILE *fp)
{
    fprintf(fp, "gogimukgosipda!\n");
    return;
}