//<와<=를 잘 구별하자

#include <stdio.h> 
#define SIZE 5


int main(void) 
{
    int i;
    int scores[SIZE] = { 31, 63, 62, 87, 14};

    for(i = 0; i <= SIZE; i++)
    printf("scores[%d] = %d\n", i, scores[i]);


    return 0; 
}

/*
출력죌 값을 고르시오.

1.
scores[0] = 31
scores[1] = 63
scores[2] = 62
scores[3] = 87
scores[4] = 14

2.
scores[0] = 31
scores[1] = 63
scores[2] = 62
scores[3] = 87

3.
scores[0] = 31
scores[1] = 63
scores[2] = 62
scores[3] = 87
scores[4] = 14
scores[5] = 1

4.
Error(답지에 없음)
*/