//가장 큰 원소를 구해라!

#include <stdio.h>

int main()
{
    int scores[] = { 3452, 4338382, 0, 384473, 38727, 3455555, 29827, 534, 3322, 2451, 3488938, 20, 24559,24334,999929, 2228387 }; 
    int i, size, max=0, min=0;;

    size = sizeof(scores) / sizeof(scores[0]);

    for(i = 0; i < size ; i++) {
        if(max<=scores[i]) max=scores[i];
        printf("%d \n", scores[i]);

    }
    printf("가장 큰 원소는 %d입니다.",max);

}

/*
출력될 수를 고르시오.

1. 0
2. 1
3. 4338382
4. Error
*/
