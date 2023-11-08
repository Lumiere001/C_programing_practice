/*
사용자로부터 정수 하나를 입력 받아, 해당 정수의 구구단을 출력하는 프로그램 작성
*/

#include <stdio.h>

// 함수 원형
int multiply(int n, int i);

int main(void)
{
    int n;
    printf("정수 한 개를 입력하세요: ");
    scanf("%d", &n);

    for(int i=1;i<10;i++)
    {
        int result = multiply(n, i);
        printf("%d X %d = %d \n", n, i, result);
    }

    return 0;
}

int multiply(int n, int i)
{
    return n*i;
}