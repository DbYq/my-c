#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//malloc����
int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//��ӡ����ԭ��
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
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
	//��̬����ռ䲻��ʹ�ã�Ӧ���ͷ�
	free(p);
	//������P��ֵΪ��ָ��
	p = NULL;
	return 0;
}


//calloc���� �����ڴ沢��ʼ��0
int main()
{
	int *p=(int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		//��ӡ����ԭ��
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


//realloc������̬�����ڴ�ռ��С
//ע������
//1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//2.���û�У���realloc������������һ���µ��ڴ����򿪱��µĿռ䣬��ԭ�������ݿ����������ͷžɵĿռ䣬�����¿ռ��ַ
//3.����һ���µı���������realloc���Ա�֤����ʧ�ܺ�ɿռ䲻��
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