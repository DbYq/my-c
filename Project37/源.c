#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i;
//	char arr[80];
//	gets(arr);
//	for (i = 0; i < 80; i++)
//	{
//		if (arr[i] == '\0')
//			break;
//		if (arr[i] == 'A')
//		{
//			arr[i] = 'Z';
//		}
//		if (arr[i] == 'B')
//		{
//			arr[i] = 'Y';
//		}
//		if (arr[i] == 'C')
//		{
//			arr[i] = 'X';
//		}
//		if (arr[i] == 'D')
//		{
//			arr[i] = 'W';
//		}
//		if (arr[i] == 'E')
//		{
//			arr[i] = 'V';
//		}
//		if (arr[i] == 'F')
//		{
//			arr[i] = 'U';
//		}
//		if (arr[i] == 'G')
//		{
//			arr[i] = 'T';
//		}
//		if (arr[i] == 'H')
//		{
//			arr[i] = 'S';
//		}
//		if (arr[i] == 'I')
//		{
//			arr[i] = 'R';
//		}
//		if (arr[i] == 'J')
//		{
//			arr[i] = 'Q';
//		}
//		if (arr[i] == 'K')
//		{
//			arr[i] = 'P';
//		}
//		if (arr[i] == 'L')
//		{
//			arr[i] = '0';
//		}
//		if (arr[i] == 'M')
//		{
//			arr[i] = 'N';
//		}
//		if (arr[i] == 'Z')
//		{
//			arr[i] = 'A';
//		}
//		if (arr[i] == 'Y')
//		{
//			arr[i] = 'B';
//		}
//		if (arr[i] == 'X')
//		{
//			arr[i] = 'C';
//		}
//		if (arr[i] == 'W')
//		{
//			arr[i] = 'D';
//		}
//		if (arr[i] == 'V')
//		{
//			arr[i] = 'E';
//		}
//		if (arr[i] == 'U')
//		{
//			arr[i] = 'F';
//		}
//		if (arr[i] == 'T')
//		{
//			arr[i] = 'G';
//		}
//		if (arr[i] == 'S')
//		{
//			arr[i] = 'H';
//		}
//		if (arr[i] == 'R')
//		{
//			arr[i] = 'I';
//		}
//		if (arr[i] == 'Q')
//		{
//			arr[i] = 'J';
//		}
//		if (arr[i] == 'P')
//		{
//			arr[i] = 'K';
//		}
//		if (arr[i] == 'O')
//		{
//			arr[i] = 'L';
//		}
//		if (arr[i] == 'N')
//		{
//			arr[i] = 'M';
//		}
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m, n,i,j,max,count=0;
//	int arr[20][20];
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i < m - 1; i++)
//	{
//		for (j = 1; j < n - 1; j++)
//		{
//			if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j])
//			{
//				printf("%d %d %d\n", arr[i][j], i+1, j+1);
//				count++;
//			}
//			
//		}
//	}
//	if (count == 0)
//	{
//		printf("None %d %d\n", m, n);
//	}
//	return 0;
//}