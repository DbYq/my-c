#define _CRT_SECURE_NO_WARNINGS
//不创建变量转换两个数的值
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