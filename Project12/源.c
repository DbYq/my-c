//#include<stdio.h>
//double fact(int n)
//{
//    int i;
//    double num2 = 1;
//    for (i = 1; i <= n; i++)
//    {
//        num2 = num2 * i;
//    }
//    return num2;
//}
//int main()
//{
//    int m, n, i;
//    double num1 = 1, num3 = 1;
//    scanf("%d%d", &m, &n);
//    double C = 0.0;
//    for (i = 1; i <= m; i++)
//    {
//        num1 = num1 * i;
//    }
//    for (i = 1; i <= n - m; i++)
//    {
//        num3 = num3 * i;
//    }
//    C = 1.0 * fact(n) / (1.0 * num1 * num3);
//    /* printf("%d\n", num3);
//     printf("%d\n", fact(n));
//     printf("%d\n", num1);*/
//    printf("result = %.0lf", C);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    scanf_s("%f%f%f", &a, &b, &c);
//    if (0 == a && 0 == b && 0 == c)
//    {
//        printf("Zero Equation");
//        return 0;
//    }
//    else if (0 == a && 0 == b && 0 != c)
//    {
//        printf("Not An Equation");
//        return 0;
//    }
//    else if (0 == a)
//            printf("%.2f", (-c / b));
//    double i, j, k,g;
//    g = 1.0 * b * b - 4 * 1.0 * a * c;
//    while (g >= 0)
//    {
//        k = sqrt(g);
//        i = (-b + k) / (1.0 * 2 * a);
//        j = (-b - k) / (1.0 * 2 * a);
//        if (0 == k)
//            printf("%.2lf", i);
//        else if (0 == k && 0 == a)
//            printf("%.2f", 1.0 * (-c / b));
//        else if (i > j)
//        {
//            printf("%.2lf\n", i);
//            printf("%.2lf", j);
//        }
//        else if (i < j)
//        {
//            printf("%.2lf\n", j);
//            printf("%.2lf", i);
//        }
//        break;
//    }
//    while (g < 0)
//    {
//        double p, q;
//        p = (-b) / (1.0*2 * a);
//        q = (sqrt(-g) / (1.0*2 * a));
//        printf("%.2lf+%.2lfi\n", p, q);
//        printf("%.2lf-%.2lfi", p, q);
//        break;
//    }
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (0 == a && 0 == b && 0 == c)
    {
        printf("Zero Equation");
        return 0;
    }
    else if (0 == a && 0 == b && 0 != c)
    {
        printf("Not An Equation");
        return 0;
    }
    else if (0 == a)
        printf("%.2f", (-c / b));
    double i, j, k, g;
    g = 1.0 * b * b - 4 * 1.0 * a * c;
    while (g >= 0)
    {
        k = sqrt(g);
        i = (-b + k) / (1.0 * 2 * a);
        j = (-b - k) / (1.0 * 2 * a);
        if (0 == k)
            printf("%.2lf", i);
        else if (0 == k && 0 == a)
            printf("%.2f", 1.0 * (-c / b));
        else if (i > j)
        {
            printf("%.2lf\n", i);
            printf("%.2lf", j);
        }
        else if (i < j)
        {
            printf("%.2lf\n", j);
            printf("%.2lf", i);
        }
        break;
    }
    while (g < 0)
    {
        double p, q;
        if (0 != b)
        {
            p = (-b) / (1.0 * 2 * a);
            q = (sqrt(-g) / (1.0 * 2 * a));
            printf("%.2lf+%.2lfi\n", p, q);
            printf("%.2lf-%.2lfi", p, q);
        }
        if (0 == b)
        {
            p = 0.0;
            q = (sqrt(-g) / (1.0 * 2 * a));
            printf("%.2lf+%.2lfi\n", p, q);
            printf("%.2lf-%.2lfi", p, q);
        }
        break;
    }
    return 0;
}