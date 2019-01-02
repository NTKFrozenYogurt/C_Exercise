#include <stdio.h>

void PtrExer1(void);
void Swapptr(int** dp1, int** dp2);
void PtrArrAsDptr(void);
void MaxAndMin(int* Arr[5], int** maxdptr, int** mindptr);

int main(void){
    /*  double pointer는 pointer를 가리키는 pointer로, int** dptr;식으로 (*를 두개 붙임으로서) 선언한다.
        double pointer는 dptr=&ptr 식으로 pointer를 가리킨다. 
        *dptr로 pointer변수 ptr에 접근하며, **dptr로 pointer변수가 가리키는 변수 num에 접근한다. ( *(*ptr)로 표기하기도 한다.)

        pointer를 사용함으로서 변수값을 다른 함수에서 변경할 수 있었음. 
        마찬가지로 double pointer를 사용함으로서 pointer가 가리키는 대상을 다른 함수에서 변경할 수 있음. 예제 Swap_with_ptr을 참조.   */
    
    int num1=10, num2=20;   
    int* ptr1=&num1; int* ptr2=&num2;
    int* maxPtr=0; int* minPtr=0; 
    int array[5]={143, -9991, 8343, 2626, 31};

    PtrExer1();
    printf("*ptr1 : %d , *ptr2 : %d\n", *ptr1, *ptr2);

    Swapptr(&ptr1, &ptr2);
    printf("*ptr1 : %d , *ptr2 : %d (After swap)\n", *ptr1, *ptr2);

    PtrArrAsDptr();
    
    /*  int*** triptr등, *를 더 붙임으로서 삼중, 사중 pointer 등을 만들 수 있다. 
        n중 pointer는 n-1중 pointer를 가리키기 위해 사용된다. 
        3중 포인터 그 이상은 잘 사용되지 않는게 일반적이다. 
        포인터는 자료구조(데이터의 효율적인 표현밎 저장 방법에 대한 학문)에 대해 공부할 때 그 유용함을 깨달을 수 있다. 
        현재로서는 함수 내에서 함수 외부에 선언된 변수에 접근하는 방법을 제시해준다고 생각하자. */
    MaxAndMin(array, &maxPtr, &minPtr);
    printf("%p %p\n", maxPtr, minPtr);

    return 0;
}

void PtrExer1(void){
    double num=3.14;
    double* ptr=&num;
    double** dptr=&ptr;
    double* ptr2=0;

    printf("%9p %9p \n", ptr, *dptr);   //ptr이 가리키는 주소와 dptr이 가리키는 곳의 가리키는 주소
    //서식문자 중간에 붙은 9는 오른쪽 정렬을 의미
    printf("%9g %9g \n", num, **dptr);  //num이 나타내는 값과 dptr이 가리키는 곳이 가리키는 곳에 할당된 값을 출력. 

    ptr2=*dptr; //ptr2가 dptr이 가리키는 곳이 가리키는 num을 가리키게됨. 
    *ptr2=10.99;    //ptr2가 가리키는 곳의 값인 num의 값을 10.99로 수정
    printf("%9g %9g \n", num, **dptr);  //num은 이제 10.99값을 가짐. 
}

void Swapptr(int** dp1, int** dp2){
    // int** dp1은 int pointer의 주소가 input되어야 함을 의미함. 예시에서는 double pointer dp1에 ptr1의 주소가 저장됨. 
    int *temp=*dp1; //temp라는 pointer에 dp1이 가리키는 주소(ptr1의 주소)가 대입됨.  
    *dp1=*dp2;      //dp1이 가리키는 ptr1에 dp2가 가리키는 ptr2의 주소가 저장됨. 이로서 ptr1에는 기존 ptr2의 주소가 저장됨. 
    *dp2=temp;      //dp2이 가리키는 ptr1에 temp가 가리키는 기존 ptr1의 주소가 저장됨. 이로서 ptr2에는 기존 ptr1의 주소가 저장됨.

    //따라서 이 프로그램은 두 pointer ptr1, ptr2의 주소를 입력받아, ptr1은 ptr2가 가리키던 주소를, ptr2는 ptr1이 가리키던 주소를 가리키게 한다.  
}

void PtrArrAsDptr(void){
    int num1=12, num2=24, num3=35;
    int* ptr1=&num1; int* ptr2=&num2; int* ptr3=&num3;

    int* ptrarr[]={ptr1, ptr2, ptr3};   //int* ptrarr[]={&num1, &num2, &num3}; 과 동일
    int** dptr=ptrarr;  //pointerArray ptrarr는 pointer를 포함하는 array이면서, 동시에 pointer를 가리키는 pointer를 의미하기도 함. 
    // dptr은 ptrarr의 첫번째 원소를 가리키는 double pointer가 된다. 

    printf("%d %d %d \n", *(ptrarr[0]), *(ptrarr[1]), *(ptrarr[2]));    //ptrarr[i] (i=0,1,2)들이 가리키는 주소에 저장된 값이 출력됨. 
    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));  //dptr[i] (i=0,1,2)들이 가리키는 주소에 저장된 값이 출력됨. 
}

void MaxAndMin(int* Arr[5], int** maxdptr, int** mindptr){
    //이 프로그램은 길이 5인 array와 두개의 double pointer를 받아, 함수 외부에서 정의된 두 pointer에 각각 array의 max값이 저장된 주소, array의 min값이 저장된 주소를 저장하는 것이 목적이다.
    int* temp=&Arr[0];      //pointer temp에 array의 0번 주소를 저장.   
    for(int i=0;i<4;i++){
        if (*temp<Arr[i]) {temp=&Arr[i];}   //temp가 가리키는 값이 array의 i번째 값보다 크면, temp는 array의 i번째 주소를 저장. 
    }
    *maxdptr=temp;  //double pointer maxdptr이 가리키는 pointer에 temp에 저장된 주소를 저장. 

    temp=&Arr[0];           //pointer temp에 array의 0번 주소를 저장.
    for(int i=0;i<4;i++){
        if (*temp>Arr[i]) {temp=&Arr[i];}   //temp가 가리키는 값이 array의 i번째 값보다 작으면, temp는 array의 i번째 주소를 저장.
    }
    *mindptr=temp;  //double pointer maxdptr이 가리키는 pointer에 temp에 저장된 주소를 저장. 
}