#include <stdio.h>

int main(void)
{
    int a, b, c;

    a=10;
    b=010;
    c=0x10;

    printf("%d \n%d \n%d \n", a, b, c); // 10진수
    printf("%#o \n%#o \n%#o \n", a, b, c); // 8진수
    printf("%#x \n%#x \n%#x \n", a, b, c); // 16진수

    return 0;
}