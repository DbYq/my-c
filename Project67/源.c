#define _CRT_SECURE_NO_WARNINGS
//结构体的自引用
//#include<stdio.h>
//struct Node
//{
//	int date;//当前结构体内数据
//	//不可行方法struct Node next;//下一个结构体
//	//可行方法
//	struct Node* next;//指向下一个结构体地址,找同类型的其他变量***且一定需要用指针去找。
//
//
//};
//
//int main()
//{
//
//	return 0;
//}


//typedef struct Node//加typedef表示对struct Node重命名
//{
//	int date;
//	struct Node* next;
//}stu;//命名为stu
//
//int main()
//{
//	//所以以下两种写法都正确
//	//1.
//	struct Node n1;
//	//2.
//	stu n2;
//	//他们表示同样的东西
//	return 0;
//}


//结构体引用不同类型结构体
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
//	printf("%lf %d\n", s.bt.weight, s.bt.age);//结构体对结构体的调用
//	return 0;
//}


//结构体传参
//错误写法，传值
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
//正解，传址
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* ps)//需要改变内部值传址
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
//print1,print2输出结果同样，但推荐print2;
void print1(struct S temp)//不改变值可传值
{
	printf("%d %c %lf\n", temp.a, temp.c, temp.d);
}
void print2(const struct S* ps)//此处加const是为防止指针改变原内容更加安全
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