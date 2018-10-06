#include <stdio.h>

void Swap(int* i, int* j);
void Swap3(int* i, int* j, int* k);
int Square_byValue(int i);
void Square_byRef(int *i);

int main(void){
    int opt;    int i, j, k;
    printf("1.swap 2 numbers\n2.swap 3 numbers\n3.square number by value\n4.square number by reference\ninsert a number : ");
    scanf("%d", &opt);
    switch(opt){
        case 1 :
            printf("insert two numbers\n");     scanf("%d %d", &i, &j);
            Swap(&i, &j);   //값이 아닌 주소가 들어가야 함에 주의.
            printf("input1 : %d , input2 : %d\n", i , j);
            break;
        case 2 : 
            printf("insert three numbers\n");   scanf("%d %d %d", &i, &j, &k);
            Swap3(&i, &j, &k);
            printf("input1 : %d , input2 : %d , input3 : %d\n", i , j, k);
            break;
        case 3 : 
            printf("insert a number\n");    scanf("%d", &i);
            j=Square_byValue(i);
            printf("square of %d : %d\n", i , j);
            break;
        case 4 :
            printf("insert a number : ");    scanf("%d", &i);
            Square_byRef(&i);
            printf("output : %d\n", i);
            break;
        default : break;
    }
    return 0;
}

void Swap(int* i, int* j){
    int temp=*i;    //temp라는 임시 변수는 함수가 받아들인 주소에 있는 변수 i의 값을 받아들임.
    *i=*j;          //변수 i가 저장된 주소에 저장된 값을 변수 j가 저장된 주소의 값으로 바꿈. 
    *j=temp;        //변수 j가 저장된 주소에 저장된 값을 temp로 변환시킴.
}

void Swap3(int* i , int* j, int* k){
    int temp=*i;
    *i=*j;  *j=*k;  *k=temp;
}

int Square_byValue(int i) {return i*i;}

void Square_byRef(int* i) {*i=(*i)*(*i);}
