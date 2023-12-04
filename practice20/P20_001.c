/*
사용자로부터 알파벳 문자를 하나 입력 받아 소문자면 대문자로, 대문자면 소문자로 변환해서 출력해주는 프로그램 작성
*/

#include <stdio.h>

int main(void)
{
    char i;
    printf("문자 입력 : ");

    scanf("%c", &i);

    if (i >= 'A' && i <='Z')
    {
        printf("%c \n", i+32);
    }
    else if (i >='a' && i <='z')
    {
        printf("%c \n", i-32);
    }

    return 0;
}