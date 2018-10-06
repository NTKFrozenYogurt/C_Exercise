#include <stdio.h>

void fn1(void);
void fn2(void);

int main(void){
    fn1();
    fn2();
    
    return 0;
}

void fn1(void){
    int Arr2D[3][3];
    printf("Arr2D : %d \t", Arr2D); printf("Arr2D[0] : %d \t", Arr2D[0]);   printf("Arr2D[0][0] : %d \n", &Arr2D[0][0]);
    //Arr2D, Arr2D[0], &Arr2D[0][0]는 전부 Arr2D[0][0]의 주소를 반환
    printf("Arr2D[1] : %d \t", Arr2D[1]);   printf("Arr2D[1][0] : %d \n", &Arr2D[1][0]);
    printf("Arr2D[2] : %d \t", Arr2D[2]);   printf("Arr2D[2][0] : %d \n", &Arr2D[2][0]);

    printf("sizeof(Arr2D) : %lu \n", sizeof(Arr2D));         //result : sizeof(Arr2D) : 36      3*3*4로, 전체 Array의 크기
    printf("sizeof(Arr2D[0]) : %lu \n", sizeof(Arr2D[0]));   //result : sizeof(Arr2D[0]) : 12   3*4로, Array중 0번째 행의 크기
    printf("sizeof(Arr2D[1]) : %lu \n", sizeof(Arr2D[1]));   //result : sizeof(Arr2D[1]) : 12   3*4로, Array중 1번째 행의 크기
    printf("sizeof(Arr2D[2]) : %lu \n", sizeof(Arr2D[2]));   //result : sizeof(Arr2D[2]) : 12   3*4로, Array중 2번째 행의 크기
}

void fn2(void){
    int iarr[3][4];
    double darr[3][3];

    printf("iarr1 : %p\n", iarr);       //result : iarr1 : 0x7ffee0c95a90   이는 iarr[0][0]의 위치에 해당될 것
    printf("iarr1+1 : %p\n", iarr+1);   //result : iarr1+1 : 0x7ffee0c95aa0 이는 iarr[1][0]의 위치에 해당 (위와 (arr의 두번째 차원길이)4*(sizeof int)4 바이트 차이)
    printf("iarr1+2 : %p\n", iarr+2);   //result : iarr1+2 : 0x7ffee0c95ab0 이는 iarr[2][0]의 위치에 해당 (위와 (arr의 두번째 차원길이)4*(sizeof int)4 바이트 차이)

    printf("darr : %p\n", darr);        //result : darr : 0x7ffee0c95a40    이는 darr[0][0]의 위치에 해당할 것
    printf("darr+1 : %p\n", darr+1);    //result : darr+1 : 0x7ffee0c95a58  이는 darr[1][0]의 위치에 해당 (위와 (arr의 두번째 차원길이)3*(sizeof double)8 바이트 차이)
    printf("darr+2 : %p\n", darr+2);    //result : darr+2 : 0x7ffee0c95a70  이는 darr[2][0]의 위치에 해당 (위와 (arr의 두번째 차원길이)3*(sizeof double)8 바이트 차이)
    /*  따라서 2차원 배열을 포인터로서 활용할 경우, 주소를 한칸 옯길 때 마다 (배열 자료형의 size)*(배열의 두번째 차원 길이)만큼 길이를 옮긴다. 
        이러한 2차원 Array pointer는 (예시로) int *(ptr) [4]; 와 같이 선언할 수 있다. */
}