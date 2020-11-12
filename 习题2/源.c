#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	int i = 0;
	int k = 1;
	scanf("%d %d", &x, &n);
	for (i = 1; i <= n; i++)
	{

		k = k * x;
	}
	printf("%d ", k);
	return 0;
}