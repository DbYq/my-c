#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int difference=0, num1, num2, i=1;
//   while(difference!=495)
//   {
//        int b, s, g,k;
//        b = n / 100 % 10;
//        s = n / 10 % 10;
//        g = n / 1 % 10;
//        //printf("%d %d %d", b, s, g);
//        if (b < s)
//        {
//            k = b;
//            b = s;
//            s = k;
//        }
//       
//        if (b < g)
//        {
//            k = b;
//            b = g;
//            g = k;
//        }
//      if (s < g)
//        {
//            k = s;
//            s = g;
//            g = k;
//        } 
//      num1 = b * 100 + s * 10 + g;
//      num2 = g * 100 + s * 10 + b;
//      difference = num1 - num2;
//      printf("%d: %d - %d = %d;\n", i, num1, num2, difference);
//      //printf("\n%d %d %d", b, s, g);
//      n = difference;
//      i++;
//    }
//    return 0;
//}
#include<stdio.h>
#include<math.h> 
int prime(int x)
{
    int i;
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2;; i++)
    {
        if (prime(i) && prime(n - i))
        {
            printf("%d = %d + %d", n, i, n - i);
            break;
        }
    }
    return 0;
}
