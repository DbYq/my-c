#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int chengji(int*z, int*y)
{
int a1, a2, b1, b2;
printf("�ֱ����븴��sum1��sum2��ʵ��a1,a2���鲿b1,b2\n");
scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
printf("����z=%d+%d*i\ny=%d+%d*i", a1, b1, a2, b2);
int num1, num2, num3, num4;
num1 = a1 * a2;
num2 = b1 * b2;
num3 = a1 * b2;
num4 = a2 * b1;
*z = num1 - num2;
*y = num3 + num4;
return z, y;
}
int main()
{
//int a1, a2, b1, b2;
//printf("�ֱ����븴��sum1��sum2��ʵ��a1,a2���鲿b1,b2\n");
//scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
//printf("����z=%d+%d*i\ny=%d+%d*i", a1, b1, a2, b2);
int g = 0;
int h = 0;
chengji(&g, &h);
//int num1, num2, num3, num4;
//num1 = a1 * a2;
//num2 = b1 * b2;
//num3 = a1 * b2;
//num4 = a2 * b1;
//int z = num1 - num2;
//int y = num3 + num4;
printf("\n��������������sum1��sum2�ĳ˻�Ϊ%d+%d*i", g, h);
}