#include <stdio.h>

int Hexout(int num1);
int MultiplificationTable(int num1, int num2);
int GCM(int num1, int num2);
int PrimeNum(int num);

int main(void){
    int opt, num1, num2;
    printf("1.DectoHex \n2.Multiplication Table \n3.GCM \n4.PrimeNumber \ninsert a number : ");
    scanf("%d", &opt);

    switch(opt){
        case 1 : 
            printf("input a number : ");
            scanf("%d", &num1);
            Hexout(num1);
            break;
        case 2 : 
            printf("enter 2 numbers : ");
            scanf("%d %d", &num1, &num2);
            MultiplificationTable(num1, num2);
            break;
        case 3 : 
            printf("enter 2 numbers : ");
            scanf("%d %d", &num1, &num2);
            printf("GCM is %d\n", GCM(num1, num2));
            break ;
        case 4 : 
            printf("input a number : ");
            scanf("%d", &num1); 
            PrimeNum(num1);
            break ; 
        default : ;
    }
    return 0;
}

int Hexout(int num1){
    printf("%X", num1);
    return 0;
}

int MultiplificationTable(int inp1, int inp2){
    int num1, num2; int start= (inp1<=inp2)? inp1 : inp2;   int limit= (inp1>=inp2)? inp1 : inp2;
    for (num1=start;num1<=limit;num1++){
        for (num2=start;num2<=limit;num2++) {printf("%d*%d=%d\t", num1, num2, num1*num2);}
        printf("\n");
    }
    return 0;
}

int GCM(int inp1, int inp2){
    //최대공약수 구하는 프로그램
    int divnum;
    divnum = (inp1<=inp2)? inp1 : inp2 ; 
    while(1){
        if (inp1%divnum==0 && inp2%divnum==0) {return divnum;}
        divnum--;
    }
}

int PrimeNum(int inp){
    int num, divnum, divnumLimit;
        //num : divnum으로 나눌 수. 나눠서 나머지가 0이 되는 수가 1과 num밖에 없다면 그러한 num은 prime number이다. 
        //divnum : num을 나눌 수, 1부터 divnumlimit까지 1씩 증가시키면서 num을 나눌 것 이다. 
        //divnumLimit : 1부터 inp사이의 prime number를 구하기 위해 나눌 숫자의 최대 크기. divnum의 제곱근과 같거나 큰 자연수. 이 수는 num이 바뀔때마다 새로 구할 것 이다. 
    
    printf("2 "); //예외처리 
    for(num=2;num<=inp;num++){
        divnum=1; divnumLimit=1;
        while(divnumLimit*divnumLimit<num) {divnumLimit++;} //num에 따른 divnum계산.
        while(divnum<=divnumLimit){
            if (divnum==divnumLimit){printf("%d ", num); break;} //divnum이 divnumLimit에 도달함은 그 num이 prime number임을 의미
            else if (num%(divnum+1)==0){break;} //num을 divnum+1로 나눠 나머지가 0이 아니면 divnum++해 다시 나눔. 이를 divnumlimit까지 반복. divnum+1인 이유는 1로 나누면 이야기가 안되기 때문. 
            else divnum++;
        }
    }
    printf("\n");
    return 0;
}
