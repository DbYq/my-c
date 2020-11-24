#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int i;
//    for (i = 5; i <= 100000; i++)
//    {
//        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
//        {
//            printf("%d", i);
//            break;
//        }
//        
//    }
//    
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    double sum = 0.0, k = 2.0, i,z=1.0;
//    
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        double num;
//        num =  1.0*(k / z);
//        sum = sum + num;
//        double q = z; 
//        z = k;
//        k = k + q;
//    }
//    printf("%.2lf", sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
////int print(int sum,int n,int a)
////{
////    
////        int i,z;
////        
////        
////        while (n > 0)
////        {
////             print(sum, n - 1, a);
////             for (i = 0; i <= n; i += 1)
////             {
////                 z = sum + a * pow(10, i);
////             }
////             sum = sum + z;
////        
////        }
////        return sum;
////        
////}
//int main()
//{
//    int a, n,i,sum=0 ;
//    scanf("%d%d", &a, &n);
//    while (n >= 0)
//    {
//        for (i = 0; i < n; i += 1)
//        {
//            sum = sum + a * pow(10, i);
//        }
//        n -= 1;
//    }
//    //for (i = 0; i < n; i++)
//    //{
//    //    sum = sum + ;
//    //}
//    printf("s = %d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double eps, sum = 0.0;
//    scanf("%lf", &eps);
//    int i, z = 1;
//    for (i = 1; i <= 1000; i += 3)
//    {
//        if ((1.0 * 1 / i) <= eps)
//        {
//            sum = sum + z * 1.0 * (1 / i);
//            z = -z;
//        }
//    }
//    printf("sum = %.6lf", sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    double eps, k = 0.0;
    scanf("%lf", &eps);
    int i, z = 1;
    for (i = 1; ; i += 3)
    {
        k = k + z * (1.0 / i);
        z = -z;
        if (1.0 / i <= eps)
            break;
    }
    printf("sum = %.6lf", k);
    return 0;
}