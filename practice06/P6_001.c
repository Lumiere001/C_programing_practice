#include <stdio.h>

int main(void)
{
    int a, b;
    a=0;
    b=0;

    printf("두 정수 A, B를 입력하세요: ");
    scanf("%d %d", &a, &b);

    printf("A + B = %d \n", a+b);
    printf("A - B = %d \n", a-b);
    printf("A * B = %d \n", a*b);
    printf("A / B = %d \n", a/b);
    printf("A %% B = %d \n", a%b);

    return 0;
}