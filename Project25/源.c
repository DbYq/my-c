#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int IsSquare(int n)
//{
//    int i=sqrt(n);
//    if (n == pow(i, 2))
//    {
//        return 1;
//    }
//    else
//        return 0;
//
//    /*for (i = 1; i <= sqrt(n); i++)
//    {
//        if (pow(i, 2) == n)
//        {
//            return 1;
//        }
//        if (pow(i, 2) != n)
//        {
//            return 0;
//        }
//    }*/
//}
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    if (IsSquare(n)) printf("YES\n");
//    else printf("NO\n");
//
//    return 0;
//}
//#include <stdio.h>
//
//double fact(int n)
//{
//    int i;
//    double k = 1;
//    for (i = 1; i <= n; i++)
//    {
//        
//        k = k * i;
//    }
//    return k;
//}
//int main(void)
//{
//    int i;
//    double sum;
//
//    sum = 0;
//    for (i = 1; i <= 10; i++)
//        sum = sum + fact(i);
//
//    printf("1!+2!+...+10! = %f\n", sum);
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int CountDigit(int number, int digit)
//{
//    int i,count=0;
//    if (number < 0)
//    {
//        number = -number;
//    }
//    for (i = 0; ; i++)
//    {
//        int k = pow(10,i);
//        if (number / k > 9)
//        {
//            int z = number / k % 10 ;
//            if (z == digit)
//            {
//                count++;
//            }
//        }
//        else
//        {
//            int z = number / k % 10;
//            if (z == digit)
//            {
//                count++;
//            }
//            break;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    int number, digit;
//
//    scanf("%d %d", &number, &digit);
//    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int k = 1 % 10;
//    printf("%d", k);
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int narcissistic(int number)
//{
//    int w, q, b, s, g, count=0, i;
//    if (number >= 100 && number < 1000)
//    {
//        count = 3;
//    }
//    else if (number >= 1000 && number < 10000)
//    {
//        count = 4;
//    }
//    else if (number == 10000)
//    {
//        count = 5;
//    }
//    w = number / 10000 % 10;
//    q = number / 1000 % 10;
//    b = number / 100 % 10;
//    s = number / 10 % 10;
//    g = number / 1% 10;
//    if (number == pow(w, count) + pow(q, count) + pow(b, count) + pow(s, count) + pow(g, count))
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//void PrintN(int m, int n)
//{
//    int i;
//    for (i = m+1; i < n; i++)
//    {
//        int w, q, b, s, g, count=0;
//        if (i >= 100 && i < 1000)
//        {
//            count = 3;
//        }
//        else if (i >= 1000 && i < 10000)
//        {
//            count = 4;
//        }
//        else if(i==10000)
//        {
//            count = 5;
//        }
//        w = i / 10000 % 10;
//        q = i / 1000 % 10;
//        b = i/ 100 % 10;
//        s = i / 10 % 10;
//        g = i/ 1 % 10;
//        if (i == pow(w, count) + pow(q, count) + pow(b, count) + pow(s, count) + pow(g, count))
//        {
//            printf("%d\n",i);
//        }
//    }
//}

//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
//    PrintN(m, n);
//    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
//
//    return 0;
//}