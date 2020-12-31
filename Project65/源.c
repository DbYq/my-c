#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAXN 10
//
//void sort(int a[], int n);
//
//int main()
//{
//    int i, n;
//    int a[MAXN];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//
//    sort(a, n);
//
//    printf("After sorted the array is:");
//    for (i = 0; i < n; i++)
//        printf(" %d", a[i]);
//    printf("\n");
//
//    return 0;
//}
//void sort(int a[], int n)
//{
//    int min, i, j, temp;
//    for (i = 0; i < n-1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (a[j] < a[i])
//            {
//                temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//}
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum { false, true } bool;

bool palindrome(char* s);

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if (palindrome(s) == true)
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
bool palindrome(char* s)
{
    int len = strlen(s);
    int i, k = 0; char a[20];
    int z = 0; char b[20];
    if (len == 2)
    {
        if (s[0] == s[1])
        {
            return true;
        }
        if (s[0] != s[1])
        {
            return false;
        }
    }
    for (i = 0; i <= len / 2; i++)
    {
        a[k] = s[i];
        k++;
    }
    for (i = len-1; i >= len / 2; i--)
    {
        b[z] = s[i];
        z++;
    }
    int q = 1;
    for (i = 0; i <= len / 2; i++)
    {
        if (a[i] != b[i])
        {
            q = 0;
        }
    }
    if (q == 0)
    {
        return false;
    }
    if (q == 1)
    {
        return true;
    }
}