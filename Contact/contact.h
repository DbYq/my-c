#define _CRT_SECURE_NO_WARNINGS
#define DEFULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELEPHONE 12
#define ADDERST 30
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct people_inform
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char telephone[MAX_TELEPHONE];
	char addrest[ADDERST];
};
//通讯录类型
struct Contact
{
	struct people_inform *date;//存放一个信息
	int sz;//记录当前已经存在的元素个数
	int capacity;//当前通讯录的最大容量
};
//声明函数
void InitContact(struct Contact* ps);
//添加通讯录
void AddContact(struct Contact* ps);
//删除指定联系人
void DelContact(struct Contact* ps);
//查找联系人
void SearchContact(const struct Contact* ps);
//修改联系人信息
void ModifyContact(struct Contact* ps);
//显示通讯录
void ShowContact(const struct Contact* ps);
//销毁通讯录，释放内存
void DestoryContact(struct Contact* ps);