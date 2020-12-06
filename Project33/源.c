#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define MAX 20
//int main()
//{
//    int n, arr[MAX], i, x, k = MAX, b;
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//    if (n == 0)
//    {
//        return 0;
//    }
//    for (i = 1; i <= n; i++)
//    {
//        if (arr[i] < x)
//        {
//            printf("%d ", arr[i]);
//        }
//        
//        if (arr[i] >= x && i < k)
//        {
//            b = arr[i];
//            arr[i] = x;
//            printf("%d %d ", x, b);
//
//            k = i;
//        }
//        if (i > k)
//        {
//            printf("%d ", arr[i]);
//        }
//
//    }if (arr[n] < x)
//            printf("%d ", x);
//    return 0;
//}
//7-1-7²éÕÒÕûÊý£»
//#include<stdio.h>
//int main()
//{
//    int m, n, arr[20], i, k = 0;
//    scanf("%d%d", &m, &n);
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        if (arr[i] == n)
//        {
//            k = 1;
//            printf("%d", i);
//            break;
//        }
//    }
//    if (k == 0)
//    {
//        printf("Not Found");
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n, arr[20], i, num, count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n == 1)
    {
        printf("%d", arr[1]);
    }
    for (i = 1; i < n; i++)
    {
        if (count == 3)
        {
            printf("\n");
            count = 0;
        }
        if (count < 3)
        {
            num = arr[i + 1] - arr[i];
            printf("%d", num);
            count++;
        }
        if (count <= 2)
        {
            printf(" ");
        }

    }
    return 0;
}