#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//double fn(double x, int n);
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%.2f\n", fn(x, n));
//
//    return 0;
//}
//double fn(double x, int n)
//{
//    if (n == 1)
//        return x;
//    else
//        return pow(-1, n - 1) * pow(x, n) + fn(x, n - 1);
//}
//#include <stdio.h>
//
//double P(int n, double x);
//
//int main()
//{
//    int n;
//    double x;
//
//    scanf("%d %lf", &n, &x);
//    printf("%.2f\n", P(n, x));
//
//    return 0;
//}
//double P(int n, double x)
//{
//    if (n == 0)
//        return 1;
//    else if (n == 1)
//        return x;
//    else
//        return ((2*n - 1) * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
//}
//#include <stdio.h>
//
//int Ack(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    printf("%d\n", Ack(m, n));
//
//    return 0;
//}
//int Ack(int m, int n)
//{
//    if (m == 0)
//        return n + 1;
//    if (n == 0 && m > 0)
//        return Ack(m - 1, 1);
//    if (m > 0 && n > 0)
//        return Ack(m - 1, Ack(m, n - 1));
//}
#include <stdio.h>
#include<math.h>
void dectobin(int n);
int main()
{
    int n;
    scanf("%d", &n);
    dectobin(n);
    return 0;
}
void dectobin(int n)
{
    pow(10, n / 2);
}