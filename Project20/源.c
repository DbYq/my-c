#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num=2, month=1;
//	while (num < n)
//	{
//		if (month <= 2)
//		{
//			num = 1;
//		}
//		else if (month == 3)
//		{
//			num = 2;
//		}
//		else if (month > 3)
//		{
//			num = num + (month - 3);
//		}
//		month++;
//		//printf("%d ", num);
//		
//	}
//	printf("%d ", month-2);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = 2, month = 3;
//	if (1 == n)
//	{
//		printf("%d", 1);
//		printf("\n%d", 2);
//	}
//	else
//	{
//		while(month>=3)
//		{
//			if (num < n)
//			{
//				num = num + (month - 3);
//				month++;
//			}
//			else
//				break;
//		}
//		printf("%d", month);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    long h, n;
//    int i;
//    scanf("%d%d", &h, &n);
//    double sum = h,high;
//    for (i = 1; i <= n; i++)
//    {
//        high = h * pow((1.0 / 2), i);
//        sum = sum + 2.0*high;
//    }
//    sum = sum - high;
//    printf("%.1lf %.1lf", sum, high);
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
    int h, n;
    int i;
    scanf("%d%d", &h, &n);
    double sum = 0.0, high = 0.0;
    for (i = 1; i <= n; i++)
    {
       
        if (1 == i)
        {
            sum = sum + h;
        }
        
        else
        {
            sum = sum + 2.0 * high;
        }
        high = 1.0*h / pow(2, i);
    }
    printf("%.1lf %.1lf", sum, high);
    return 0;
}