/*
함수에 포인터와 데이터행 크기를 넘겨주면 크기 만큼 포인터의 주소에 메모리를 할당하는 함수 작성
long long 데이터 형의 포인터 변수에 long long 데이터 크기만큼 메모리를 할당한 후 10을 대입하여 출력

malloc기억, 함수를 통해 넘겨주는 방식 기억
*/

#include <stdio.h>
#include <stdlib.h>

void allocMemory(void** ptr, int size)
{
    *ptr = malloc(size);
}

int main(void)
{
    long long * numPtr;
    allocMemory(&numPtr, sizeof(long long));
    *numPtr = 10;
    printf("%lld \n", *numPtr);
    free(numPtr);
    return 0;
}

// 코딩 팁

/*
main 함수먼저 설계
이후 필요한 함수 생각
*/