/*
2차원 배열 int arr[2][4] = {1,2,3,4,5,6,7,8}을 함수로 건네주어 모든 요소의 합을 출력하는 프로그램 작성
*/

#include <stdio.h>

void Addarr(int(*arr)[4])
{
    int sum = 0;
    for (int i=0; i<2; i++)
    {
        for(int j = 0; j<4 ; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("결과 : %d \n", sum);
}

int main(void)
{
    int arr[2][4]={1,2,3,4,5,6,7,8};
    Addarr(arr);
    return 0;
}