#include <stdio.h>

int main()
{
    double x, y, result;

    printf("두개의실수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%.6f + %.6f = %.6f\n", x, y, result);

    result = x - y;
    printf("%.6f - %.6f = %.6f\n", x, y, result);

    result = x * y;
    printf("%.6f * %.6f = %.6f\n", x, y, result);

    result = x / y;
    printf("%.6f / %.6f = %.6f\n", x, y, result);

    return 0;
}