/*
사용자로부터 정수(n)를 입력 받아 1부터 n까지의 합을 출력하는 프로그램 작성
*/

#include <stdio.h>

int main(void)
{
    int n, sum;
    sum = 0;
    printf("수를 입력하세요 : ");

    scanf("%d", &n);

    while (n>0)
    {
        sum += n;
        n--;
    }
    
    printf("%d \n", sum);

    return 0;
}