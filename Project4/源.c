//�����ݹ�:��������Ϊջ���
//ִ�еݹ�ı�Ҫ������1���������������������������������ʱ���ݹ�㲻�ټ���
//2��ÿ�εݹ�������Խ��Խ�ӽ���������
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