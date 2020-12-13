#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int n, i, j, max = 0,count=1,num=0;
	scanf("%d", &n);
	int arr[1000];
	for (i = 0; i < n; i++)
	{
		scnaf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				num = arr[j];
				count++;
			}
		}
		if (count > max)
		{
			max = count;
			count = 1;
		}
	}
	printf("%d %d", num, max);
	return 0;
}