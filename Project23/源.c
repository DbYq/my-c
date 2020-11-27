#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int is(int number)
//{
//    int w,q, b, s, g;
//    w = number / 10000 % 10;
//    q = number / 1000 % 10;
//    b = number / 100 % 10;
//    s = number / 10 % 10;
//    g = number % 10;
//    if (5 == w + q + b + s + g)
//        return number;
//    else
//        return 0;
//}
//void count_sum(int a, int b)
//{
//    int i,sum=0,count=0;
//    for (i = a; i <= b; i++)
//    {
//        int w, q, b, s, g;
//        w = i / 10000 % 10;
//        q =i / 1000 % 10;
//        b =i/ 100 % 10;
//        s = i / 10 % 10;
//        g = i % 10;
//        if (5 == w + q + b + s + g)
//        {
//            sum = sum + i;
//            count++;
//        }
//    }
//    printf("count = %d, sum = %d", count, sum);
//}
//
//int main()
//{
//    int a, b;
//
//    scanf("%d %d", &a, &b);
//    if (is(a))
//    {
//        printf("%d is counted.\n", a);
//    }
//    if (is(b))
//    {
//        printf("%d is counted.\n", b);
//    }
//    count_sum(a, b);
//
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//
//double mypow(double x, int n)
//{
//    double k=pow(x, n);
//    return k;
//}
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%f\n", mypow(x, n));
//
//    return 0;
//}
//#include<stdio.h> 
//
//double result_real, result_imag;
//void complex_prod(double x1, double y1, double x2, double y2)
//{
//    result_real = x1 * x2 - y1 * y2;
//    result_imag = x1 * y2 + x2 * y1;
//    
//}
//
//int main(void)
//{
//    double imag1, imag2, real1, real2;
//
//    scanf("%lf %lf", &real1, &imag1);
//    scanf("%lf %lf", &real2, &imag2);
//    complex_prod(real1, imag1, real2, imag2);
//    printf("product of complex is (%f)+(%f)i\n", result_real, result_imag);
//
//    return 0;
//}
//#include <stdio.h>
//
//int sign(int x)
//{
//    if (x > 0)
//    {
//        return 1;
//    }
//    else if (x == 0)
//    {
//        return 0;
//    }
//    else
//        return -1;
//}
//
//int main()
//{
//    int x;
//
//    scanf("%d", &x);
//    printf("sign(%d) = %d\n", x, sign(x));
//
//    return 0;
//}