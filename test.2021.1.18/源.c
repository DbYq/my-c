#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("****************家庭收支记账系统******************\n");
	printf("*********1.收支明细         2.登记收入************\n");
	printf("*********3.登记支出         4.退出程序************\n");
	printf("**************************************************\n");
	printf("请输入》:\n");
	int swit = 1;
	while (swit == 1)
	{
		int n;
		sacnf("%d", &n);
		switch(n)
		{
		case 1:
			printf("*****************当前收支明细*******************\n");

			break;
		case 2:
			printf("");
			break;
		case 3:
			printf("");
			break;
		case 4:
			printf("是否确认退出？(Y/N)\n");
			char c="0";
			scanf("%s", c);
			if (c == 'Y' || c == 'y')
			{
				swit = 0;
			}
			break;
		default:
			printf("输入错误，请重新输入!!!\n");
		}
		if (swit == 0)
		{
			break;
		}
	}
	return 0;
}