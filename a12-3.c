//배열의 크기에 주의하자

#include <stdio.h>


int main(void) 
{
    float i;
    int scores[5];

    scores[0.1] = 10; 
    scores[0.2] = 20; 
    scores[0.3] = 30; 
    scores[0.4] = 40; 
    scores[0.5] = 50;

    for(i=0;i < 5; i++)
        
        printf("scores[%f]=%f\n",i, scores[i]);
 

    return 0; 
}
/*
출력될 값을 고르시오.

1.
scores[0.1] = 10; 
scores[0.2] = 20; 
scores[0.3] = 30; 
scores[0.4] = 40; 
scores[0.5] = 50;

2.
scores[1] = 10; 
scores[2] = 20; 
scores[3] = 30; 
scores[4] = 40; 
scores[5] = 50;

3. 
scores[0.1] = 5464; 
scores[0.2] = 0; 
scores[0.3] = 235498; 
scores[0.4] = 2333832; 
scores[0.5] = 99372;

4.Error
*/