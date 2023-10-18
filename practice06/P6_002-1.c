#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("세 정수 A, B, C를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b)%c == (a%c) + (b%c)){
        printf("(A+B)%%C와 (A%%C) + (B%%C)는 1이다. \n");
    }
    else if((a+b)%c != (a%c) + (b%c)){
        printf("(A+B)%%C와 (A%%C) + (B%%C)는 0다. \n");
    }

    return 0;
}