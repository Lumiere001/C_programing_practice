/*
정수형 변수 num를 0으로 초기화하여 선언한 후, &연산자를 통해 포인터 변수 ptr에 주소를 입력하고 증가 연산자를 (*ptr)++와 *ptr++를 명령하여
결과 값을 비교하는 프로그램 작성
*/

//이 코드의 작동 원리를 잘 알고 있어야 함.

#include <stdio.h>
int main(void)
{
    int num = 0;
    int *ptr = &num;

    printf("초기값: num = %d, ptr = %p \n", num, ptr);

    (*ptr)++;       // *ptr, ptr이 가리키는 값 num의 값을 증가시킨다.
    printf("(*ptr)++ 적용 후: num = %d, ptr = %p \n", num, ptr);

    *ptr++;         // *(ptr++)로 해석해야 함. 포인터 값의 위치를 변경함.
    printf("*ptr++ 적용 후: num = %d, ptr = %p \n", num, ptr);

    return 0;
}