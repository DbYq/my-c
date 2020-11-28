#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAXN 10
//
//int even(int n)
//{
//    if (n % 2 == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int OddSum(int List[], int N)
//{
//    int i,sum=0;
//    for (i = 0; i < N; i++)
//    {
//        if (List[i] % 2 != 0)
//        {
//            sum = sum + List[i];
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    int List[MAXN], N, i;
//
//    scanf("%d", &N);
//    printf("Sum of ( ");
//    for (i = 0; i < N; i++) {
//        scanf("%d", &List[i]);
//        if (even(List[i]) == 0)
//            printf("%d ", List[i]);
//    }
//    printf(") = %d\n", OddSum(List, N));
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//double dist(double x1, double y1, double x2, double y2)
//{
//    double i, j,l;
//    i = x1 - x2;
//    j = y1 - y2;
//    l = sqrt(pow(i, 2) + pow(j, 2));
//    return l;
//}
//
//int main()
//{
//    double x1, y1, x2, y2;
//
//    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int prime(int p)
//{
//    int j;
//    if (p < 2)
//    {
//        return 0;
//    }
//    else
//    {
//        for (j = 2; j < p; j++)
//        {
//            if (p % j == 0)
//            {
//                return 0;
//            }
//        }
//        if (p == j)
//        {
//            return 1;
//        }
//    }
//}
//int PrimeSum(int m, int n)
//{
//    int i,sum=0;
//        for (i = m; i <= n; i++)
//        {
//            int j;
//            for (j = 2; j < i; j++)
//            {
//                if (i % j == 0)
//                {
//                    break;
//                }
//            }
//            if (i == j)
//            {
//                sum = sum + i;
//            }
//        }
//    
//    return sum;
//}

//int main()
//{
//    int m, n, p;
//
//    scanf("%d %d", &m, &n);
//    printf("Sum of ( ");
//    for (p = m; p <= n; p++) {
//        if (prime(p) != 0)
//            printf("%d ", p);
//    }
//    printf(") = %d\n", PrimeSum(m, n));
//
//    return 0;
//}