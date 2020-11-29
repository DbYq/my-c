#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void sum_diff(float op1, float op2, float* psum, float* pdiff)
//{
//    *psum = op1 + op2;
//    *pdiff = op1 - op2;
//}

//int main()
//{
//    float a, b, sum, diff;
//
//    scanf("%f %f", &a, &b);
//    sum_diff(a, b, &sum, &diff);
//    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
//
//    return 0;
//}
//#include <stdio.h>
//
//void findmax(int* px, int* py, int* pmax)
//{
//    if (*px > *py)
//        *pmax = *px;
//    else if (*px < *py)
//        *pmax = *py;
//    else
//        *pmax = *px;
//}

//int main()
//{
//    int max, x, y;
//
//    scanf("%d %d", &x, &y);
//    findmax(&x, &y, &max);
//    printf("%d\n", max);
//
//    return 0;
//}
//#include <stdio.h>
//
//void splitfloat(float x, int* intpart, float* fracpart)
//{
//    *intpart = (int)x;
//    *fracpart = x - *intpart;
//}
//
//int main()
//{
//    float x, fracpart;
//    int intpart;
//
//    scanf("%f", &x);
//    splitfloat(x, &intpart, &fracpart);
//    printf("The integer part is %d\n", intpart);
//    printf("The fractional part is %g\n", fracpart);
//
//    return 0;
//}
//#include <stdio.h>
//#define MAXN 10
//
//int search(int list[], int n, int x)
//{
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        if (list[i] == x)
//        {
//            return i;
//            break;
//        }
//        else
//            return -1;
//    }
//}
//#include <stdio.h>
//#define MAXN 10
//
//int search(int list[], int n, int x)
//{
//    int i;
//    if (n == 0)
//    {
//        return -1;
//    }
//    if (n > 0)
//    {
//        int count = 0;
//        for (i = 0; i < n; i++)
//        {
//            if (list[i] == x)
//            {
//                return i;
//                break;
//            }
//            count++;
//        }
//        if (count == n)
//            return -1;
//    }
//}
//int main()
//{
//    int i, index, n, x;
//    int a[MAXN];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    scanf("%d", &x);
//    index = search(a, n, x);
//    if (index != -1)
//        printf("index = %d\n", index);
//    else
//        printf("Not found\n");
//
//    return 0;
//}
#include <stdio.h>
#define MAXS 20

void f(char* p)
{
    
}
void ReadString(char* s); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}
