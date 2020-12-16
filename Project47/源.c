#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h> 
//struct employee
//	{
//		char name[10];
//		float basic_wage;
//		float float_wage;
//		float output;
//	};
//int main()
//{
//	struct employee empl[100];
//	int n, i;
//	float infact_wage;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %f %f %f", &empl[i].name, &empl[i].basic_wage,
//		&empl[i].float_wage, &empl[i].output);
//	}
//	for (i = 0; i < n; i++)
//	{
//		infact_wage = (empl[i].basic_wage + empl[i].float_wage - empl[i].output);
//		printf("%s %.2f\n", empl[i].name, infact_wage);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//struct student
//{
//	int num;
//	char name[10];
//	float score;
//};
//int main()
//{
//	struct student stu[20];
//	int n, i;
//	float sum_score = 0, average_score;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %f", &stu[i].num, &stu[i].name, &stu[i].score);
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum_score = sum_score + stu[i].score;
//	}
//	average_score = sum_score /(1.0* n);
//	printf("%.2f\n", average_score);
//	for (i = 0; i < n; i++)
//	{
//		if (stu[i].score < average_score)
//		{
//			printf("%s %05d\n", stu[i].name, stu[i].num);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	char name[11];
	int score1;
	int score2;
	int score3;
};
int main()
{
	struct student stu[11];
	int n, i, max = 0, k;
	int sum_score[1000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %s %d %d %d", &stu[i].num,&stu[i].name, 
			&stu[i].score1, &stu[i].score2, &stu[i].score3);
	}
	for (i = 0; i < n; i++)
	{
		sum_score[i] = stu[i].score1 + stu[i].score2 + stu[i].score3 ;
	}
	for (i = 0; i < n; i++)
	{
		if (sum_score[i] > max)
		{
			max = sum_score[i];
			k = i;
		}
	}
	printf("%s %05d %d", stu[k].name, stu[k].num, max);
	return 0;
}