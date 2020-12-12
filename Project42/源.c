#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, num,count=1;
//    int num2;
//	scanf("%d %d", &num, &n);
//	while (count <= n)
//	{
//		scanf("%d", &num2);
//		if (num2 < 0)
//		{
//			printf("Game Over\n");
//			break;
//		}
//		if (count == 1)
//		{
//			if (num2 == num)
//			{
//				printf("Bingo!\n");
//				break;
//			}
//			if (num2 > num)
//			{
//				printf("Too big\n");
//			}
//			if(num2 < num)
//			{
//				printf("Too small\n");
//			}
//			count++;
//		}
//		else if(count<=3)
//		{
//			if (num2 == num)
//			{
//				printf("Lucky You!\n");
//				break;
//			}
//			if (num2 > num)
//			{
//				printf("Too big\n");
//			}
//			if(num2<num)
//			{
//				printf("Too small\n");
//			}
//			count++;
//		}
//		else
//		{
//			if (num2 == num)
//			{
//				printf("Good Guess!\n");
//				break;
//			}
//			if (num2 > num)
//			{
//				printf("Too big\n");
//			}
//			if(num2 < num)
//			{
//				printf("Too small\n");
//			}
//			count++;
//		}
//	}
//	if (count > n)
//	{
//		printf("Game Over\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int i, j, count = 0;
//	int k,z;
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		if (arr[i] != ' ')
//		{
//			k = i;
//			for (j = k; j < 100; j++)
//			{
//				if (arr[j] == ' ')
//				{
//					count++;
//				}
//				if (arr[j] == '\0')
//				{
//					break;
//				}
//				i = j - 1;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}