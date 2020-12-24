#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<string.h>
//struct complex {
//    int real;
//    int imag;
//};
//
//struct complex multiply(struct complex x, struct complex y);
//
//int main()
//{
//    struct complex product, x, y;
//
//    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
//    product = multiply(x, y);
//    printf("(%d+%di) * (%d+%di) = %d + %di\n",
//        x.real, x.imag, y.real, y.imag, product.real, product.imag);
//
//    return 0;
//}
//struct complex multiply(struct complex x, struct complex y)
//{
//    struct complex k;
//    k.real = x.real * y.real - x.imag * y.imag;
//    k.imag = x.real * y.imag + x.imag * y.real;
//    return k;
//}
//#include <stdio.h>
//
//double fact(int n);
//double factsum(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("fact(%d) = %.0f\n", n, fact(n));
//    printf("sum = %.0f\n", factsum(n));
//
//    return 0;
//}
//double fact(int n)
//{
//    int i;
//    double num = 1;
//    if (n > 0)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            num = num * i;
//        }
//    }
//    return num;
//}
//double factsum(int n)
//{
//    int i, sum = 0, j, num = 1;
//    if (n > 0)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= i; j++)
//            {
//                num = num * j;
//            }
//            sum = sum + num;
//            num = 1;
//        }
//    }
//    return sum;
//}
//#include <stdio.h>
//#include<math.h>
//double calc_pow(double x, int n);
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%.0f\n", calc_pow(x, n));
//
//    return 0;
//}
//double calc_pow(double x, int n)
//{
//    double num = pow(x, n);
//    return num;
//}
