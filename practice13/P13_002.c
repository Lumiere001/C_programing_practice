/*
2*2 크기의 두 행렬 a={{1,0}, {0,1}}와 b={{1,1}, {2,2}}를 더하여 출력하는 프로그램 작성
*/

#include <stdio.h>

int main(void)
{
    int a[2][2] = {
        {1,0},
        {0,1}
    };

    int b[2][2] = {
        {1,1},
        {2,2}
    };

    int sum[2][2] = {
        {0,0},
        {0,0}
    };

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
                sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("%d ", sum[0][0]);
    printf("%d \n", sum[0][1]);
    printf("%d ", sum[1][0]);
    printf("%d \n", sum[1][1]);

    return 0;
}