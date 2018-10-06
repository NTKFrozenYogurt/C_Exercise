#include <stdio.h>

int Ex11_1(void);
int Ex11_2(void);

int main(void){
    int opt, num1, num2; 
    printf("1.Ex11-1 \n2.Ex11-2 \ninsert a number : ");
    scanf("%d", &opt);

    switch(opt){
        case 1 : Ex11_1(); break;
        case 2 : Ex11_2(); break;
        default : ;
    }
    return 0;
}

int Ex11_1(void){
    double arr01[5];
    printf("this program show max, min, and sum of five numbers that your input.\n enter 5 numbers : ");
    scanf("%lf %lf %lf %lf %lf", &arr01[0], &arr01[1], &arr01[2], &arr01[3], &arr01[4]);
        //여기까지 배열의 생성 밎 값 입력

    double max=arr01[0], min=arr01[0], sum=0;
    for (int i=1; i<5; i++) {max= (max>=arr01[i])? max : arr01[i] ;}
    for (int i=1; i<5; i++) {min= (min<=arr01[i])? min : arr01[i] ;}
    for (int i=0; i<5; i++) {sum=sum+arr01[i];}
        //각각 max, min, sum의 계산. max와 min은 arr[0]으로 초기화 후 arr[i]와 비교해, 더 큰 값을 max, 더 작은 값을 min으로 취하는 방식. 

    printf("max : %f , min : %f , sum : %f\n", max, min, sum);
    return 0;
}
    
int Ex11_2(void){
    char arr02[]={'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '\n'};
    for (int i=0; i<10; i++) {printf("%c", arr02[i]);}
    return 0;
}