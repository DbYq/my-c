#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n,i,j,sum1=0,sum2=0,num1=0,num2=0;
//	int arr[10][10];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	while (i = n - 1)
//	{
//		for (j = 1; j < n; j++)
//		{
//			num1 = num1 + arr[i][j];
//		}
//		break;
//	}
//	while (j = n - 1)
//	{
//		for (i = 1; i < n; i++)
//		{
//			num2 = num2 + arr[i][j];
//		}
//		break;
//	}
//	int num3 = num1 + num2 - arr[n - 1][n - 1];
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			sum1 = sum1 + arr[i][j];
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = n - 1; j >= n-i; j--)
//		{
//			sum2 = sum2 + arr[i][j];
//		}
//	}
//	int sum = sum1 + sum2 - num3;
//	printf("%d ",sum);
//	return 0;
//}
////#include<stdio.h>
////int main()
////{
////	char arr[80];
////	gets(arr);
////	char arr2[80];
////	int i,num,k=0;
////	for (i = 0; i < 80; i++)
////	{
////		if (arr[i] == '\0')
////		{
////			break;
////		}
////		if (arr[i] >= '0' && arr[i] <= '9')
////		{
////			arr2[k] = arr[i];
////			k++;
////		}
////	}
////	for (i = 0; i < k; i++)
////	{
////		printf("%c", arr2[i]);
////	}
////	return 0;
////}
#include<stdio.h>
int main()
{
	char arr[80];
	int i,count=0;
	gets(arr);
	for (i = 0; i < 80; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		if (((arr[i] >= 'A' && arr[i] <= 'Z')) && (arr[i] != 'A'&&arr[i] != 'E'
			&& arr[i] != 'I' && arr[i] != 'O' && arr[i] != 'U'))
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}