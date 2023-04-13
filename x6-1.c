#include <stdio.h>

int main()
{
    int x=0, n=0, i=0, sum=0;

    printf("얼마나 실행할까요?");
    scanf("%d", &i);

    while (i>=1)
    {
        printf("두수를 적어주세요.");
        scanf("%d %d", &n, &x);

        sum=n+x;

        printf("%d+%d=%d\n",n,x, sum);

        i--;
    }
    return 0;
}