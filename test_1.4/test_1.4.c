#define _CRT_SECURE_NO_WARNINGS
//选择法排序
//#include<stdio.h>
//int main()
//{
//	int arr[11] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10-1; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			int temp;
//			if (arr[j] < arr[i])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//冒泡排序
//#include<stdio.h>
//int main()
//{
//	int arr[11] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10 - 1; i++)
//	{
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[4][4];
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		sum = sum + arr[i][i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//二分法
//#include<stdio.h>
//int main()
//{
//	int arr[15] = { 0 };
//	int i, k = 0;
//	for (i = 14; i >= 0; i--)
//	{
//		arr[k] = i;
//		k++;
//	}
//	int n;
//	scanf("%d", &n);
//	int left = 0, right = 14;
//	int p = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (n > arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n < arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d", mid + 1);
//			p = 1;
//			break;
//		}
//	}
//	if (p == 0)
//	{
//		printf("找不到！");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n - 1; i >= 1; i--)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
void min(int a, int b);
void max(int a, int b);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	min(a, b);
	max(a, b);
	return 0;
}
void max(int a, int b)
{
	int c;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("最大公约数：%d\n", b);
}