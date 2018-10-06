#include <stdio.h>

int Fn_HowToGiveArg(int inp);
void ArrayFn(int* Arr, int len);
//  매개변수(argument, int function(int xx);에서 xx에 해당)로 Array를 선언할 수 없다. 
//  따라서 Array를 활용하는 함수를 사용하기 위해서는 Array의 메모리 주소값(=Array의 이름)을 사용해야 한다.
//  다만, 매개변수로 배열의 주소값을 선언시에 한정해, int* Arr와 int Arr[]는 서로 '같은' 선언이다. 
void ArrayFn2(int* Arr, int len);
//  매개변수로 Array의 주소를 받아도, 이는 Array 자체를 받아들인 것이 아니기에 Array의 길이는 따로 전달해주어야 한다. 

int main(void){
    int input=10, output;
    output=Fn_HowToGiveArg(input); //이 과정에서 inp라는 변수가 생겨, input의 값이 inp로 복사된다. 따라서 함수 내에서 inp의 값을 변화시켜도 input의 값은 그대로 남는다. 
    printf("input : %d , inp : %d\n", input , output);

    int Arr01[]={1, 2, 4};
    ArrayFn(Arr01, sizeof(Arr01)/sizeof(int));
    ArrayFn2(Arr01, sizeof(Arr01)/sizeof(int)); //함수가 Array를 받아들일 때는 변수를 받아들일 때와는 달리 Array가 복사되지 않고, Array 그 자체에 접근한다.
    ArrayFn(Arr01, sizeof(Arr01)/sizeof(int));  //따라서 받아들인 Array의 내부의 값을 변화시키는 ArrayFn2를 실행 후 Array의 내용물을 출력하면 ArrayFn2에 의해 변화된 값이 출력된다.  

    return 0;
}

int Fn_HowToGiveArg(int inp){
    inp++;
    return inp;
}

void ArrayFn(int *Arr, int len){
    for(int i=0; i<len; i++) {printf("Arr[%d] : %d\t", i, Arr[i]);} printf("\n");
}

void ArrayFn2(int* Arr, int len){
    for(int i=0; i<len; i++) {Arr[i]=Arr[i]+i;}
}