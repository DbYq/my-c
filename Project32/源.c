#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, n, i, j,z,h=0,q=0;int c=-1;
	int arr1[100];
	int arr2[100];
	int arr3[200];
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &n);
	for (j = 0; j < n; j++)
	{
		scanf("%d", &arr2[j]);
	}
	for (i = 0; i < m; i++)
	{
		int k = 0;
		for (j = 0; j < n; j++)
		{

			if (arr1[i] != arr2[j])
			{
				k = 1;
				z = arr1[i];
			}
			if (arr1[i] == arr2[j])
			{
				k = 0;
				break;
			}
		}
		if (k != 0)
		{
			arr3[h] = z;//��arr1����arr2��ͬ�����洢��arr3��
			h++;//arr3�±��һ
		}
	}
	for (j = 0; j < n; j++)
	{
		int k = 0;
		for (i = 0; i < m; i++)
		{

			if (arr2[j] != arr1[i])
			{
				k = 1;
				z = arr2[j];
			}
			if (arr2[j] == arr1[i])
			{
				k = 0;
				break;
			}
		}
		if (k != 0)
		{
			arr3[h] = z;//��arr2����arr1��ͬ�����洢��arr3��
			h++;
		}
	}
	for (i = 0; i < h; i++)
	{
		if (i == c)//���i��c��ô�����ǵڶ���ͬ�±꣬��ʱ���Բ���
		{
			continue;
		}
		for (j = i+1; j < h; j++)
		{
			
			if (arr3[i] == arr3[j])
			{
				q = 1;//��arr3�е��׸���ͬ�����
				c = j;//��arr3�еĵڶ���ͬ���±긳��c
				break;
			}
			if (arr3[i] != arr3[j])
			{
				q = 1;
			}
		}
		if (q == 1)
			printf("%d ", arr3[i]);
	}
	
	return 0;
}