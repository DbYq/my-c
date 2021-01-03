#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//malloc函数
int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//打印错误原因
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//动态申请空间不再使用，应该释放
	free(p);
	//主动将P赋值为空指针
	p = NULL;
	return 0;
}


//calloc函数 开辟内存并初始化0
int main()
{
	int *p=(int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		//打印错误原因
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}


//realloc调整动态开辟内存空间大小
//注意事项
//1.如果p指向的空间之后有足够的空间可以追加，则直接追加，后返回p
//2.如果没有，则realloc函数会重新找一个新的内存区域开辟新的空间，把原来的数据拷贝过来，释放旧的空间，返回新空间地址
//3.得用一个新的变量来接收realloc，以保证开辟失败后旧空间不变
int main()
{
	int* p = (int*)malloc(20 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* ptr = realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
		int i;
		for (i = 5; i < 40; i++)
	{	
			*(p + i) = i;
		}
		for (i = 0; i < 40; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}