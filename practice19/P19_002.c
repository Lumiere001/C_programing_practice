/*
math.h 라이브러리에 있는 cos, sin함수를 함수의 매개변수로 넘겨주어 0 위치에서 두 함수의 함수값의 차이를 구하는 프로그램 작성
*/

#include <stdio.h>
#include <math.h>

double gap(double(*func1)(double), double(*func2)(double), double position)
{
    return fabs(func1(position)-func2(position));
}

int main(void)
{
    double value;
    value = gap(cos, sin, 0);
    printf("차이값: %f \n", value);
    return 0;
}