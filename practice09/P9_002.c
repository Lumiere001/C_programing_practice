/*
사용자로부터 오늘 날씨를 숫자로 입력 받은 후 해당하는 메시지를 출력하는 프로그램 작성
스위치 문으로 작성할 것.
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("오늘 날씨는 어떤가요? 맑음(1), 흐림(2), 비(3), 눈(4), ... \n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("오늘 날씨는 맑음 입니다. \n");
        break;
    
    case 2:
        printf("오늘 날씨는 흐림 입니다. \n");
        break;
    
    case 3:
        printf("오늘 날씨는 비 입니다. \n");
        break;
    
    case 4:
        printf("오늘 날씨는 눈 입니다. \n");
        break;
    
    default:
        printf("오늘 날씨를 모르겠네요. \n");
        break;
    }

    return 0;
}