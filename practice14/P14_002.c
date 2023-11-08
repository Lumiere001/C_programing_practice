/*
사용자로부터 화씨 온도를 실수(double)로 입력 받아 섭씨 온도로 바꾸어 출력하는 프로그램 작성
*/

#include <stdio.h>

double change_temp(double fahr);

int main(void)
{
    double fahr;
    double cel;

    printf("현재 화씨 온도를 입력하세요 :");
    scanf("%lf", &fahr);

    cel = change_temp(fahr);

    printf("화씨 온도 %f은 섭씨온도 %f에 해당한다 \n", fahr, cel);

    return 0;
}

double change_temp(double fahr)
{
    return (fahr - 32)*5/9;
}