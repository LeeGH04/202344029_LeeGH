#include <stdio.h>


int get_integer()
{
    int value;

    printf("정수를 입력하시오:");
    scanf("%d", &value);

    return value;
}

int add(int x, int y)
{
    return x+y;
}

int add2(int x, int y)
{
    return x-y;
}

int add3(int x, int y)
{
    return x*y;
}

double add4(double x, double y)
{
    return x/y;
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    
    int sum = add(x,y);
    printf("두수의 합은 %d입니다.\n", sum);

    int sum2 = add2(x,y);
    printf("두수의 차는 %d입니다.\n", sum2);

    int sum3 = add3(x,y);
    printf("두수의 곱은 %d입니다.\n", sum3);

    double sum4 = add4(x,y);
    printf("두수의 나누기는 %.2f입니다.\n", sum4);

    return 0;
}
