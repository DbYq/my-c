#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int prime(int p);
//void Goldbach(int n);
//int main()
//{
//    int m, n, i, cnt;
//    scanf("%d %d", &m, &n);
//    if (prime(m) != 0) printf("%d is a prime number\n", m);
//    if (m < 6) m = 6;
//    if (m % 2) m++;
//    cnt = 0;
//    for (i = m; i <= n; i += 2) {
//        Goldbach(i);
//        cnt++;
//        if (cnt % 5) printf(", ");
//        else printf("\n");
//    }
//    return 0;
//}
//int prime(int p)
//{
//    int z = 1;
//    if (p <= 1)
//        return 0;
//    else
//    {
//        int i;
//        for (i = 2; i < p; i++)
//        {
//            if (p % i == 0)
//            {
//                z = 0;
//                break;
//            }
//        }
//    }
//    return z;
//}
//void Goldbach(int n)
//{
//    int i=2;
//    if (prime(n - 2) == 1)
//    {
//        printf("%d=%d+%d",n, i, n - i);
//    }
//    for (i = 3; i < 1000; i+=2)
//    {
//        if (prime(i) == 1 && prime(n - i) == 1)
//        {
//            printf("%d=%d+%d", n, i, n - i);
//            break;
//        }
//    }
//}
//#include <stdio.h>
//#include<math.h>
//int reverse(int number);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", reverse(n));
//    return 0;
//}
//int reverse(int number)
//{
//    int count = 0, i, z = 1, k;
//    int sum = 0;
//    if (number < 0)
//    {
//        z = 0;
//        number = -number;  
//    }
//    k = number;
//    while (number > 9)
//    {
//     number = number / 10;
//     count++;
//     }
//    sum=k/pow(10,count);
//    for (i = count; i >= 1; i--)
//    {
//        sum = sum + (k % 10) * pow(10, i);
//        k = k / 10;
//    }
//    if (z == 0)
//    {
//        sum = -sum;
//        return sum;
//    }
//    else
//        return sum;
//}