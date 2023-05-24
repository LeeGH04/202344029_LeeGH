//대괄호 중괄호 조심하기!

#include <stdio.h> 
#define SIZE 5


int main(void) 
{
    int i;
    int num[SIZE] = [ 31, 63, 62, 87, 14 ];

    for(i = 0; i < SIZE; i++)
        printf("num[%d] = %d\n", i, num[i]);


    return 0; 
}

/*
출력될 값을 고르시오.

1. 
scores[0] = 31
scores[1] = 63 
scores[2] = 62 
scores[3] = 87 
scores[4] = 14

2.
scores[1] = 31
scores[2] = 63 
scores[3] = 62 
scores[4] = 87 
scores[5] = 14

3.
scores[0] = 31scores[1] = 63 scores[2] = 62scores[3] = 87scores[4] = 14

4. Error
*/