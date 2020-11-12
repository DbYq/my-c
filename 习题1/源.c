//统计各位数字之和是五的数
#include<stdio.h>
//int main()
//{
//	int i = 26;
//	int j = 0;
//	j = i / 1 % 10;
//	printf("%d", j);
//	j = i / 10 % 10;
//	printf("%d", j);
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 5; i <= 500; i++)
	{
		int num1, num2, num3;
		num1 = i / 1 % 10;
		num2 = i / 10 % 10;
		num3 = i / 100 % 10;
		if (num1 + num2 + num3 == 5)
		{
			printf("%d ", i);
			j++;
		}
	}
	printf("\n总个数为%d ", j);
	return 0;
}