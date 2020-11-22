#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int rate, rate_limiting;
//    scanf("%d%d", &rate, &rate_limiting);
//    float k = 1.0 * (rate - rate_limiting) / rate_limiting;
//    if (k < 0.10)
//    {
//        printf("OK");
//    }
//    else if (k >= 0.10 && k < 0.50)
//    {
//        k=k * 100;
//        printf("Exceed %.0f%%. Ticket 200",k);
//    }
//    else
//    {
//        k = k * 100;
//        printf("Exceed %.0f%%. License Revoked",k);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char s;
//    int a, b;
//    scanf("%d %d %c", &a, &b, &s);
//    if (s == 'm')
//    {
//        if (b == 90)
//        {
//            printf("%.2f", 6.95 * a * 0.95);
//        }
//        else if (93 == b)
//        {
//            printf("%.2f", 7.44 * a * 0.95);
//        }
//        else if (97 == b)
//        {
//            printf("%.2f", 7.93 * a * 0.95);
//        }
//    }
//    else if ('e' == s)
//    {
//        if (b == 90)
//        {
//            printf("%.2f", 6.95 * a * 0.97);
//        }
//        else if (93 == b)
//        {
//            printf("%.2f", 7.44 * a * 0.97);
//        }
//        else if (97 == b)
//        {
//            printf("%.2f", 7.93 * a * 0.97);
//        }
//    }
//    //printf("%d %d %c", a, b, s);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m, n, y, b,k,d;
//    
//    scanf("%d %d", &m, &n);
//    k = m;
//    d = n;
//    while (y = m % n)
//    {
//        m = n;
//        n = y;
//    }
//    y = n;
//    if (k==d)
//    {
//        b = k;
//    }
//    else if (k > d)
//    {
//        int i;
//        for (i = 1; i <= 100; i++)
//        {
//            k= k * i;
//            if (k% d == 0)
//            {
//                b = k;
//                break;
//            }
//        }
//    }
//    else if (d > k)
//    {
//        int i;
//        for (i = 1; i <= 100; i++)
//        {
//            d = d * i;
//            if (d % k == 0)
//            {
//                b = d;
//                break;
//            }
//
//        }
//    }
//    printf("%d %d", y,b);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m, n, y, b, k, d;
//
//    scanf("%d %d", &m, &n);
//    k = m;
//    d = n;
//    while (y = m % n)
//    {
//        m = n;
//        n = y;
//    }
//    y = n;
//    printf("%d %d", y, (k * d) / y);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, n, sum = 0;
//    for (i = 1; i <= 10000000000; i++)
//    {
//        scanf("%d", &n);
//        if (n <= 0)
//        {
//            break;
//        }
//        if (n % 2 == 1)
//        {
//            sum = sum + n;
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int i, n,min;
    scanf("%d", &n);
    int k = n;
    for (i = 1; i <= k; i++)
    {
        scanf("%d", &n);
        if (1 == i || min > n)
        {
            min = n;
        }
    }
    printf("min = %d", min);
    return 0;
}