#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
//    int i, n;
//    for (i = 1; i <= 5; i++)
//    {
//        scanf("%d", &n);
//        if (1 == n)
//        {
//            printf("price = 3.00\n");
//        }
//        else if (2 == n)
//        {
//            printf("price = 2.50\n");
//        }
//        else if (3 == n)
//        {
//            printf("price = 4.10\n");
//        }
//        else if (4 == n)
//        {
//            printf("price = 10.20\n");
//        }
//        else if(0==n)
//        {
//            break;
//        }
//        else
//        {
//            printf("price = 0.00\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float wages;
//    scanf("%f", &wages);
//    if (wages <= 1600)
//    {
//        printf("0.00");
//    }
//    else if (wages > 1600 && wages <= 2500)
//    {
//        //float k=0.05*(wages-1600);
//        printf("%.2f", 0.05 * (wages - 1600));
//    }
//    else if (wages > 2500 && wages <= 3500)
//    {
//        printf("%.2f", 0.10 * (wages - 1600));
//    }
//    else if (wages > 3500 && wages <= 4500)
//    {
//        printf("%.2f", 0.15 * (wages - 1600));
//    }
//    else
//    {
//        printf("%.2f", 0.20 * (wages - 1600));
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i, a = 0, b = 0, c = 0, d = 0, e = 0;
//    scanf("%d", &n);
//    int score;
//    for (i = 1; 1 <= n; i++)
//    {
//        scanf("%d", &score);
//        if (score >= 90)
//        {
//            a++;
//        }
//        else if (score >= 80)
//        {
//            b++;
//        }
//    }
//    printf("%d %d", a, b);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i, a = 0, b = 0, c = 0, d = 0, e = 0;
//    scanf("%d", &n);
//    float score;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%f", &score);
//        if (score >= 90)
//        {
//            a++;
//        }
//        else if (score >= 80)
//        {
//            b++;
//        }
//        else if (score >= 70)
//        {
//            c++;
//        }
//        else if (score >= 60)
//        {
//            d++;
//        }
//        else
//        {
//            e++;
//        }
//    }
//    printf("%d %d %d %d %d", a, b, c, d, e);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, c; 
//    float area;
//    float C;
//    scanf("%d%d%d", &a,& b,& c);
//    if ((a + b) <= c || (a + c) <= b || (b + c) <= a)
//    {
//        printf("These sides do not correspond to a valid triangle");
//    }
//    else
//    {
//        C= (a + b + c) * 1.0;
//        float s =C / 2.0;
//        area = sqrt(s * (s - a) * (s - b) * (s - c)*1.0);
//        printf("area = %.2f; perimeter = %.2f", area, C);
//    }
//    
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 1 || n % 5 == 2 || n % 5 == 3)
    {
        printf("Fishing in day %d", n);
    }
    else if (n % 5 == 4 || n % 5 == 0)
    {
        printf("Drying in day %d", n);
    }
    return 0;
}