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
//ͨѶ¼����
struct Contact
{
	struct people_inform *date;//���һ����Ϣ
	int sz;//��¼��ǰ�Ѿ����ڵ�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};
//��������
void InitContact(struct Contact* ps);
//���ͨѶ¼
void AddContact(struct Contact* ps);
//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);
//������ϵ��
void SearchContact(const struct Contact* ps);
//�޸���ϵ����Ϣ
void ModifyContact(struct Contact* ps);
//��ʾͨѶ¼
void ShowContact(const struct Contact* ps);
//����ͨѶ¼���ͷ��ڴ�
void DestoryContact(struct Contact* ps);