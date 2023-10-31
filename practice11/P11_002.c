/*
사용자로부터 두 수를 입력 받아 최소공배수를 구하는 프로그램 작성
*/

#include <stdio.h>
int main(void)
{
    int a,b,i=1;
    printf("정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    while(1)
    {
        if(i%a==0 && i%b==0) break;
        else i++;
    }
    printf("%d \n", i);
    return 0;
}