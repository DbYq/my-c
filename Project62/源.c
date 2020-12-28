#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAXN 20
//
//void CountOff(int n, int m, int out[]);
//
//int main()
//{
//    int out[MAXN], n, m;
//    int i;
//
//    scanf("%d %d", &n, &m);
//    CountOff(n, m, out);
//    for (i = 0; i < n; i++)
//        printf("%d ", out[i]);
//    printf("\n");
//
//    return 0;
//}
//void CountOff(int n, int m, int out[])
//{
//    while (n > 1)
//    {
//
//    }
//}
#include <stdio.h>
#define MAXN 20

void delchar(char* str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}
void delchar(char* str, char c)
{
    int i, j, t = 1;
    for (i = MAXN - 1; i >= 0; i--)
    {
        if (str[i] == c)
        {
            for (j = i; j < MAXN - t; j++)
            {
                str[j] = str[j + 1];
            }
            t++;
        }
    }
}