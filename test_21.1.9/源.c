#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int* p, int num);
int main()
{
	int arr[4][6];
	int i, j, num;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("请输入您要查找的学生成绩：\n");
	scanf("%d", &num);
	printf("该学生成绩如下：\n");
	print(arr, num);
	return 0;
}
void print(int(*p)[5], int num)
{
	int j;
	for (j = 1; j < 6; j++)
	{
		printf("%d ", *(*(p + num - 1) + j));
	}
}