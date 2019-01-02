#include <stdio.h>

void MultidimArrMemory(void);
void MultidimArrInitial(void);
void NineNine(void);
//void TwoDimArrPrintf(int* Arr, int ilen, int jlen);

int main(void){
    /*multidimmensional Array는 int MultidimArray[i][j][k][l]; 식으로 선언함
      대괄호의 개수가 차원에 대응. 실질적으로 위와 같은 4차원 배열 이상은 쓸 일이 거의 없음. 
      예를 들어 2차원 배열 int Arr[2][3]의 경우, 다음 순서로 메모리에 저장된다. 
      Arr[0][0] Arr[0][1] Arr[0][2] Arr[1][0] Arr[1][1] Arr[1][2]   */
    MultidimArrMemory();
    MultidimArrInitial();
    NineNine();
    return 0;
}

void MultidimArrMemory(void){
    int MultiArr[3][4];
    int i, j;
    for (i=0;i<3;i++){
        for (j=0;j<4;j++) {printf("%p\t", &MultiArr[i][j]);}
        printf("\n");
    }
    /*  다음은 결과 예시 
    0x7ffee2db8a90  0x7ffee2db8a94  0x7ffee2db8a98  0x7ffee2db8a9c
    0x7ffee2db8aa0  0x7ffee2db8aa4  0x7ffee2db8aa8  0x7ffee2db8aac
    0x7ffee2db8ab0  0x7ffee2db8ab4  0x7ffee2db8ab8  0x7ffee2db8abc
    메모리 주소의 순서에 주목.*/
}

void MultidimArrInitial(void){
    int i, j;
    int Arr1[3][3]={
        {1,2,7},
        {3,5,8},
        {9,3,5} //몰론 int Arr1[3][3]={{1,2,7}, {3,5,8}, {9,3,5}}로 적어도 되나, 가독성을 위해 저렇게 적음. 
    };
    int Arr2[3][3]={
        {1}, 
        {2,3,4}, 
        {5,6}   //이는 int Arr1[3][3]={{1,0,0}, {2,3,4}, {5,6,0}}과 동등. 
    };
    int Arr3[3][3]={1,3,2,4,6,5,7}; //이는 int Arr1[3][3]={{1,3,2}, {4,6,5}, {7,0,0}}과 동등.
    int Arr4[][3]={8,4,2,6,7,4,3,2,1};  //이는 int Arr1[3][3]={{8,4,2}, {6,7,4}, {3,2,1}}과 동등. 행렬의 성분 9개 + 열성분 3개 -> 빈칸에는 3개
    int Arr5[3][3]={{1,3,4}, {6,2,854}, {9,3,2}};
    
    printf("Arr1 :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr1[i][j]);}
        printf("\n");
    }
    printf("\nArr2 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr2[i][j]);}
        printf("\n");
    }
    printf("\nArr3 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr3[i][j]);}
        printf("\n");
    }
    printf("\nArr4 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr4[i][j]);}
        printf("\n");
    }
    printf("\nArr5 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr5[i][j]);}
        printf("\n");
    }

}

/* void TwoDimArrPrintf(int* Arr, int ilen, int jlen){
    int i, j;
    for(i=0;i<ilen;i++){
        for(j=0;j<jlen;j++) {printf("%d\t", Arr[i*ilen+j]);}
        printf("\n");
    }
} */

void NineNine(void){
    int Array[9][9]; int i, j;
    for (i=0;i<9;i++){
        for(j=0;j<9;j++) {Array[i][j]=(i+1)*(j+1);}
    }

    for (i=0;i<9;i++){
        for(j=0;j<9;j++) {printf("%d\t", Array[i][j]);}
        printf("\n");
    }  
}