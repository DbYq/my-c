#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int m, n,i,j,sum;
//	int arr[20][20];
//	scanf("%d%d" ,&m, &n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		sum = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum = sum + arr[i][j];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i, k = 0;
	char arr[81];
	gets(arr);
	for (i = 0; i <= 81; i++)
	{
		if (arr[i] == '\0')
			break;
		if (arr[i] == 'A')
		{
			arr[i] = 'Z';
			continue;
		}
		if (arr[i] == 'B')
		{
			arr[i] = 'Y';
			continue;
		}
		if (arr[i] == 'C')
		{
			arr[i] = 'X';
			continue;
		}
		if (arr[i] == 'D')
		{
			arr[i] = 'W';
			continue;
		}
		if (arr[i] == 'E')
		{
			arr[i] = 'V';
			continue;
		}
		if (arr[i] == 'F')
		{
			arr[i] = 'U';
			continue;
		}
		if (arr[i] == 'G')
		{
			arr[i] = 'T';
			continue;
		}
		if (arr[i] == 'H')
		{
			arr[i] = 'S';
			continue;
		}
		if (arr[i] == 'I')
		{
			arr[i] = 'R';
			continue;
		}
		if (arr[i] == 'J')
		{
			arr[i] = 'Q';
			continue;
		}
		if (arr[i] == 'K')
		{
			arr[i] = 'P';
			continue;
		}
		if (arr[i] == 'L')
		{
			arr[i] = 'O';
			continue;
		}
		if (arr[i] == 'M')
		{
			arr[i] = 'N';
			continue;
		}
		if (arr[i] == 'Z')
		{
			arr[i] = 'A';
			continue;
		}
		if (arr[i] == 'Y')
		{
			arr[i] = 'B';
			continue;
		}
		if (arr[i] == 'X')
		{
			arr[i] = 'C';
			continue;
		}
		if (arr[i] == 'W')
		{
			arr[i] = 'D';
			continue;
		}
		if (arr[i] == 'V')
		{
			arr[i] = 'E';
			continue;
		}
		if (arr[i] == 'U')
		{
			arr[i] = 'F';
			continue;
		}
		if (arr[i] == 'T')
		{
			arr[i] = 'G';
			continue;
		}
		if (arr[i] == 'S')
		{
			arr[i] = 'H';
			continue;
		}
		if (arr[i] == 'R')
		{
			arr[i] = 'I';
			continue;
		}
		if (arr[i] == 'Q')
		{
			arr[i] = 'J';
			continue;
		}
		if (arr[i] == 'P')
		{
			arr[i] = 'K';
			continue;
		}
		if (arr[i] == 'O')
		{
			arr[i] = 'L';
			continue;
		}
		if (arr[i] == 'N')
		{
			arr[i] = 'M';
			continue;
		}
	}
	printf("%s", arr);
	return 0;
}