#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int search(int n)
//{
//    int i,count=0;
//
//    for (i = 101; i <= n; i++)
//    {
//        int j;
//        for (j = 11; j < 100; j++)
//        {
//            int b, s, g;
//            if (pow(j, 2) == i)
//            {
//
//                /*b = i / 100 % 10;
//                s = i / 10 % 10;
//                g = i % 10;*/
//                if (i / 100 % 10 == i / 10 % 10)
//                {
//                    count++;
//                }
//                else if (i / 100 % 10 == i % 10)
//                {
//                    count++;
//                }
//                else if (i / 10 % 10 == i % 10)
//                {
//                    count++;
//                }
//            }
//            if (pow(j, 2) >= 1000)
//                break;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    int number;
//
//    scanf("%d", &number);
//    printf("count=%d\n", search(number));
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];
    scanf("%s", arr);
    int i;
    printf("%c %d",arr[i], i);
    return 0;
}