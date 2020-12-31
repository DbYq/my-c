#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAXN 10
//struct student {
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//int set_grade(struct student* p, int n);
//
//int main()
//{
//    struct student stu[MAXN], * ptr;
//    int n, i, count;
//    ptr = stu;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }
//    count = set_grade(ptr, n);
//    printf("The count for failed (<60): %d\n", count);
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    return 0;
//}
//int set_grade(struct student* p, int n)
//{
//    int i, count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if ((*p).score >= 85 && (*p).score <= 100)
//        {
//            (*p).grade = 'A';
//        }
//        if ((*p).score >= 70 && (*p).score <= 84)
//        {
//            (*p).grade = 'B';
//        }
//        if ((*p).score >= 60 && (*p).score <= 69)
//        {
//            (*p).grade = 'C';
//        }
//        if ((*p).score >= 0 && (*p).score < 60)
//        {
//            (*p).grade = 'D';
//            count++;
//        }
//        p++;
//    }
//    return count;
//}
//#include <stdio.h>
//#include<string.h>
//#define MAXS 10
//char* match(char* s, char ch1, char ch2);
//
//int main()
//{
//    char str[MAXS], ch_start, ch_end, * p;
//
//    scanf("%s\n", str);
//    scanf("%c %c", &ch_start, &ch_end);
//    p = match(str, ch_start, ch_end);
//    printf("%s\n", p);
//    return 0;
//}
//char* match(char* s, char ch1, char ch2)
//{
//    int len = strlen(s); char* ch;
//    int i; char a[10]; int z = 0,k=0;
//    for (i = 0; i < len; i++)
//    {
//
//        if (s[i] == ch1)
//        {
//            ch = &s[i];
//            z = 1;
//            a[k] = s[i];
//            k++;
//            continue;
//        }
//        if (s[i] == ch2)
//        {
//            z = 0;
//            a[k] = s[i];
//            k++;
//            a[k] = '\0';
//            break;
//        }
//        if (z == 1)
//        {
//            a[k] = s[i];
//            k++;
//        }
//    }
//    len = strlen(a);
//    for (i = 0; i < len; i++)
//    {
//        printf("%c",a[i]);
//    }
//    return ch;
//}
