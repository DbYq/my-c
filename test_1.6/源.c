#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int x, int y)
{
    return (x + y);
}
int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    printf(" %d\n", func((a + b, b + c, c + a), (d, e)));
    return 0;
}