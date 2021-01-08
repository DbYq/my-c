#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 999; i++)
//	{
//		int z, k, h;
//		z = i / 100 % 10;
//		k = i / 10 % 10;
//		h = i % 10;
//		if (pow(z, 3) + pow(k, 3) + pow(h, 3) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//Ã°ÅÝÅÅÐò£º
//#include<stdio.h>
//int main()
//{
//	int arr[11];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j;
//	for (i = 0; i < 10-1; i++)
//	{
//		for (j = 0; j < 10 - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//Ñ¡Ôñ·¨ÅÅÐò£º
#include<stdio.h>
int main()
{
	int i, j;
	int arr[11];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}