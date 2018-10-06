#include <stdio.h>

int ReadString(void);
int AboutNull(void);

int main(void){
    char string01[]="Hello, World!";
    //char array를 통해 ASCII CODE에 할당된 문자로 이루어진 문자열을 저장할 수 있다. 
    //위 array는 'H' 'e' 'l' 'l' 'o' ',' ' ' 'W' 'o' 'r' 'l' 'd' '\0' 14개의 index로 이루어진다. \0는 escape seq(null 문자)이다. 
    printf("size of string01 : %lu\n", sizeof(string01));
    printf("null char : %c\n", string01[13]);
    printf("null int : %d\n", string01[13]);

    char Question='0';
    ReadString();
    AboutNull();
    return 0;
}

int ReadString(void){
    char string02[100]; int i=0;

    printf("enter a string : ");    scanf("%s", string02);
    printf("input : %s \n", string02);

    printf("print as unit character : ");
    while (string02[i]!='\0') {printf("%c", string02[i]); i++;}
    printf("\n");
    
    //scanf를 통해 읽어들인 문자열의 맨 끝에는 \0가 붙는다. C에서는 끝에 \0가 있는 것만을 문자열로 맏아들이고, \0가 없으면 문자가 저장된 배열이라 받아들인다. 
    //문자열의 서식문자는 %s이고, 단순 데이터형 char로 이루어진 배열의 서식문자는 %c이다.
    //scanf를 통해 읽어들인 문자열은 space를 기준으로 1번째 문자열, 2번째 문자열... 이렇게 나뉘므로, space를 포함하는 문자열을 입력하면 space이전까지만 들어간다. 
    return 0;
}

int AboutNull(void){
    printf("let's learn about null\n");
    //null 문자는 문장의 끝을 가리킨다. Array[0]이 문자열의 시작이라면, \0이 들어간 위치는 문자열의 끝을 의미한다. 
    //null 문자 \0의 ASCII코드는 0으로, 따라서 char i-'\0'와 char i=0은 같은 의미를 갖는다. 
    char string03[50]="Null, Null, Null";
    printf("initial : %s\n", string03);
    string03[6]=0; printf("After string03[6]=0 : %s\n", string03);
    return 0;
}