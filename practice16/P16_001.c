/*
정수형 변수 num을 10으로 초기화하여 선언한 후, 주소 연산자(&)를 통해 포인터 변수 ptr에 주소를 입력하고 간접 참조 연산(*)을 활용하여 num에 증가 연산을 적용하여
11을 출력하는 프로그램 작성
*/

#include <stdio.h>

int main (void)
{
    int num = 10;
    int *ptr = &num;

    (*ptr)++;                           // 이 부분이 실습의 핵심
    printf("num 값 : %d \n", num);

    return 0;
}