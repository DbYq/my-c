//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float money, year, rate, interest;
//	scanf_s("%f%f%f", &money, &year, &rate);
//	interest = money * pow((1 + rate), year) - money;
//	printf("interest = %.2f", interest);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x, r;
//    scanf_s("%lf", &x);
//    if (x >= 0)
//    {
//        r = pow(x, 0.5);
//        printf("f(%.2lf) = %.2lf", x, r);
//    }
//    else
//    {
//        
//        r = (x + 1) * (x + 1); + 2*x + 1 / x;
//        printf("f(%.2lf) = %.2lf", x, r);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int q, w, e, r, sum;
//    float a;
//    scanf("%d%d%d%d", &q, &w, &e, &r);
//    sum = q + w + e + r;
//    a = sum / 4.0;
//    printf("Sum = %d; Average = %.1f", sum, a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
    /*float x, r=0.0;
    scanf_s("%f", &x);
    if (x != 10)
    {
        printf("f(%.1f) = %.1f", x, x);
    }
    else
    {
        r = 1.0 / x;
        printf("f(%.1f) = %.1f", x, r);
    }*/
   /* double x,cost;
    scanf_s("%lf", &x);
    if (x < 0)
    {
        printf("Invalid Value!");
    }
    else if(x <= 50&&x>=0)
    {
        printf("cost = %.2lf", x * 0.53);
    }
    else
    {
        printf("cost = %.2lf", (50 * 0.53 + (x - 50) * 0.58));
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    /*int x, y, cs, cf, ds, df, ys, yf;
    scanf_s("%d%d", &x, &y);
    cf = (x / 1 % 10) + ((x / 10 % 10) * 10);
    cs = (x / 100 % 10) + ((x / 1000 % 10) * 10);
    df = (y / 1 % 10) + ((y / 10 % 10) * 10);
    ds = (y / 100 % 10) + ((y / 1000 % 10) * 10);
    ys = ds - cs;
    yf = df - cf;
    if (yf < 0)
    {
        ys = ys - 1;
        yf = yf + 60;
    }
    printf("%02d:%02d",ys,yf);
    return 0;*/
    /*int N = 0, i = 1;
    double z = 0;
    scanf_s("%d", &N);
    for (i = 1; i <= N; i++)
    {
        z = z+(1.0/i);
    }
    printf("sum = %.6lf", z);
    return 0;*/
    int N = 0, i = 1, Sn;
    double z = 0.0;
    scanf_s("%d", &N);
    Sn =2*N - 1;
    for (i = 1; i <= Sn; i += 2)
    {
        z = z + (1.0 / i);
    }
    printf("sum = %.6lf", z);
    return 0;
}