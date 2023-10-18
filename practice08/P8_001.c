/*

Q. 문제
사용자로부터 두 정수 A와 B를 입력 받아,
A가 B보다 큰 경우에는  >를 작은 경우에는 <를 같은 경우에는 ==를 출력하는 프로그램 작성

*/ 

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    if (a>b){
        printf("> \n");
    }
    else if (a<b){
        printf("< \n");
    }
    else{
        printf("== \n");
    }

    return 0;
}