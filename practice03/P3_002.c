#include <stdio.h>

int main(void)
{
    char a, b;
    printf("두 문자를 입력하세요: ");
    scanf("%c %c", &a, &b);

    printf("결과: %c %c \n", b, a);
}