#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//��ʼ������
static int FindByName(const struct Contact* ps, char name[MAX_NAME])//��static��ʾֻ����Դ�ļ��ڲ�����
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
	memset(ps->date, 0, sizeof(ps->date));
	ps->sz = 0;
}
//���ͨѶ¼
void AddContact(struct Contact* ps)
{
	if (ps->sz == MAX)
	{
		printf("ͨѶ¼������\n");
	}
	else
	{
		printf("���������֣���");
		scanf("%s", ps->date[ps->sz].name);
		printf("���������䣺��");
		scanf("%d", &(ps->date[ps->sz].age));
		printf("�������Ա𣺡�");
		scanf("%s", ps->date[ps->sz].sex);
		printf("������绰����");
		scanf("%s", ps->date[ps->sz].telephone);
		printf("�������ַ����");
		scanf("%s", ps->date[ps->sz].addrest);
		ps->sz++;
		printf("��ӳɹ� !\n");
	}
}
//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����ϵ�˵����� ��");
	scanf("%s", name);
	//1.����Ҫɾ���˵�λ��
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲����� ��\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->sz - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->sz--;
		printf("ɾ���ɹ���\n");
	}
}
//������ϵ��
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������ϵ�˵����֣�");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("��ϵ�˲����ڣ�\n");
	}
	else
	{
		printf("���ҳɹ���\n");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->date[pos].name,
			ps->date[pos].age, ps->date[pos].sex, ps->date[pos].telephone,
			ps->date[pos].addrest);
	}
}
//�޸���ϵ����Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸���ϵ�˵����֣�");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("��ϵ�˲����ڣ�\n");
	}
	else
	{
		printf("���������֣���");
		scanf("%s", ps->date[pos].name);
		printf("���������䣺��");
		scanf("%d", &(ps->date[pos].age));
		printf("�������Ա𣺡�");
		scanf("%s", ps->date[pos].sex);
		printf("������绰����");
		scanf("%s", ps->date[pos].telephone);
		printf("�������ַ����");
		scanf("%s", ps->date[pos].addrest);
		printf("�޸ĳɹ� !\n");
	}
}
//��ʾͨѶ¼
void ShowContact(const struct Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("ͨѶ¼Ϊ��!\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		int i;
		for (i = 0; i < ps->sz; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->date[i].name,
				ps->date[i].age, ps->date[i].sex, ps->date[i].telephone,
				ps->date[i].addrest);
		}
	}
}