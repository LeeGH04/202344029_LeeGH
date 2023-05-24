//학생들의 키의 최대, 최소를 구하는 함수

#include <stdio.h>
#define STUDENTS 5

int main()
{
    
    int sum=0;
    int i;
    int num[STUDENTS], max=0, min=0;

    for(i=0;i<STUDENTS;i++)
    {
        printf("학생들의 키를 입력하시오:");
        scanf("%d",&num[i]);
    }

    max=num[0];
	min=num[0];

    for(i=0;i<5;i++){
		if(max<=num[i]) max=num[i];
		if(min>=num[i]) min=num[i];
	}

        printf("가장 큰 키:%d, 가장 작은 키:%d\n", max, min);

        return 0;
}
/*
입력:130 150 180 175 155

1. 가장 큰 키:180, 가장 작은 키:130
2. 가장 큰 키:130, 가장 작은 키:180
3. 가장 큰 키:180.0, 가장 작은 키:130.0
4. Error

*/