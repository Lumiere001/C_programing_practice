/*
정수형 포인터 변수 maxPtr, minPtr을 선언한 후, 정수형 배열 arr[5]과 함께 call-by-reference 방식으로
넘겨 주어 배열의 최솟값과 최댓값을 구하는 프로그램 작성
*/

#include <stdio.h>

void findMinMax();

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];

    for(int i=0; i<5; i++)
    {
        printf("정수 입력 %d :", i+1);
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
    printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);

    return 0;
}

void findMinMax(int *arr, int size, int **mxPtr, int **mnPtr)
{
    int *max, *min;
    int i;
    max = arr;
    min = arr;
    for(i = 0; i<size; i++)
    {
        if (*max < arr[i]) max = &arr[i];
        if (*min > arr[i]) min = &arr[i];
    }
    *mxPtr = max;
    *mnPtr = min;
}