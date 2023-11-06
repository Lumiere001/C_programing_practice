/*
사용자로부터 5개의 수를 입력 받아 중앙값을 출력하기
*/

#include <stdio.h>

int main(void)
{
    int i, k;
    int num[5];

    printf("5개의 정수를 입력하세요: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
    }

    for(k=0; k<5 ; k++)
    {
        for(i=0; i<4-k; i++)
        {
            if (num[i] > num[i+1])
            {
                int tmp;
                tmp = num[i];
                num[i] = num[i+1];
                num[i+1] = tmp;
            }
        }
    }
    printf("중앙값 : %d \n", num[2]);

    return 0;
}