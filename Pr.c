#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
int id, pass;

printf("id:");
scanf("%d", &id);

printf("pass:");
scanf("%d", &pass);

printf("\a 입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.", id, pass);

}