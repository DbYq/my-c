//#include<stdio.h>
//int main()
//{
//    int m, n, i;
//    scanf_s("%d%d", &m, &n);
//    double sum = 0.0;
//    while (m <= n)
//    {
//        for (i = m; i <= n; i++)
//        {
//            sum = sum + (1.0*i * i + 1.0 / i);
//        }
//        break;
//    }
//    printf("sum = %.6lf", sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i <= n; i++)
//    {
//        int z = pow(3, i);
//        printf("pow(3,%d) = %d\n", i, z);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, i;
//    scanf_s("%d", &n);
//    double sum = 0.0;
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + sqrt(i);
//    }
//    printf("sum = %.2lf", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, sum = 0,i;
//    scanf_s("%d", &n);
//    int num = 1;
//    int z = 0;
//    for (i = 1; i <= n; i++)
//    {
//        num = num * i;
//        z = z + num;
//    }
//    printf("%d", z);
//    return 0;
//}
///*#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + pow(2, i);
//    }
//    printf("result = %d", sum);
//    return*/ 0;
//}
//#include<stdio.h>
//int fact(int n)
//{
//    int i, num2 = 1;
//    for (i = 1; i <= n; i++)
//    {
//        num2 = num2 * i;
//    }
//    return num2;
//}
//int main()
//{
//    int m, n;
//    scanf_s("%d%d", &m, &n);
//    printf("%d", fact(n));
//    return 0;
//}
//#include<stdio.h>
//int fact(int n)
//{
//    int i, num2 = 1;
//    for (i = 1; i <= n; i++)
//    {
//        num2 = num2 * i;
//    }
//    return num2;
//}
//int main()
//{
//    int m, n, i, num1 = 1, num3 = 1;
//    scanf_s("%d%d", &m, &n);
//    double C = 0.0;
//    for (i = 1; i <= m; i++)
//    {
//        num1 = num1 * i;
//    }
//    for (i = 1; i <= n - m; i++)
//    {
//        num3 = num3 * i;
//    }
//    int k = fact(n);
//    C = 1.0*k / 1.0*num1 * num3;
//    //printf("%d",num3);
//    //printf("%d",fact(n));
//    printf("%lf", C);
//    return 0;
//}
#include<stdio.h>
int fact(int n)
{
    int i, num2 = 1;
    for (i = 1; i <= n; i++)
    {
        num2 = num2 * i;
    }
    return num2;
}
int main()
{
    int m, n, i, num1 = 1, num3 = 1;
    scanf_s("%d%d", &m, &n);
    int C = 0;
    for (i = 1; i <= m; i++)
    {
        num1 = num1 * i;
    }
    for (i = 1; i <= n - m; i++)
    {
        num3 = num3 * i;
    }
    C =fact(n)/(num1 * num3);
    printf("%d\n", num3);
    printf("%d\n", fact(n));
    printf("%d\n", num1);
    printf("%d", C);
    return 0;
}