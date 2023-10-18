/*
사용자로부터 정수(n)을 입력 받아 피보나치 수열의 n번째 수를 출력하는 프로그램 작성
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    a=1;
    b=1;

    int sum, num;

    printf("수를 입력하세요: ");
    scanf("%d", &num);

    if (num==1 || num==2)
    {
        printf("1 \n");
        return 0;
    }

    else
    {
        num = num-2;

        while (num>0)
        {
            sum = a+b;
        
            a=b;
            b=sum;
            num--;
        }
    }
    
    printf("%d \n", sum);

    return 0;

}