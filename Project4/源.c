//函数递归:常见错误为栈溢出
//执行递归的必要条件：1、存在限制条件，当满足这个限制条件时，递归便不再继续
//2、每次递归调用完后越来越接近限制条件
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}