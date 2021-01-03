#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int max;
//	scanf("%d%d%d", &a, &b, &c);
//	max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("%d", max);
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int temp ;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d>%d>%d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int num;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == (i / 2) + 1)
//		{
//			num = i;
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//Õ·×ªÏà³ý·¨
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 4;
	int c = 5;
	int x, y;
	printf("%d\n", (a + b > c && b == c));
	printf("%d\n", (a || b + c && b - c));
	printf("%d\n", (!(a > b) && !c || 1));
	printf("%d\n", (!(x = a) && (y = b) && 0));
	printf("%d\n", (!(a + b) + c - 1 && b + c / 2));
	return 0;
}