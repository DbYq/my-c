#define _CRT_SECURE_NO_WARNINGS
//�ṹ���������
//#include<stdio.h>
//struct Node
//{
//	int date;//��ǰ�ṹ��������
//	//�����з���struct Node next;//��һ���ṹ��
//	//���з���
//	struct Node* next;//ָ����һ���ṹ���ַ,��ͬ���͵���������***��һ����Ҫ��ָ��ȥ�ҡ�
//
//
//};
//
//int main()
//{
//
//	return 0;
//}


//typedef struct Node//��typedef��ʾ��struct Node������
//{
//	int date;
//	struct Node* next;
//}stu;//����Ϊstu
//
//int main()
//{
//	//������������д������ȷ
//	//1.
//	struct Node n1;
//	//2.
//	stu n2;
//	//���Ǳ�ʾͬ���Ķ���
//	return 0;
//}


//�ṹ�����ò�ͬ���ͽṹ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct stu
//{
//	char c;
//	struct T bt;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct stu s = { 'c',{55.6,18},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf %d\n", s.bt.weight, s.bt.age);//�ṹ��Խṹ��ĵ���
//	return 0;
//}


//�ṹ�崫��
//����д������ֵ
//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S temp)
//{
//	temp.a = 100;
//	temp.c = 'w';
//	temp.d = 3.14;
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(s);
//	return 0;
//}
//���⣬��ַ
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)//��Ҫ�ı��ڲ�ֵ��ַ
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
//print1,print2������ͬ�������Ƽ�print2;
void print1(struct S temp)//���ı�ֵ�ɴ�ֵ
{
	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
}
void print2(const struct S* ps)//�˴���const��Ϊ��ָֹ��ı�ԭ���ݸ��Ӱ�ȫ
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	print1(s);
	print2(&s);
	return 0;
}