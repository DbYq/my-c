#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void dectobin(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    dectobin(n);
//
//    return 0;
//}
//void dectobin(int n)
//{
//    int print(int n);
//    printf("%d", print(n));
//}
//int print(int n)
//{
//    if (n == 0)
//        return 0;
//    else
//        return n % 2 + print(n / 2) * 10;
//}
//#include <stdio.h>
//
//int fib(int n);
//void PrintFN(int m, int n);
//
//int main()
//{
//    int m, n, t;
//
//    scanf("%d %d %d", &m, &n, &t);
//    printf("fib(%d) = %d\n", t, fib(t));
//    PrintFN(m, n);
//
//    return 0;
//}
//int fib(int n)
//{
//    int num1 = 1, num2 = 1, num3;
//    if (n <= 2)
//        return 1;
//    else
//    {
//        int k = n - 2;
//        while (k>0)
//        {
//            num3 = num1 + num2;
//            num1 = num2;
//            num2 = num3;
//            k--;
//        }
//        return num3;
//    }
//}
//void PrintFN(int m, int n)
//{
//    int i=1, z = 1;
//    for (i = 1; i < n; i++)
//    {
//        if (fib(i) >= m)
//        {
//            break;
//        }
//    }
//    if (fib(i) <= n)
//    {
//        printf("%d", fib(i));
//        i = i + 1;
//        z = 0;
//    }
//    while (fib(i) <= n)
//    {
//        printf(" %d", fib(i));
//        i++;
//    }
//    if (z == 1)
//    {
//        printf("No Fibonacci number");
//    }
//}
#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse(int number)
{
    if (number % 10 == 0)
    {
        return 0;
    }
    else
        return ;
}