#include <stdio.h>

int main(void)
{
    int month, days;

    printf("달을 입력하시오:");
    scanf("%d",&month);

    if (month > 12)
    {
        printf("정상적인 값이 아닙니다./n");
        goto stop;
    }
    
    
    
    switch (month)
    {
    case 2:
        days=28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);

    stop: 
    
    
    return 0;
    
}