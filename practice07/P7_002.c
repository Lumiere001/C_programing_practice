// 문제 : 삼각형의 높이와 밑변의 길이를 사용자로부터 정수로 입력 받아 강제 형변환 활용하여 삼각형의 넓이를 실수로 출력

#include <stdio.h>
int main(void)
{
    int a, b;
    double area;
    
    printf("밑변의 길이와 높이를 입력하세요: ");
    scanf("%d %d", &a, &b);

    area = (double)a*b/2;       // area = (double)(a*b) / 2.0 이렇게 쓰면 완전히 강제 형 변환만 있음

    printf("삼각형의 넓이: %lf", area);

    return 0;
}