/*
사용자로부터 10개의 정수를 입력 받아 짝수 별로 합하고, 홀수 별로 합하여 출력하는 프로그램 작성
*/

#include <stdio.h>
#define SIZE 10

int main(void)
{
    int i, even=0, odd=0;
    int num[SIZE];
    printf("정수 10개를 입력하세요: ");

    for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0;i<10;i++)
    {
        if (num[i] % 2 == 0)
        {
            even += num[i];
        }
        else
        {
            odd += num[i];
        }
    }

    printf("짝수의 합 : %d, 홀수의 합 : %d \n", even, odd);

    return 0;

}