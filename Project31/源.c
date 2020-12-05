#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n, i,j;
//    double k;
//    double sum = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        k = 1;
//        for (j = 1; j <= i; j++)
//        {
//            k = k * j;
//        }
//        k = 1.0/ k;
//        sum = sum +k ;
//    }
//    printf("%.8f", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j, n;
//	double item, sum;
//	sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		item = 1;
//		for (j = 1; j <= i; j++) {
//			item = item * j;
//		}
//		item = 1.0 / item;
//		sum = sum + item;
//	}
//	printf("%.8f", sum);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m, n, i, sum, j,count=0,k;
//    scanf("%d %d", &m, &n);
//    for(i=m;i<=n;i++)
//    {
//            sum = 0;
//            
//            for (j = 1; j < i; j++)
//            { 
//                
//                if (i % j == 0)
//                {
//                   
//                    sum = sum + j;
//                }
//            }
//            if (sum == i)
//            {
//                count++;
//                printf("%d = 1", i);
//                for (k = 2; k < i; k++)
//                {
//                    if (i % k == 0)
//                    //{
//                        printf(" + %d", k);
//                    }
//                }
//                printf("\n");
//            }
//            
//    }
//    if (count == 0)
//        printf("None");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int sum = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	if (sum == i)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}
#include<stdio.h>
int main()
{
    int m, n, arr1[100], arr2[100], i, j, k=0;
    scanf_s("%d", &m);
    for (i = 1; i <= m; i++)
    {
        sacnf_s("%d", &arr1[i]);
    }
    scanf_s("%d", &n);
    for (j = 1; j <= n; j++)
    {
        sacnf_s("%d", &arr2[j]);
    }
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (arr1[i] != arr2[j])
            {
                k ++;
            }
            else if (arr1[i] == arr2[j])
            {
                k =0;
            }
        }
        if (k != 0)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}