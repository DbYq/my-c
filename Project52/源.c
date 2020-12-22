#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//double print(double sum,double eps)
//{
//	double i = 1.0;
//	double k = 1.0, z = 1.0;
//	for (i = 1; i < 1000; i++)
//	{
//		k = k * i;
//		z = z * (2 * i + 1);
//		if ( k / z < eps)
//		{
//			break;
//		}
//		sum = sum +  k / z;
//	}
//	return sum;
//}
//int main()
//{
//	double eps;
//	scanf("%le", &eps);
//	double sum = 1.0;
//	double sum2 = print(sum,eps);
//	printf("PI = %.5lf", 2*sum2);
//	return 0;
//}
//#include<stdio.h>
//#define NUM 100
//int main()
//{
//	char arr[NUM];
//	gets(arr);
//	int i, j, count = 0;
//	for (i = 0; i < NUM; i++)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		if (arr[i] != ' ')
//		{
//			for (j = i; j < NUM; j++)
//			{
//				if (arr[j] == ' '||arr[j]=='\0')
//				{
//					count++;
//					i = j;
//					break;
//				}
//			}
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}
#include <stdio.h>
#include <math.h>

double funcos(double e, double x)
{
    double i;
    double sum = 1;
    double j, k = -1, z = 1;
    double num;
    for (i = 2; i < 1000; i+=2)
    {
        num = pow(x, i);
        for (j = 1; j <= i; j++)
        {
            z = z * j;
        }
        if ( num / z < e)
        {
            break;
        }
        sum = sum + k * num / z;
        z = 1;
        k = -k;
    }
    return sum;
}

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}