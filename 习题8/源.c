#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int Is_Square(int i)
{
	double k = 0.0;
	k = sqrt(i);
	if (k == (int)k);
	return k;
}
int main()
{
	int n = 0;
	printf("����һ������n\n");
	scanf("%d ", &n);
	Is_Square(n);
	printf("����%dΪ��ȫƽ����",n);
	return 0;
}