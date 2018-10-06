#include <stdio.h>

int threedot(void);
int successivesum(void);
int twotonine(void);

int main(void){
    //기본적인 while의 사용법 
    int loopcounter=0;
    while(loopcounter<=5){
        printf("looping...%d\n", loopcounter);
        loopcounter++;
    }
    //while(1) : 무한 루프. break로 빠져나옴. 
    //threedot();
    //successivesum();
    twotonine();
    return 0;
}

int threedot(void){
    int input, counter=1;
    printf("input interger : "); scanf("%d", &input);
    while (counter<=input){
        printf("%d\t", 3*counter);
        counter++;
    }
    printf("\n");
    return 0;
}

int successivesum(void){
    int input, sum=0;
    printf("this program will sum your input. input 0 to stop/n");
    while(input!=0){
        scanf("%d", &input);
        sum=sum+input;
    }
    printf("sum is %d\n", sum);
    return 0;
}

int twotonine(void){
    printf("this program will show 9*9 table\n");
    int counter01=1, counter02=1;
    while(counter01<=9){
        while(counter02<=9){
            printf("%d*%d=%d\t", counter01, counter02, counter01*counter02);
            counter02++;
        }
        printf("\n");
        counter01++; counter02=1;
    }
    return 0;
}