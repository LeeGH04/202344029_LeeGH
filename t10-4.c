#include <stdio.h>

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int n;

    printf("팩토리얼:");
    scanf("%d", &n);

    printf("결과값 %d\n", factorial(n));

    return 0;
}