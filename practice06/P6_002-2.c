#include <stdio.h>

int main(void){
    int a, b, c;

    printf("두 정수 A, B, C를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = !((a+b)%c - (a%c)+(b%c));

    printf("(A+B)%%C와 (A%%C) + (B%%C)는 %d 이다. \n", result);

    return 0;
}