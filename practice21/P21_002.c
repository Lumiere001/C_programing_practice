/*
두 문자열 'apple'과 'grape'를 배열 str1과 str2에 각각 저장하고 교환하여 출력하는 프로그램 작성
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "apple";
    char str2[] = "grape";

    printf("교환 전 : str1 = %s, str2 = %s \n", str1, str2);

    char tmp[10];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);

    printf("교환 후 : str1 = %s, str2 = %s \n", str1, str2);

    return 0;
}