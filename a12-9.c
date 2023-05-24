//최빈값 구하기

#include <stdio.h>
#define NUMBER 10


int main(void)
{

    int a[NUMBER];
    int sum=0;

    int n=sizeof(a)/sizeof(int);
    int i, j, num, freq, count=1;

       for(i=0;i<NUMBER;i++)
    {
        printf("숫자를 입력하시오:");
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {
        freq=1;

        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                freq+=1;

        if(freq>=count)
        {
            num=a[i];
            count=freq;
        }
    }

    printf("숫자 = %d , 빈도수 = %d \n", num, count);


    return 0;
}


/*
입력: 3 3 3 1 25 5 5 10 2 1 

출력될 값을 고르시오.


1. 3
2. 5
3. 0
4. Error
*/