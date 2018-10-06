#include <stdio.h>

int PointerOperation(void);
int ArrayAccessAsPointer(void);

int main(void){
    PointerOperation();
    ArrayAccessAsPointer();

    return 0;
}

int PointerOperation(void){
    int* ptr1=0x0010;   double* ptr2=0x0010; //사실 이러한 초기화는 적절하지 않음.

    printf("%p %p \n", ptr1+1, ptr1+2); //(ptr1의 주소+1)에 해당되는 주소를 반환 , (ptr1의 주소+2)에 해당되는 주소를 반환
    printf("%p %p \n", ptr2+1, ptr2+2); 
    printf("%p %p \n", ptr1, ptr2);     //현재 ptr1의 주소를 반환 , 현재 ptr2의 주소를 반환

    ptr1++; ptr2++;
    printf("%p %p \n", ptr1, ptr2);

    /* result : 
    0x14 0x18 : int형 pointer의 다음 주소는 4칸 뒤
    0x18 0x20 : double형 pointer의 다음 주소는 8칸 뒤
    0x10 0x10 : 이것들의 주소는 여전히 0x10
    0x14 0x18 : ++ 연산을 통해 pointer의 주소를 한칸씩 이동. 그 결과는 int형 pointer는 10+4, double형 pointersms 10+8에 위치. 
    각 pointer의 다음 주소는 sizeof(pointer의 type)만큼 떨어져있음. 
    */

    return 0;
}

int ArrayAccessAsPointer(void){
    int Arr[]={11, 12, 23}; int* ptr=Arr;
    // ptr+i와 Arr[i]가 같음을 보일 것 이다. 
    printf("*ptr : %d , *(ptr+1) : %d, *(ptr+2) : %d \n", *ptr, *(ptr+1), *(ptr+2));
    ptr++;  printf("after ptr++, *ptr : %d \n", *ptr);
    ptr++;  printf("one more ptr++, *ptr : %d \n", *ptr);
    ptr--;  printf("now ptr--, *ptr : %d \n", *ptr);
    ptr--;  printf("one more ptr--, *ptr : %d \n", *ptr);

}