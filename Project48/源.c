#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//struct book
//{
//	char name[100];
//	float price;
//};
//int main()
//{
//	struct book b[11];
//	int n, i=0;
//	float max = 0, min = 1000;
//	int max_i, min_i;
//	scanf("%d\n", &n);
//	//while (i < n)
//	//{
//	//	
//	//	i++;
//	//}
//	for (i = 0; i < n; i++)
//	{
//		if (i < n - 1)
//		{
//			gets(b[i].name);
//			//scanf("\n");
//			scanf("%f\n", &b[i].price);
//		}
//		if (i == n - 1)
//		{
//			gets(b[i].name);
//			//scanf("\n");
//			scanf("%f", &b[i].price);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (b[i].price > max)
//		{
//			max = b[i].price;
//			max_i = i;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (b[i].price < min)
//		{
//			min = b[i].price;
//			min_i = i;
//		}
//	}
//	printf("%.2f %s\n", b[max_i].price, b[max_i].name);
//	printf("%.2f %s\n", b[min_i].price, b[min_i].name);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
struct friend
{
	char name[11];
	int bron;
	char number[18];
} fre[11], fre1;
int main()
{
	int n, i, j, min=0,k=100;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %s", &fre[i].name, &fre[i].bron, &fre[i].number);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (fre[j].bron > fre[j + 1].bron)
			{
				fre1 = fre[j];
				fre[j] = fre[j + 1];
				fre[j + 1] = fre1;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%s %d %s\n", fre[i].name, fre[i].bron, fre[i].number);
	}
	return 0;
}
