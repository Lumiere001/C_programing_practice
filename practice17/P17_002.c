/*
실수 3.14를 보내면 정수부 3과 소수부 0.14를 나누어서 보내주는 함수 void get(double value, int *i_part, double *f_part)를 구현
hint) 실수로부터 정수를 얻으려면 i = (int)f;와 같이 형변환을 이용
*/

#include <stdio.h>

void get(double value, int *i_part, double *f_part)
{
    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main(void)
{
    double num = 3.14;
    int i_part;
    double f_part;
    get(num, &i_part, &f_part);
    printf("i_part: %d, f_part: %lf \n", i_part, f_part);

    return 0;
}