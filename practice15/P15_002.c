/*
랜덤으로 1부터 45끼지의 당첨번호 6개와 보너스 번호 1개를 생성하는 로또 번호 생성 프로그램 작성
(숫자 중복 있으면 안 됨)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r;
    int arr[7];
    printf("랜덤 로또 번호: ");

    for(int i=0;i<=6;i++)
    {
        r = 1 + (rand() % 45);
        arr[i] = r;

        for(int j=0;j<i;j++) // 중복 제거
        {
            if (r==arr[j])
            {
                arr[i] = 1 + (rand() % 45);
            }
            else continue;
        }
    }

    for (int p=0;p<7;p++)
    {
        printf("%d ", arr[p]);
    }
    printf("\n");

    return 0;
}