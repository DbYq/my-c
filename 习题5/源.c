#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int SUM(int* k)
{
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	if ((0 == i % 2) || (0 == j % 2))
	{
		printf("输入错误，请重新输入");
	}
	else if ((0 != i % 2) && (0 != j % 2))
	{
		*k = i + j;
	}
	return k;
}
int main()
{
	/*int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	int sum = 0;
	if ((0 == i % 2) || (0 == j % 2))
	{
		printf("输入错误，请重新输入");
	}
	else if ((0 != i % 2) && (0 != j % 2))
	{
		sum = i + j;
	}*/
	int sum = 0;
	SUM(&sum);
	printf("结果为%d", sum);
	return 0;
}