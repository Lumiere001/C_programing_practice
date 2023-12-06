/*
문자열 포인터 buffer에 문자열 "apple"을 저장하고, 이를 역순으로 출력하는 프로그램 작성
*/

#include <stdio.h>

int main(void)
{
    char *buffer = "apple";

    for(int i = 4; i>=0; i--)
    {
        printf("%c", buffer[i]);
    }
    printf("\n");

    return 0;
}