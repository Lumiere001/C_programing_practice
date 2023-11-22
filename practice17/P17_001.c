/*
1차원 배열을 받아서 배열 요소들의 평균을 계산하는 함수 double get_array_average(int *A, int size)를 구현하여 배열 {1,2,3,4,5}의 평균을
계산하는 프로그램 작성
*/

#include <stdio.h>

double get_array_average(int *A, int size)
{
    double sum=0;
    for (int i=0; i<size; i++)
    {
        sum = sum + A[i];
    }

    return sum/size;
}

int main(void)
{
    int numarr[5] = {1,2,3,4,5};

    printf("평균 : %lf \n", get_array_average(numarr, (sizeof(numarr)/sizeof(int))));
    
    return 0;
}