//#include<stdio.h>
//int main()
//{
//    int N = 0, i = 1, Sn;
//    double z = 0;
//    scanf("%d", &N);
//    Sn = 3 * N - 2;
//    for (i = 1; i <= Sn; i += 3)
//    {
//        int q;
//        if (0 == i % 2)
//        {
//            q = -1;
//        }
//        else if (0 != i % 2)
//        {
//            q = 1;
//        }
//        z = z + q * (1.0 / i);
//    }
//    printf("sum = %.3lf", z);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int lower, upper;
//    scanf("%d%d", &lower, &upper);
//    if (upper <= 100 && lower <= upper)
//    {
//        printf("fahr celsius");
//        int i;
//        float j;
//        for (i = lower; i <= upper; i += 2)
//        {
//            j = 5.0 * (i - 32) / 9.0;
//            printf("\n%d%6.1f", i, j);
//        }
//    }
//    else
//    {
//        printf("Invalid.");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    int an = 2 * n - 1;
//    double sum = 0.0;
//    for (i = 1; i <= an; i += 2)
//    {
//        int d = 0;
//        for (d = 1; d <= n; d++)
//        {
//
//            int j = 1;
//            if (0 == d % 2)
//            {
//                j = -j;
//            }
//            else if (0 != d % 2)
//            {
//                j = j;
//            }
//            double k = d / i;
//            sum = sum + j * k;
//        }
//    }
//    printf("%.3lf", sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n, i,k=-1;
    double sum = 0.0;
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = -k;
        sum = sum + 1.0*k * i / (2 * i - 1);
    }
    printf("%.3lf",sum);
    return 0;
}