// 아스키코드

#include <stdio.h> 
#define SIZE 5
int main(void) 
{
    int i;
    int a[SIZE] = { 'c', 'd', 'e', 'f', 'g' }; 
    int b[SIZE] = { 99, 100, 101, 102, 103 };

    for(i = 0; i < SIZE ; i++)
    {
        if ( a[i] != b[i] ) 
        {
            printf("a[]와 b[]는 같지 않습니다.\n");
            
            return 0; 
        }
    }

    printf("a[]와 b[]는 같습니다.\n");

    return 0; 
}

/*
출력될 값을 고르시오.

1. a[]와 b[]는 같지 않습니다.
2. a[]와 b[]는 같습니다.
3. 무한반복
4. Error
*/