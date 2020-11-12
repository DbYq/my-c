#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sign(int* i)
{
	if (*i > 0)
	{
		*i = 1;
//		return i;
	}
	else if (*i == 0)
	{
		*i = 0;
//		return i;
	}
	else
	{
		*i = -1;
//		return i;
	}
	return i;
}
int main()
{
	int x = 0;
	printf("请输入整形参数：\n");
	scanf("%d", &x);
	sign(&x);
	printf("sign(x)=%d ", x);
	return 0;
}