#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAXN 20
//
//void strmcpy(char* t, int m, char* s);
//int main()
//{
//    char t[MAXN], s[MAXN];
//    int m;
//    scanf("%d\n", &m);
//    getchar();
//    gets(t);
//    strmcpy(t, m, s);
//    printf("%s\n", s);
//    return 0;
//}
//void strmcpy(char* t, int m, char* s)
//{
//    int i, k = 0;
//    for (i = 0; i < 100; i++)
//    {
//        if (t[i] == '\0')
//        {
//            break;
//        }
//    }
//    if (m - 1 > i)
//    {
//        s = 0;
//    }
//    else
//    {
//        for (i = m - 1; i < 100; i++)
//        {
//            if (t[i] == '\0')
//            {
//                break;
//            }
//            s[k] = t[i];
//            k++;
//        }
//    }
//}
#include <stdio.h>
#define MAXN 10
struct student {
    int num;
    char name[20];
    int score;
    char grade;
};
int set_grade(struct student* p, int n);
int main()
{
    struct student stu[MAXN], * ptr;
    int n, i, count;

    ptr = stu;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
    }
    count = set_grade(ptr, n);
    printf("The count for failed (<60): %d\n", count);
    printf("The grades:\n");
    for (i = 0; i < n; i++)
        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
    return 0;
}
int set_grade(struct student* p, int n)
{

}