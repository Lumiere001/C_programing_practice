/*
사용자로부터 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산하여 출력하는 프로그램 작성
*/

# include<stdio.h>

int main(void)
{
    char arr[50];
    static int diff = 1 - '1';
    int len=0, i;
    int sum =0;
    printf("문자열 입력 : ");
    scanf("%s", arr);

    while (arr[len] != '\0') len++;
    for(i=0;i<len;i++)
    {
        if('1'<= arr[i] && arr[i] <= '9')
        sum += arr[i] + diff;
    }
    printf("숫자의 총 합: %d \n", sum);

    return 0;
}