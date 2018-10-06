#include <stdio.h>

int main(void){
    int sum=0;
    int len=20;
    int arr01[len];
        // array의 선언 예 : int ArrayName[Arraylength]
        // array 안에 double형 자료를 보관하고자 한다면 int 대신 double 사용
        // 실제 Arraylength는 Arraylength
        // 컴파일러에 따라 다르나, Array의 길이를 선언할 때 [20]과 같이 숫자만 대입해야되는 컴파일러가 있다. 구 C 표준이 저랬기 때문. clang의 경우 변수도 OK
    arr01[0]=0, arr01[1]=5, arr01[2]=10, arr01[3]=20;
        // array의 n번째 index가 array[n-1]임에 주의.
    for (int i=0; i<4;i++) {sum=sum+arr01[i];}
    printf("sum of array01 : %d\n", sum);

    int arr02[8]={2, 3, 5, 7, 11, 13, 17};
        //array선언과 동시에 값을 저장하는 방법. 값을 지정하지 않은 8번째 값은 0으로 초기화됨. 
    int arr03[]={1, 3, 5, 7, 9};
        //이 경우 배열의 길이는 5로 초기화됨. 

    //sizeof() : 괄호 안의 byte수가 반환되는 함수
    printf("sizeof(int) : %d \nsizeof(array01) : %d \nlength of array02= sizeof(arr02)/sizeof(int) : %d \n", sizeof(int), sizeof(arr01), sizeof(arr02)/sizeof(int));
    return 0;
}
