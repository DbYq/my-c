#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//检测容量；满了增
void Chackcapacity(struct Contact* ps)
{
	if (ps->capacity == ps->sz)
	{
		//满了，增容
		struct people_inform* ptr = realloc(ps->date, (ps->capacity + 2) * sizeof(struct people_inform));
		if (ptr != NULL)
		{
			ps->date = ptr;
			ps->capacity += 2;
			printf("增容成功！\n");
		}
		else
		{
			printf("增容失败！\n");
		}
	}
}
//初始化函数
static int FindByName(const struct Contact* ps, char name[MAX_NAME])//加static表示只能在源文件内部运行
{
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (strcmp(ps->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void InitContact(struct Contact* ps)
{
	ps->date = (struct people_inform*)malloc(DEFULT_SZ * sizeof(struct people_inform));
	if (ps->date == NULL)
	{
		return;
	}
	ps->sz = 0;
	ps->capacity = DEFULT_SZ;
}
//添加通讯录
void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量
	Chackcapacity(ps);
	printf("请输入名字：》");
	scanf("%s", ps->date[ps->sz].name);
	printf("请输入年龄：》");
	scanf("%d", &(ps->date[ps->sz].age));
	printf("请输入性别：》");
	scanf("%s", ps->date[ps->sz].sex);
	printf("请输入电话：》");
	scanf("%s", ps->date[ps->sz].telephone);
	printf("请输入地址：》");
	scanf("%s", ps->date[ps->sz].addrest);
	ps->sz++;
	printf("添加成功 !\n");
}
//删除指定联系人
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除联系人的名字 ：");
	scanf("%s", name);
	//1.查找要删除人的位置
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要删除的人不存在 ！\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->sz - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->sz--;
		printf("删除成功！\n");
	}
}
//查找联系人
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入联系人的名字：");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("联系人不存在！\n");
	}
	else
	{
		printf("查找成功！\n");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->date[pos].name,
			ps->date[pos].age, ps->date[pos].sex, ps->date[pos].telephone,
			ps->date[pos].addrest);
	}
}
//修改联系人信息
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改联系人的名字：");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("联系人不存在！\n");
	}
	else
	{
		printf("请输入名字：》");
		scanf("%s", ps->date[pos].name);
		printf("请输入年龄：》");
		scanf("%d", &(ps->date[pos].age));
		printf("请输入性别：》");
		scanf("%s", ps->date[pos].sex);
		printf("请输入电话：》");
		scanf("%s", ps->date[pos].telephone);
		printf("请输入地址：》");
		scanf("%s", ps->date[pos].addrest);
		printf("修改成功 !\n");
	}
}
//显示通讯录
void ShowContact(const struct Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录为空!\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		int i;
		for (i = 0; i < ps->sz; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->date[i].name,
				ps->date[i].age, ps->date[i].sex, ps->date[i].telephone,
				ps->date[i].addrest);
		}
	}
}
void DestoryContact(struct Contact* ps)
{
	free(ps->date);
	ps->date = NULL;
}