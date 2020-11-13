//º¯Êý
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int max(int x,int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("max=%d", max(a, b));
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//#include<math.h>
//int is_prime(int n)
//{
//	int z = 0;
//	for (z = 2; z <=sqrt(n); z++)
//	{
//		if (0 == n % z)
//			return 0;
//	}
//	if (z == n)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return y;
	else 
		return 0;
}
int main()
{
	int year = 0;
	scanf("%d ", &year);
	printf("%d ", is_leap_year(year));
	return 0;
}