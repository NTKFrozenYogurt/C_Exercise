#include <stdio.h>

void OddSeive(const int* Arrptr, int len);
void EvenSeive(const int* Arrptr, int len);
void DecimalToBinary(int num);
int i_sq_b(int i, int n);
void RelocationNumbers(int* Arrptr, int len);
void AscSort(int* Arrprt, int len);
void DesSort(int* Arrprt, int len);

int main(void){
    int opt, input, len;
    int Arr1[10]; len=sizeof(Arr1)/sizeof(int);
    printf("1.Even/Odd Seive \n2.decimal to binary \n3.Rearrange 10 numbers \n4.Ascend Sort \n5.Desend Sort \ninsert a number : ");    scanf("%d", &opt);
    switch(opt){
        case 1 :
            printf("insert ten numbers. this program classify Odd and Even numbers.\n");
            for(int i=0; i<len; i++) {scanf("%d", &Arr1[i]);}   //input numbers in array
            OddSeive(Arr1, len); EvenSeive(Arr1, len);
            break;
        case 2 : 
            printf("insert number. this program change decimal number to binary number : ");
            scanf("%d", &input);
            DecimalToBinary(input);
            break;
        case 3 :
            printf("insert ten numbers. this program arrange numbers by certain way\n");
            for(int i=0; i<len; i++) {scanf("%d", &Arr1[i]);}   //input numbers in array
            RelocationNumbers(Arr1, len);
            for (int i=0; i<len; i++){
                printf("%d ", Arr1[i]);}
            printf("\n");
            break;
        case 4 : 
            printf("insert ten numbers. this program arrange numbers by Ascending order");
            for(int i=0; i<len; i++) {scanf("%d", &Arr1[i]);}   //input numbers in array
            AscSort(Arr1, len);
            for (int i=0; i<len; i++){
                printf("%d ", Arr1[i]);}
            printf("\n");
            break;
        case 5 : 
            printf("insert ten numbers. this program arrange numbers by descending order");
            for(int i=0; i<len; i++) {scanf("%d", &Arr1[i]);}   //input numbers in array
            DesSort(Arr1, len);
            for (int i=0; i<len; i++){
                printf("%d ", Arr1[i]);}
            printf("\n");
            break;
        default : break;
    }
    return 0;
}

void OddSeive(const int* Arrptr, int len){
    //this program print odd numbers in input array
    int OddArr[len]; int counter=0;
    for (int i=0; i<len ; i++) {
        if (Arrptr[i]%2==1) {OddArr[counter]=Arrptr[i]; counter++;}
        }   //tell numbers odd or even and input odd numbers in array
    printf("Odd numbers : "); for(int j=0;j<counter;j++) {printf("%d ", OddArr[j]);} printf("\n");
}

void EvenSeive(const int* Arrptr, int len) {
    //this program print even numbers in input array
    int EvenArr[len]; int counter=0;
    for (int i=0; i<len ; i++){
        if (Arrptr[i]%2==0) {EvenArr[counter]=Arrptr[i]; counter++;}
        }   //tell numbers odd or even and input even numbers in array
    printf("Even numbers : "); for(int j=0;j<counter;j++) {printf("%d ", EvenArr[j]);} printf("\n");
}

void DecimalToBinary(int num){
    int minuscounter=0; if (num<0) {minuscounter=1; num=-num;} //if input number is below than 0, make input to absolute number and write minus by counter 
    int length=0, digit=1, startnum;    
    do {digit=digit*2; length++;} while(digit<=num); //this line generates sufficient array length  
    int OutArr[length]; 
    startnum=i_sq_b(2, length-1); //start number equal 2^(length-1)
    for (int j=0;j<length;j++){
        OutArr[j]= (startnum<=num) ? 1 : 0 ; // comparing 2^(length-j) and input-[Sum(i=0 to j-1)(2^i)]
        if (OutArr[j]==1) {num=num-startnum;}
        startnum=startnum/2;
    }
    if (minuscounter==1) {printf("-");}
    for (int i=0;i<length;i++) {printf("%d", OutArr[i]);}  printf("\n");
}

int i_sq_b(int i, int b){ //this program generates i^b
    int output=1;
    for (int count=0;count<b;count++) {output=output*i;}
    return output;
}

void RelocationNumbers(int* Arrptr, int len){
    int BecomeOutput[len]; int fromleft=0, fromright=9;
    for(int i=0; i<len; i++){
        if (Arrptr[i]%2==1){
            BecomeOutput[fromleft]=Arrptr[i];   fromleft++; }
        else {
            BecomeOutput[fromright]=Arrptr[i];  fromright--;}
    }
    for(int j=0;j<len; j++){
        Arrptr[j]=BecomeOutput[j];
    }
}

void AscSort(int* Arrptr, int len){
    int temp, endPt=len;
    for( ;endPt>1;endPt--){
        for(int i=0;i<endPt-1;i++){
            if (Arrptr[i]>Arrptr[i+1]){
            temp=Arrptr[i+1];   Arrptr[i+1]=Arrptr[i];  Arrptr[i]=temp;
            }
        }
    }
}


void DesSort(int* Arrptr, int len){
    int temp, templen=len;
    for(int templen=0;templen<len;templen++){
        for(int i=len-1;i>0;i--){
            if (Arrptr[i]>Arrptr[i-1]){
            temp=Arrptr[i-1];   Arrptr[i-1]=Arrptr[i];  Arrptr[i]=temp;
            }
        }
    }
}