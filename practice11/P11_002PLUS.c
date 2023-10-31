#include <stdio.h>

int main()
{
    int a, b, c; // c는 최소 공배수
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        c = a;
    else
        c = b;

    while (1) {
        if (c % a == 0 && c % b == 0)
        // 두 정수의 최소 공배수를 구하기 위해, 먼저 두 수의 곱을 구하고, 그 다음에 두 수의 최대 공약수로 나누면 됨.
        {
            printf("%d \n", c);
            break;
        }
        c++;
    }

    return 0;
}