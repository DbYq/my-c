#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, i, sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i <= 9; i++)
//    {
//        int z = pow(10, i);
//
//        sum = sum + n/z%10;
//
//    }
//    printf("%d", sum);
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, sum = 0, num = 0;
    scanf("%d", &n);
    for (i = 0; i <= 9; i++)
    {
        int z = pow(10, i);
        sum = sum + n / z % 10;
    }
    while (n > 0)
    {
        n=n/10;
        num++;
    }
    printf("%d %d", num, sum);
    return 0;
}