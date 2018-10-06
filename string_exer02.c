#include <stdio.h>

int WordLen(void);
int Inverse(void);
int MaxASCII(void);

int main(void){
    int opt=0;
    printf("1.length of word \n2.word inverse \n3.max ASCIInum \nenter a number : ");
    scanf("%d", &opt);
    switch(opt){
        case 1 : WordLen(); break;
        case 2 : Inverse(); break;
        case 3 : MaxASCII(); break;
        default : ;
    }
    return 0;
}

int WordLen(void){
    char Array[100]; int num=0;
    printf("Enter a Word : ");
    scanf("%s", Array);
    while (Array[num]!=0) {num++;}
    printf("input word length : %d\n", num);
    return 0;
}

int Inverse(void){
    char BeforeInv[100], AfterInv[100]; int i=0, len=0;
    printf("Input a Word : ");  scanf("%s", BeforeInv);
    while (BeforeInv[len]!=0) {len++;}
    printf("length : %d, BeforeInv : %s\n", len, BeforeInv);
    while (i<=len) {AfterInv[i]=BeforeInv[len-1-i]; i++;}
    AfterInv[len]=0;
    printf("AfterInv : %s\n", AfterInv);
    return 0;
}

int MaxASCII(void){
    char Array[100], output; int i=0;
    printf("enter a word : ");  scanf("%s", Array);
    output=Array[0];
    while (Array[i]!='\0') {output=(output>=Array[i]) ? output : Array[i] ;   i++;}
    printf("Max ASCII NUM character in your input : %c\n", output);
    return 0;
}