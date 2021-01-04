#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(int* p)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void manage(int* p)
//{
//	int min = *p;
//	int max = *(p + 9);
//	int temp, i; int k;
//	for (i = 1; i < 10; i++)
//	{
//		if (*(p + i) < min)
//		{
//			min = *(p + i);
//			k = i;
//		}
//	}
//	temp = *(p + k);
//	*(p + k) = *p;
//	*p = temp;
//	for (i = 0; i < 10; i++)
//	{
//		if (*(p + i) > max)
//		{
//			max = *(p + i);
//			k = i;
//		}
//	}
//	temp = *(p + k);
//	*(p + k) = *(p + 9);
//	*(p + 9) = temp;
//}
//void scan(int* p)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", p+i);
//	}
//}
//int main()
//{
//	int arr[11];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scan(arr,sz);
//	manage(arr,sz);
//	print(arr);
//	return 0;
//}
//#define N 20
//#define M 5
//#include<stdio.h>
//void change(int* p, int m, int n)
//{
//	int i;
//	char b[M]; int k = 0;
//	char c[N - M];
//	for (i = n - m; i < n; i++)
//	{
//		b[k] = *(p + i);
//		k++;
//	}
//	for (i = 0; i < n-m ; i++)
//	{
//		c[i] = *(p + i);
//	}
	/*for (i = 0; i < m; i++)
	{
		*(p + i) = b[i];
	}
	for (i = 0; i < n - m; i++)
	{
		*(p + i + m) = c[i];
	}
}
int main()
{
	int arr[N];
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d", &arr[i]);
	}
	change(arr, M, N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/
//#include<stdio.h>
//int longer(char* p)
//{
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		if (*(p + i) == '\0')
//		{
//			break;
//		}
//	}
//	return i;
//}
//int main()
//{
//	char arr[20];
//	gets(arr);
//	longer(arr);
//	printf("%d", longer(arr));
//	return 0;
//}

//结构体指针
#include<stdio.h>
#include<string.h>
void InitGroup(const struct Group* ps);
double average(const struct Group* ps);
void Find(const struct Group* ps);
void Find2(const struct Group* ps);
struct Student
{
	int number;
	int Chinese;
	int Math;
	int English;
	int Politics;
	int History;
};
struct Group
{
	struct Student date[5];
	int sz;
};
int main()
{
	struct Group str;
	InitGroup(&str);
	average(&str);
	printf("第一门课程平均分：%.2lf",average(&str));
	Find(&str);
	Find2(&str);
	return 0;
}
void InitGroup(struct Group* ps)
{
	ps->sz = 4;
	int i;
	for (i = 1; i <= ps->sz; i++)
	{
		printf("学号 语文 数学 英语 政治 历史\n");
		scanf("%d %d %d %d %d %d", &ps->date[i].number,&ps->date[i].Chinese, &ps->date[i].Math,
			&ps->date[i].English, &ps->date[i].Politics, &ps->date[i].History);
	}
}
double average(const struct Group* ps)
{
	int i; double sum = 0, average;
	for (i = 1; i <= ps->sz; i++)
	{
		sum = sum + ps->date[i].Chinese;
	}
	average = sum / 4;
	return average;
}
void Find(const struct Group* ps)
{
	int z = 0;
	int i;
	for (i = 1; i <= ps->sz; i++)
	{
		if (ps->date[i].Chinese < 60)
		{
			z++;
		}
		if (ps->date[i].Math < 60)
		{
			z++;
		}
		if (ps->date[i].English < 60)
		{
			z++;
		}
		if (ps->date[i].Politics < 60)
		{
			z++;
		}
		if (ps->date[i].History < 60)
		{
			z++;
		}
		if (z >= 2)
		{
			printf("%d号学生有至少两门功课不及格\n", ps->date[i].number);
			printf("他的各科成绩和平均成绩为：%d %d %d %d %d %.2lf", ps->date[i].Chinese,
				ps->date[i].Math, ps->date[i].English, ps->date[i].Politics, ps->date[i].History,
				(1.0 * (ps->date[i].Chinese + ps->date[i].Math + ps->date[i].English + ps->date[i].Politics
				+ ps->date[i].History) / 5));
		}
		z = 0;
	}
}
void Find2(const struct Group* ps)
{
	int i;
	for (i = 1; i <= ps->sz; i++)
	{
		if ((1.0 * (ps->date[i].Chinese + ps->date[i].Math + ps->date[i].English + ps->date[i].Politics + 
			ps->date[i].History) / 5) > 90)
		{
			printf("%d号学生平均成绩大于90分\n", ps->date[i].number);
		}
		if (ps->date[i].Chinese > 85 && ps->date[i].Math > 85 && ps->date[i].English > 85 && ps->date[i].Politics > 85
			&& ps->date[i].History > 85)
		{
			printf("%d号学生各科成绩都高于85分\n", ps->date[i].number);
		}
	}
}