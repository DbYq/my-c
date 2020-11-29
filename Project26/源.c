#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//double funcos(double e, double x)
//{
//    int i,k=1;
//    double sum = 0.0;
//    int num2 = 1;
//    for (i = 0; ; i += 2)
//    {
//        double num1 = pow(x, i);
//        int j;
//        
//        if (i == 0)
//        {
//            num2 = 1;
//        }
//        else if(i!=0)
//        {
//            for (j = 1; j <= i; j++)
//            {
//                num2 = num2 * j;
//            }
//        }
//        sum = sum +k * num1 / num2;
//        if (num1 / num2 < e)
//        {
//            break;
//        }
//        k = -k;
//        
//    }
//    return sum;
//}
//
//int main()
//{
//    double e, x;
//
//    scanf("%lf %lf", &e, &x);
//    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, num = 1;;
//	scanf("%d", &i);
//	int j;
//	for (j = 1; j <= i; j++)
//	{
//		num = num * j;
//	}
//	printf("%d", num);
//	return 0;
//}
//#include <stdio.h>
//
//int gcd(int x, int y)
//{
//    int k;
//    while (0 != x % y)
//    {
//        k = x%y;
//        x = y;
//        y = k;
//    }
//    return y;
//}

//int main()
//{
//    int x, y;
//
//    scanf("%d %d", &x, &y);
//    printf("%d\n", gcd(x, y));
//
//    return 0;
//}
//#include <stdio.h>
//#define MAXS 15
//
//void StringCount(char s[])
//{
//    int sz = strlen(s);
//    int i=0, letter = 0, blank = 0, digit = 0, other = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//            letter++;
//        else if (s[i] == '\n' || s[i] == ' ')
//        {
//            blank++;
//        }
//        else if (s[i] >= '0' && s[i] <= '9')
//        {
//            digit++;
//        }
//        else
//        {
//            other++;
//        }
//    }
//    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//}
//void ReadString(char s[]);

//int main()
//{
//    char s[MAXS];
//
//    ReadString(s);
//    StringCount(s);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a;
//
//    int i, l = 0, b = 0, d = 0, o = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%c", &a);
//        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//            l++;
//        else if (a >= '0' && a <= '9')
//            d++;
//        else if (a == ' ' || a == '\n')
//            b++;
//        else
//            o++;
//    }
//    printf("letter = %d, blank = %d, digit = %d, other = %d", l, b, d, o);
//    return 0;
//}