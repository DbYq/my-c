#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAXN 10
//#define MAXS 20
//
//int max_len(char* s[], int n);
//
//int main()
//{
//    int i, n;
//    char* string[MAXN] = { NULL };
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        string[i] = (char*)malloc(sizeof(char) * MAXS);
//        scanf("%s", string[i]);
//    }
//    printf("%d\n", max_len(string, n));
//
//    return 0;
//}
//int max_len(char* s[], int n)
//{
//    int i, max = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (strlen(s[max]) < strlen(s[i]))
//        {
//            max = i;
//        }
//    }
//    return strlen(s[max]);
//}
#include <stdio.h>

char* getmonth(int n);

int main()
{
    int n;
    char* s;

    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}
char* getmonth(int n)
{
    char* p;
    if (n == 1)
    {
        p = "January";
    }
    else if (n == 2)
    {
        p = "February";
    }
    else if (n == 3)
    {
        p = "March";
    }
    else if (n == 4)
    {
        p = "April";
    }
    else if (n == 5)
    {
        p = "May";
    }
    else if (n == 6)
    {
        p = "June";
    }
    else if (n == 7)
    {
        p = "July";
    }
    else if (n == 8)
    {
        p = "August";
    }
    else if (n == 9)
    {
        p = "September";
    }
    else if (n == 10)
    {
        p = "October";
    }
    else if (n == 11)
    {
        p = "November";
    }
    else if (n == 12)
    {
        p = "December";
    }
    else
    {
        p = NULL;
    }
    return p;
}