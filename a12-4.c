//대수의 법칙!

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 100000

int main(void) 
{
    int i;
    int scores[SIZE];
    int sum=0;
    int average;

    srand((unsigned)time(NULL)); 
    for(i = 0; i < SIZE; i++)
        scores[i] = rand() % 100;

    for(i = 0; i < SIZE; i++) 
        printf("scores[%d]=%d\n", i, scores[i]);

    for(i=0; i<SIZE;i++)
        sum += scores[i];

        average = sum / SIZE;
        printf("평균=%d\n",average);


    return 0; 
}
/*
가장 가능성이 높은 값을 구하시오.

1. 0
2. 49
3. 50
4. Error
*/