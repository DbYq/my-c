#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void max_num(int a, int b);
//void min_num(int a, int b);
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	min_num(a, b);
//	max_num(a, b);
//	return 0;
//}
//void max_num(int a, int b)
//{
//	int c;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数：%d\n", b);
//}
//void min_num(int a, int b)
//{
//	int c; int k = b, z = a;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	int num = k * z / b;
//	printf("最小公倍数：%d\n", num);
//}
//#include<stdio.h>
//void swap(int* a, int* b, int* c);
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	swap(&a, &b, &c);
//	return 0;
//}
//void swap(int* a, int* b, int* c)
//{
//	int temp;
//	if (*a < *b)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//	if (*a < *c)
//	{
//		temp = *a;
//		*a = *c;
//		*c = temp;
//	}
//	if (*b < *c)
//	{
//		temp = *b;
//		*b = *c;
//		*c = temp;
//	}
//	printf("%d>%d>%d", *a, *b, *c);
//}
//#include<stdio.h>
//#include<string.h>
//void swap(char* a, char* b, char* c);
//int main()
//{
//	char a[10];
//	char b[10];
//	char c[10];
//	gets(a); getchar();
//	gets(b); getchar();
//	gets(c);
//	swap(a, b, c);
//	return 0;
//}
//void swap(char* a, char* b, char* c)
//{
//	int i;
//	char a1[11], b1[11], c1[11], temp[11];
//	for (i = 0; i < 10; i++)
//	{
//		*(a + i) = a1[i];
//		*(b + i) = b1[i];
//		*(c + i) = c1[i];
//	}
//	if (strcmp(a1, b1) < 0)
//	{
//		strcpy(temp, a1);
//		strcpy(a1, b1);
//		strcpy(b1, temp);
//	}
//	if (strcmp(a1, c1) < 0)
//	{
//		strcpy(temp, a1);
//		strcpy(a1, c1);
//		strcpy(c1, temp);
//	}
//	if (strcmp(b1, c1) < 0)
//	{
//		strcpy(temp, b1);
//		strcpy(b1, c1);
//		strcpy(c1, temp);
//	}
//	printf("%s>%s>%s", a1, b1, c1);
//}