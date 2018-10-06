#include <stdio.h>\

int ArrayAsPointer(void);
int ptrex01(void);
int ptrex02(void);

int main(void){
    /* pointer에 대한 간략한 설명
     * pointer는 int* ptr ; 식으로 선언하며, ptr= &num; 등으로 (여기서는 변수 num이 할당되어있는)변수를 가리킨다. 
     * pointer는 변수가 할당된 메모리의 주소만을 가리키기 때문에, 그 메모리에 있는 정보의 해석을 위해 pointer의 자료형(int double 등)을 지정해줘야 한다. 
     * & operator는 변수의 주소를 반환한다. 
     * * operator를 pointer에 가함으로서 pointer가 가리키는 변수값을 조작한다.
     * pointer를 선언만 하고, pointer가 가리키는 주소(변수)를 나중에 지정할 생각이라면 ptr=0; 혹은 ptr=NULL; 식으로 아무데도 가리키지 않도록 초기화시켜야 한다. 
     * 단순히 int* ptr; 식으로 선언하면 pointer는 이상한 값을 가리키게 된다. 이는 int* ptr=127; 식으로 변수가 아닌 상수를 가리키게 해도 마찬가지. */

    ArrayAsPointer();
    ptrex01();
    ptrex02();

    return 0;
}

int ArrayAsPointer(void){
    printf("this program show Array 'NAME' is pointer\n");
    int Arr[3]={10, 20, 30};
    printf("Array name : %p \n", Arr);  printf("1st element : %p \n", &Arr[0]);  printf("2nd element : %p \n", &Arr[1]);  printf("3rd element : %p \n", &Arr[2]);

    // %p는 pointer의 주소를 나타낼 때 쓰는 서식문자

    /* result : 
    Array name : 0x7ffeec16978c
    1st element : 0x7ffeec16978c
    2nd element : 0x7ffeec169790
    3rd element : 0x7ffeec169794
    네 결과 모두 메모리 주소만을 반환한 모습을 볼 수 있다. macOS와 Linux의 경우 메모리 주소의 높은 자리수의 0은 생략된다. 
    또한, 배열은 메모리의 인접한 주소에 선언되며 (int 이기 때문에 주소가 4씩 차이남), array의 주소가 배열의 첫번째 요소의 주소와 같음 역시 확인할 수 있다. 
    다만, arr=&arr[2]; 같이 배열의 이름이 가리키는 주소를 변경할 순 없다. 
    당연히, Array pointer의 자료형은 Array 선언시의 자료형을 따라간다.
    */

    return 0;
}

int ptrex01(void){
    int Arr1[]={1, 2, 3};   double Arr2[]={1.1, 2.3, 3.5};
    printf("Pointer Arr1이 나타내는 변수의 값 : %d \nPointer Arr2가 나타내는 변수의 값 : %g \nArr[2] :  %f \n", *Arr1, *Arr2, Arr2[1]);
    *Arr1 += 100; *Arr2 += 120.5;
    printf("*Arr1 += 100 후 Pointer Arr1이 나타내는 변수의 값 : %d \n*Arr2 += 120.5 후 Pointer Arr2가 나타내는 변수의 값 : %g \nArr[2] :  %f \n", *Arr1, *Arr2, Arr2[1]); 
    return 0;

    /* result : 
    Pointer Arr1이 나타내는 변수의 값 : 1
    Pointer Arr2가 나타내는 변수의 값 : 1.1
    Arr[2] :  2.300000
    *Arr1 += 100후 Pointer Arr1이 나타내는 변수의 값 : 101
    *Arr2 += 120.5 후 Pointer Arr2가 나타내는 변수의 값 : 121.6
    Arr[2] :  2.300000
    이는 array pointer는 첫번째 element의 주소를 가리킴과 int array pointer는 메모리값을 int로 해석, double array pointer는 메모리값을 double로 해석함을 의미함. 
    */
}

int ptrex02(void){
    int Arr[]={10, 25, 45};
    int* ptr=&Arr[0]; //사실상 int* ptr=Arr; 과 동일

    printf("Arr[0] : %d , ptr[0] : %d\n", Arr[0], ptr[0]);
    printf("Arr[1] : %d , ptr[1] : %d\n", Arr[1], ptr[1]);
    printf("Arr[2] : %d , ptr[2] : %d\n", Arr[2], ptr[2]);
    printf("*Arr : %d , *ptr : %d\n", *Arr, *ptr);

    return 0;
}