#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//int fn(int a, int n)
//{
//    int i,sum=0;
//    for (i = 0; i < n; i++)
//    {
//        int k =a * pow(10, i);
//        sum = sum + k;
//    }
//    return sum;
//}
//int SumA(int a, int n)
//{
//    int z = 0,i,sum2=0;
//    while (n - z > 0)
//    {
//        int sum = 0;
//        for (i = 0; i < n-z; i++)
//        {
//            int k = a * pow(10, i);
//            sum = sum + k;
//        }
//        sum2 = sum2 + sum;
//        z += 1;
//    }
//    return sum2;
//}
//int main()
//{
//    int a, n;
//
//    scanf("%d %d", &a, &n);
//    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
//    printf("s = %d\n", SumA(a, n));
//
//    return 0;
//}
//#include <stdio.h>
//
//int factorsum(int number)
//{
//    int i,sum=1;
//    for (i = 2; i < number; i++)
//    {
//        if (number % i == 0)
//        {
//            sum = sum + i;
//        }
//    }
//    if (sum == number)
//    {
//        return sum;
//    }
//}
//void PrintPN(int m, int n)
//{
//    int i, sum = 1,k,count=0;
//    if (m == 1)
//    {
//        printf("1 = 1\n");
//        m += 1;
//        count += 1;
//    }
//    for (k = m; k <= n; k++)
//    {
//        for (i = 2; i <( k/2); i++)
//        {
//            if (k % i == 0)
//            {
//                sum = sum + i;
//            }   
//            if (sum == k)
//                {
//                printf("%d = 1", k);
//                    for (int i = 2; i < (k/2); i++)
//                    {
//                        if (k % i == 0)
//                        {
//                            printf(" + %d", i);
//                        }
//                    }
//                    printf("\n");
//                    count++;
//                }
//        }
//        sum = 1;
//    }
//    if (count == 0)
//    {
//        printf("No perfectnumber");
//    }
//}
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}
//  �ٴη������ֲ���Ҫ#include<math.h>  ��//�о���Ҫһ��sqrt û������Ļ� ������number/2  ����˵ 36 �� 4*9=36 9*4=30����  
//int factorsum(int number) {           //������ظ���� 
//    int sum = 1;
//    for (int i = 2; i <= (number / 2); i++) {
//        if (number % i == 0) {
//            sum = sum + i;   // ���ʽ���� ѭ��number/2������ ���Ա�֤���ظ���ӣ� 
//        }                     //����#include<math.h>ʱ ѭ����sqrt(number)ʱ  ʹ��sum=sum+i+��number/i��;Ҳ�ɱ�֤��ѭ����� 
//    }
//    return sum;
//}
//void PrintPN(int m, int n) 
//{
//
//    int sum = 1;
//    int cnt = 0;  //��¼���������� cnt==0;��� No perfect number 
//    if (m == 1) {
//        printf("1 = 1\n");//1һ��������
//        m = m + 1;
//        cnt++;//  ������Ҫ++�� 
//    }
//
//    for (int x = m; x <= n; x++) {  //��m������n 
//
//        for (int i = 2; i <= (x / 2); i++) {
//            if (x % i == 0) {
//                sum = sum + i;
//            }
//        }
//
//        if (sum == x) {
//            printf("%d = 1", x);
//            for (int i = 2; i <= (x / 2); i++) {  //����������� ֻ�������һ�� ��Ϊ��С���ӳ���1 ����2�� 
//                if (x % i == 0) {
//                    printf(" + %d", i);   //������� ��x/2 Ϊ�˰������ 
//                }                             //һ��ʼ�о���Ҫ����洢���ֵ����� ���������� 
//            }        // ���������Ǻ�������ݣ� ���� ������       
//            printf("\n");                  // �������� ֻҪ���������x/2���ܰ����������� ����������� 
//            cnt++;
//        }
//
//        sum = 1;
//    }
//
//    if (cnt == 0) {
//        printf("No perfect number");
//    }
//}
//#include <stdio.h>
//#include <string.h>
//
//#define N 100
//
//int factorsum(int number);
//void PrintPN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}
//
//int factorsum(int number) {
//    int a[N], i, j = 0, n = 0, sum = 0;
//
//    if (number == 1)
//        return 1;
//
//    for (i = 1; i < number; i++)
//        if (number % i == 0) {
//            a[j++] = i;
//        }
//
//    for (i = 0; i < j; i++)
//        sum += a[i];
//
//    if (sum == number)
//        return 1;
//    return 0;
//}
//void PrintPN(int m, int n) {
//    int i, j, k = 0, l, a[N];
//    if (m == 1) {
//        printf("%d = %d\n", m, m);
//        m += 1;
//    }
//
//    for (i = m; i <= n; i++) {
//        if (factorsum(i) == 1) {
//            for (j = 1; j < i; j++) {
//                if (i % j == 0) {
//                    a[k++] = j;
//                }
//            }
//            printf("%d = ", i);
//            for (l = 0; l < k - 1; l++)
//                printf("%d + ", a[l]);
//            printf("%d\n", a[l]);
//            k = 0;
//        }
//    }
//}
int factorsum(int number)
{
    int sum = 1, i;
    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
            sum += number / i;
        }
    }
    return sum;
}

void PrintPN(int m, int n)
{
    int i, j, flag = 0;
    for (i = m; i <= n; i++)
    {
        if (factorsum(i) == i)
        {
            flag = 1;
            printf("%d = ", i);
            if (i == 1)
                printf("1");
            for (j = 1; j < i; j++)
                if (i % j == 0)
                    j == 1 ? printf("1") : printf(" + %d", j);
            printf("\n");
        }
    }
    if (!flag)
        printf("No perfect number");
}