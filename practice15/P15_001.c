/*
사용자로부터 정수 한 개를 입력 받아 정수만큼의 피보나치 수열을 출력하는 프로그램 작성
*/

#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int num, i;
    printf("피보나치 수열의 개수를 입력하세요 :");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("%d번째 수:%d \n", i, fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{
    if (n<=0) return 0;
    else if (n ==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

/*
재귀 함수는 꼭 연습 할 것! 시험에 나옴.
*/