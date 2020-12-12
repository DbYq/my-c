#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, i, n, j, k, sum = 0, z=1;
	int arr[10][10];
	int arr2[10];
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d", &n);
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		for (j = 1; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				sum = sum + arr[j][k];
			}
		}
		arr2[i] = sum;
		sum = 0;
		z++;
	}
	for (i = 1; i < z; i++)
	{
		if (arr2[i] == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	char arr[1];
//	gets(arr);
//	char arr2[80];
//	gets(arr2);
//	int i,count;
//	for (i = 0; i < 80; i++)
//	{
//		if (arr2[i] == arr[0])
//		{
//			count = i;
//		}
//	}
//	printf("index = %d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,count=0,num=0;
//	char arr[2];
//	gets(arr);
//	char arr2[81];
//	gets(arr2);
//	for (i = 0; i < 81; i++)
//	{
//		if (arr2[i] == arr[0])
//		{
//			count = i;
//			num++;
//		}
//	}
//	if (num == 0)
//	{
//		printf("Not Found");
//	}
//	else
//	{
//		printf("index = %d", count);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i;
//    int arr[1000];
//    for (i = 0; i < 1000; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (0; i < 1000; i++)
//    {
//        if (arr[i] == arr[2])
//        {
//            int k = arr[2];
//        }
//    }
//    return 0;
//}