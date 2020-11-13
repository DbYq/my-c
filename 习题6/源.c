#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double dist(double x1, double y1, double x2, double y2)
{
	double dist = 0.0;
	double z = 0.0;
	double k = 0.0;
	z = x2 - x1;
	k = y2 - y1;
	dist = sqrt(z * z + k * k);
	return dist;
}
int main()
{
	double x1, y1, x2, y2;
	printf("分别输入两点（x1,y1)与(x2,y2)：\n");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("距离dist=%.2f\n", dist(x1, y1, x2, y2));//此处%.2f为四舍五入的意思
	return 0;
}