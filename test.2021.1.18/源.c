#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("****************��ͥ��֧����ϵͳ******************\n");
	printf("*********1.��֧��ϸ         2.�Ǽ�����************\n");
	printf("*********3.�Ǽ�֧��         4.�˳�����************\n");
	printf("**************************************************\n");
	printf("�����롷:\n");
	int swit = 1;
	while (swit == 1)
	{
		int n;
		sacnf("%d", &n);
		switch(n)
		{
		case 1:
			printf("*****************��ǰ��֧��ϸ*******************\n");

			break;
		case 2:
			printf("");
			break;
		case 3:
			printf("");
			break;
		case 4:
			printf("�Ƿ�ȷ���˳���(Y/N)\n");
			char c="0";
			scanf("%s", c);
			if (c == 'Y' || c == 'y')
			{
				swit = 0;
			}
			break;
		default:
			printf("�����������������!!!\n");
		}
		if (swit == 0)
		{
			break;
		}
	}
	return 0;
}