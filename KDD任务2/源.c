#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5][6];
	int j, i, i_max, j_max, k;
	printf("������5*6�ľ���\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 5; i++)
	{
		i_max = arr[i][0]; k = 0;
		for (j = 0; j < 6; j++)
		{
			if (arr[i][j] > i_max)
			{
				i_max = arr[i][j];
				k = j;
			}
			j_max = arr[0][k];
			for (i = 0; i < 5; i++)
			{
				if (arr[i][k] > j_max)
				{
					j_max = arr[i][k];
				}
			}
			if (i_max == j_max)
				{
					printf("��������%d: ", i_max);
				}
			
		}
	}
	return 0;
}