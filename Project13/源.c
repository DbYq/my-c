#define _CRT_SECURE_NO_WARNINGS
//����������ת����������ֵ
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d", a ,b);
	return 0;
}