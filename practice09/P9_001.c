/*
사용자로부터 문자 하나를 입력 받아, 대문자일 경우 "대문자"를, 소문자일 경우 "소문자"를, 숫자일 경우 "숫자"를, 그 밖의 경우 "기타"를 출력하는 프로그램 작성
*/

#include <stdio.h>

int main(void)
{
    char letter;

    printf("문자를 입력하세요: ");
    scanf("%c", &letter);

    if ((letter>='A') && (letter<='Z'))
    {
        printf("대문자 \n");
    }
    else if ((letter>='a' && letter<='z'))
    {
        printf("소문자 \n");
    }
    else if ((letter>='0' && letter<='9'))
    {
        printf("숫자 \n");
    }
    else printf("기타 \n");

    return 0;

}