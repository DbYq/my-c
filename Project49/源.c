#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float r, h;
//	int n;
//	do
//	{
//		printf("1-Ball\n2 - Cylinder\n3 - Cone\nother - Exit\nPlease enter your command :\n");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			printf("please enter the radius:\n");
//			scanf("%f", &r);
//			printf("%.2f\n", (1.0*4 / 3) * 3.1415 * pow(r, 3));
//			break;
//		case 2:
//			printf("please enter the radius and the height:\n");
//			scanf("%f %f\n", &r,&h);
//			printf("%.2f", 3.1415 * pow(r, 2) * h);
//			break;
//		case 3:
//			printf("please enter the radius and the height:\n");
//			scanf("%f %f", &r, &h);
//			printf("%.2f\n", 3.1415 * pow(r, 2) * h * (1.0 * 1 / 3));
//			break;
//		default:
//			break;
//		}
//	} while (n<4&&n>0);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[4][20];
//	char arr2[10];
//	int i, j,k=0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		arr2[k] = arr[i][0];
//		k++;
//	}
//	printf("%s", arr2); 
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	char arr[81];
//	gets(arr);
//	int i, j;
//	int sz = 0;
//	char temp = "0";
//	for (i = 0; i < 81; i++)
//	{
//		if (arr[i] != '\0')
//		{
//			break;
//		}
//		sz++;
//	}
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	float arr[100];
//	int i;
//	float max=0, min=100, sum=0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + arr[i];
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	float ave = sum / n;
//	printf("average = %.2f\nmax = %.2f\nmin = %.2f", ave, max, min);
//	return 0;
//}