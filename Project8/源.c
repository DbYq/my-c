//#include<stdio.h>
//int main()
//{
//    int C = 26;
//    int F = 0;
//    F = 9 * C / 5 + 32;
//    printf("celsius = %d, fahr = %d", C, F);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float x, t;
//    scanf("%f", &x);
//    if (0 != x)
//    {
//        t = 1 / x;
//        printf("f(%.1f) = %.1f", x, t);
//    }
//    else
//    {
//        printf("f(0.0) = 0.0", x);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int f, c;
    scanf("%d", &f);
    c = 5 * (f - 32) / 9;
    printf("Celsius = %d", c);
    return 0;
}