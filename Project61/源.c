#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAXS 20
//void f(char* p);
//int main()
//{
//    char s[MAXS];
//    f(s);
//    printf("%s\n", s);
//    return 0;
//}
//void f(char* p)
//{
//    int i;
//    int count = 0;
//    for (i = 0; i < 100; i++)
//    {
//        if (*(p += i) != '\0')
//        {
//            count++;
//        }
//        if (*(p += i) == '\0')
//        {
//            break;
//        }
//    }
//    char* left = p;
//    char* right = p + count;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        left++;
//        right--;
//    }
//}
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//char* str_cat(char* s, char* t);
//
//int main()
//{
//    char* p;
//    char str1[MAXS + MAXS] = { '\0' }, str2[MAXS] = { '\0' };
//
//    scanf("%s%s", str1, str2);
//    p = str_cat(str1, str2);
//    printf("%s\n%s\n", p, str1);
//
//    return 0;
//}
//char* str_cat(char* s, char* t)
//{
//    strcat(s, t);
//    return s;
//}
//#include <stdio.h>
//#include<string.h>
//#define MAXN 10
//
//int ArrayShift(int a[], int n, int m);
//
//int main()
//{
//    int a[MAXN], n, m;
//    int i;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) scanf("%d", &a[i]);
//    ArrayShift(a, n, m);
//    for (i = 0; i < n; i++) {
//        if (i != 0) printf(" ");
//        printf("%d", a[i]);
//    }
//    printf("\n");
//    return 0;
//}
//int ArrayShift(int a[], int n, int m)
//{
//    int b[20];
//    strcpy(b, a);
//    int i;
//    int k;
//    for (i = 0; i < n; i++)
//    {
//        if (m < n)
//        {
//            k = i + m;
//        }
//        else
//            k = i + (m - n);
//        if (k < n)
//        {
//            b[k] = a[i];
//        }
//        if (k >= n)
//        {
//            b[k - n] = a[i];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        a[i] = b[i];
//    }
//}
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos(double e, double x)
{
    double danxiang = 1, m = 2, sum = 1;//第一项为1，直接将sum置为1，从第二项开始判断
    int d = -1;
    while (danxiang >= e)
    {
        double fenmu = 1, fenzi;
        for (int i = 1; i <= m; i++)
        {
            fenmu *= i;
        }
        fenzi = pow(x, m);//次幂函数
        danxiang = fenzi / fenmu;
        sum = sum + d * danxiang;
        d = -d;
        m = m + 2;  //不要忘记每多一项，次幂加2
    }
    return sum;
}