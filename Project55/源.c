#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 80
//
//int getindex(char* s);
//
//int main()
//{
//    int n;
//    char s[MAXS];
//
//    scanf("%s", s);
//    n = getindex(s);
//    if (n == -1) printf("wrong input!\n");
//    else printf("%d\n", n);
//
//    return 0;
//}
//int getindex(char* s)
//{
//    int num, i;
//    if (*s == 'M')
//    {
//        num = 1;
//    }
//    else if (*s == 'T')
//    {
//        if (*(++s) == 'u')
//        {
//            num = 2;
//        }
//        else
//            num = 4;
//    }
//    else if (*s == 'W')
//    {
//        num = 3;
//    }
//    else if (*s == 'F')
//    {
//        num = 5;
//    }
//    else if (*s == 'S')
//    {
//        if (*(++s) == 'a')
//        {
//            num = 6;
//        }
//        else
//            num = 0;
//    }
//    else
//        num = -1;
//    return num;
//}
//#include <stdio.h>
//#include<math.h>
//int reverse(int number);
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", reverse(n));
//
//    return 0;
//}
//int reverse(int number)
//{
//    int k = 0;
//    if (number < 0)
//    {
//        number = -number;
//        k = 1;
//    }
//    int i, count=0;
//    int num = number;
//    int sum = 0, num2, num3 = 0;
//    while (num > 0)
//    {
//        num = num / 10;
//        count++;
//    }
//    for (i = count - 1; i >= 0; i--)
//    {
//        num2 = pow(10, count - i);
//        num3 = number % num2 - num3;
//        sum = sum + num3 * 10 ;
//    }
//    if (k == 1)
//    {
//        sum = -sum;
//    }
//    return sum;
//}