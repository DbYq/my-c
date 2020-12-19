#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[81];
//	char arr2[81] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
//	int i, n;
//	scanf("%d", &n);
//	getchar();
//	for (i = 1; i <= n; i++)
//	{
//		gets(arr1);
//		if (strcmp(arr2, arr1) > 0)
//		{
//			strcpy(arr2, arr1);
//		}
//	}
//	printf("Min is: %s", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[81];
//	char arr2[81];
//	int n,j, i = 0;
//	
//	scanf("%d", &n);
//	while (i < n)
//	{
//		int count=0, lo=0;
//		scanf("%s", arr);
//		for (j = 0; j < 80; j++)
//		{
//			if (arr[j] == '\0')
//			{
//				break;
//			}
//			count++;
//			
//		}
//		if (count > lo)
//		{
//			lo = count;
//			strcpy(arr2, arr);
//		}
//		i++;
//	}
//	printf("%s", arr2);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	getchar();
//	char arr[1000][81];
//	char* temp;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		gets(arr[i]);
//	}
//	temp = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (strlen(temp)<strlen(arr[i]))
//		{
//			temp = arr[i];
//		}
//	}
//	printf("The longest is: %s", temp);
//	return 0;
//}
#include<stdio.h>
#include<string>
int main()
{
	char arr[5][81];
	char* temp;
	int i, j;
	for (i = 0; i < 5; i++)
	{
		gets(arr[i]);
		getchar();
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (strcmp(arr[j], arr[j + 1]) > 0)
			{
				temp = arr[j];
				arr[j] =arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("After sorted:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}