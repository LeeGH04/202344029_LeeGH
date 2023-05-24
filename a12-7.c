//두 배열의 원소 갯수 구하기

#include <stdio.h>

int main()
{
    int a[] = { 3,54, 435, 2, 634, 34 };
    int b[] = { 5,6,3,2,5,7,3,2, }; 
    int i, j, size, sjze, sum=0;

    size = sizeof(a) / sizeof(a[0]);

    for(i = 0; i < size ; i++)
    {
        printf("%d \n", a[i]);
        sum += 1;
    }

    sjze = sizeof(b) / sizeof(b[0]);

    for(j = 0; j < size ; j++)
    {
        printf("%d \n", b[j]);
        sum += 1;
    }

    printf("%d", sum);
  
}

/*
출력될 값을 고르시오.

1. 10
2. 12
3. 1134
4. Error
*/