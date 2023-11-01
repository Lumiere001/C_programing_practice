/*
사용자로부터 정수 10개와 개수를 세고 싶은 정수 n을 입력 받아, 입력된 수 중에서 n의 개수를 출력하는 프로그램 작성
*/

#include <stdio.h>
#define SIZE 10

int main(void)
{
    int i, n, count=0;
    int num[SIZE];
    printf("정수 10개를 입력하세요: ");

    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &num[i]);
    }

    printf("개수를 세고 싶은 정수를 입력하세요: ");
    scanf("%d", &n);

    for(i=0;i<SIZE;i++)
    {
        if (num[i]==n)
        {
            count += 1;
        }
    }

    printf("%d의 개수=%d \n", n, count);

    return 0;
}