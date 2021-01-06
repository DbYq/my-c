#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void max(double x, double y)
//{
//	if (x >= y)
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
//	double x=1.5, y=9;
//	max(x, y);
//	return 0;
//}
//#include<stdio.h>
//void chline(int(*p)[5], int i, int j)
//{
//	printf("%d",p[j][i]);
//}
//int main()
//{
//	int ch[5][5] = { {1,2,3,4,5},{3,5,8,4,2},{9,0,5,3,8},{0,4,1,8,9},{9,4,2,3,1} };
//	int j = 3, i = 2;
//	chline(ch, i, j);
//	return 0;
//}
//#include<stdio.h>
//print(char arr, int a, int b)
//{
//	int i, j;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= b; j++)
//		{
//			printf("%c", arr);	
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	char arr = 'A';
//	int a = 2, b = 3;
//	print(arr, a, b);
//	return 0;
//}
#include<stdio.h>
double average(double a, double b);
double backword(double x);
//int main()
//{
//	double a, b;
//	a = 3.4; b = 5.6;
//	average(a, b);
//	printf("%lf", average(a, b));
//	return 0;
//}
//double average(double a, double b)
//{
//	double y = backword(a) + backword(b);
//	return (y / 2);
//}
//double backword(double x)
//{
//	double z = 1 / x;
//	return z;
//}
//#include<stdio.h>
//void change(double* x, double* y)
//{
//	if (*x >= *y)
//	{
//		*y = *x;
//	}
//	if (*x < *y)
//	{
//		*x = *y;
//	}
//}
//int main()
//{
//	double x, y;
//	x = 3.14;
//	y = 5.68;
//	change(&x, &y);
//	printf("%lf %lf", x, y);
//	return 0;
//}