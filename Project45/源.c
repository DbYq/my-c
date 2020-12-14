#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr[100];
//	char arr2[2];
//	gets(arr);
//	gets(arr2);
//	int i;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		if (arr[i] == arr2[0])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, i, min=100 ,j;
//	int sz=0;
//	char arr[100];
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		gets(arr);
//		for (j = 0; j < 100; j++)
//		{
//			if (arr[j] == '\0')
//			{
//				break;
//			}
//			sz++;
//		}
//		if (min > sz)
//			{
//				min = sz;
//			}
//	}
//	printf("Min is: %d", min);           
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int h, m, s, add_s;
//	int num_s, num_m, num_h;
//	scanf("%d:%d:%d", &h, &m, &s);
//	scanf("%d", &add_s);
//	num_s = add_s + s;
//	num_m = m;
//	num_h = h;
//	if (num_s >= 60)
//	{
//		num_s = num_s - 60;
//		num_m=m + 1;
//	}
//	if (num_m >= 60)
//	{
//		num_m = num_m - 60;
//		num_h = h + 1;
//	}
//	if (num_h >= 24)
//	{
//		num_h = num_h - 24;
//	}
//	printf("%02d:%02d:%02d", num_h, num_m, num_s);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a1, a2, b1, b2;
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
	int num1 = a1 * b2;
	int num2 = a2 * b1;
	if (num1 > num2)
	{
		printf("%d/%d > %d/%d", a1, b1, a2, b2);
	}
	if (num1 < num2)
	{
		printf("%d/%d < %d/%d", a1, b1, a2, b2);
	}
	if (num1 == num2)
	{
		printf("%d/%d = %d/%d", a1, b1, a2, b2);
	}
	return 0;
}