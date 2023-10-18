#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    z = x*y;

    printf("결과: %d \n", z);

    return 0;
}