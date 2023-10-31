/*
사용자로부터 가로 세로 길이를 입력 받아 *로 사각형을 그리는 프로그램 작성
*/
#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("가로 세로 길이를 입력하세요: ");
    scanf("%d %d", &a, &b);

    for(b;b>0;b--) // 세로
    {
        c=a;
        for(c;c>0;c--) // 가로
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}