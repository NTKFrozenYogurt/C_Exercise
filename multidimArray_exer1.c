#include <stdio.h>

void MultidimArrMemory(void);
void MultidimArrInitial(void);
void NineNine(void);
//void TwoDimArrPrintf(int* Arr, int ilen, int jlen);

int main(void){
    /*multidimmensional Array는 int MultidimArray[i][j][k][l]; 식으로 선언함
      대괄호의 개수가 차원에 대응. 실질적으로 위와 같은 4차원 배열 이상은 쓸 일이 거의 없음. 
      예를 들어 2차원 배열 int Arr[2][3]의 경우, 다음 순서로 메모리에 저장된다. 
      Arr[0][0] Arr[0][1] Arr[0][2] Arr[1][0] Arr[1][1] Arr[1][2] 
    */
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
}

void MultidimArrInitial(void){
    int i, j;
    int Arr1[3][3]={
        {1,2,7},
        {3,5,8},
        {9,3,5}
    };
    int Arr2[3][3]={
        {1}, 
        {2,3,4}, 
        {5,6}
    };
    int Arr3[3][3]={1,3,2,4,6,5,7};
    int Arr4[][3]={8,4,2,6,7,4,3,2,1};
    int Arr5[3][3]={{1,3,4}, {6,2,854}, {9,3,2}};
    
    printf("Arr1 :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr1[i][j]);}
        printf("\n");
    }
    printf("\n\nArr2 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr2[i][j]);}
        printf("\n");
    }
    printf("\n\nArr3 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr3[i][j]);}
        printf("\n");
    }
    printf("\n\nArr4 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) {printf("%d\t", Arr4[i][j]);}
        printf("\n");
    }
    printf("\n\nArr5 : \n");
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