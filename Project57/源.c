#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int f(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", f(n));
//
//    return 0;
//}
//int f(int n)
//{
//    int sum = 1;
//    if (n == 0)
//    {
//        sum = 0;
//    }
//    if (n == 1)
//    {
//        sum = 1;
//    }
//    int num_1 = 0;
//    int num_2 = 1;
//    int i;
//    for (i = 2; i <= n; i++)
//    {
//        sum = num_1 + num_2;
//        num_1 = num_2;
//        num_2 = sum;
//    }
//    return sum;
//}
#include <stdio.h>
#include<math.h>
double fn(double x, int n)
{
    double k = 1;
    if (n % 2 == 0)
    {
        k = -1;
    }
    double sum = 0;
    if (n >= 2)
    {
        sum = sum + fn(x, n - 1);
    }
    sum = sum + k*pow(x, n);
}

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x, n));

    return 0;
}