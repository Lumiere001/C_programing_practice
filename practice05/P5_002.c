#include <stdio.h>

int main(void)
{
    char letter;

    printf("대문자: ");
    scanf("%c", &letter);

    printf("소문자: %c", letter+32);

    return 0;
}