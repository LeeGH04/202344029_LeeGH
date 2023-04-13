#include <stdio.h>

int main()
{
    int i=1, sum=0;

    while (i<=5)
    {
        int n;
        printf("값을 입력하시오:");
        scanf("%d", &n);

        sum += n;
        i++;
    }

    printf("합계는 %d입니다.\n", sum);

    return 0;
    

}