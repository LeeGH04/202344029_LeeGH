#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("정수를 입력하시오.");
    scanf("%d", &x);

    y= x%2;

    if (y==0)
        printf("입력된 정수는 짝수 입니다.");
    else 
        printf("입력된 정수는 홀수 입니다.");
}