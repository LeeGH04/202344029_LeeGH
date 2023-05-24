//중간값 구하기!

#include <stdio.h>
#include <math.h>

int main() {
        int num[] = {1,2,7,4,5,4,11,13,1234};


        int n = sizeof(num) / sizeof(int);
        int tmp;

        for(int i=0; i < n - 1; i++){
                for(int j=0; j < n - 1 - i; j++) {
                        if (num[j] > num[j + 1]) {
                                tmp = num[j];
                                num[j] = num[j + 1];
                                num[j + 1] = tmp;
                        }
                }
        }

        if(n % 2 == 1) {
                printf("중간값은 %d입니다.\n", num[(n / 2)]);
        } else {
                float median;
                median = (num[n / 2 - 1] + num[n / 2]) * 1.0 / 2.0;
                if(floor(median) == median) {
                        printf("중간값은 %d입니다~\n", (int)median);
                } 
                else {
                        printf("중간값은 %.1f입니다!\n", median);
                }
        }
}


/*
출력될 값을 고르시오.

1. 512
2. 5
3. 4
4. 1234
*/