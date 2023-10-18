// 문제 : 정수 세 개를 사용자로부터 입력 받아 자동 형변환 활용하여 합과 평균을 출력하라.

#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum;
    double mean;

    printf("세 정수 A, B, C를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    sum=a+b+c;
    mean=(a+b+c)/3.0;       // mean=(double)(a+b+c)/3.0; 이렇게 작성하면 안 됨.

    printf("합: %d, 평균: %lf", sum, mean);

    return 0;
}