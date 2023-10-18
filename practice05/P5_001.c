#include <stdio.h>

int main(void)
{
    double r;
    double area, c;

    printf("반지름:");
    scanf("%lf", &r);

    area = r*r*3.14;
    c = r*2*3.14;

    printf("둘래=%lf 면적=%lf \n", c, area);

    return 0;
}